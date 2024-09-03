//#############################################################################
//
// FILE:   clb_ex31_tdm_serial_port.c
//
// TITLE:  CLB TDM Serial Port Example
//
//! \addtogroup driver_example_list
//! <h1>CLB TDM Serial Port</h1>
//!
//! For the detailed description of this example, please refer to:
//!  How to Implement Custom Serial Interfaces Using the Configurable Logic
//!  Block (CLB) Application Note (SPRAD62).
//!
//! In this example a single CLB tile is used to input a TDM stream and
//! generate a TDM output stream. The CLB generates a CPU interrupt when four
//! 32-bit words are received. The CPU can load four 32-bit values to the CLB
//! FIFO for transmission. The CLB and CPU are configured to run at their
//! maximum speed.
//!
//! This example is only available on C2000 MCU devices with CLB types 2 and up.
//!
//! \b External \b Connections \n
//!
//! TDM Input Signal     GPIO pin
//! FSYNC_IN             GPIO00
//! BCLK_IN              GPIO01
//! DATA1_IN             GPIO02
//!
//! TDM Output Signal    GPIO pin
//! FSYNC_OUT            GPIO04
//! BCLK_OUT             GPIO05
//! DATA1_OUT            GPIO06
//
//#############################################################################
// $TI Release: $
// 
// 
// C2000Ware v5.03.00.00
//
// Copyright (C) 2024 Texas Instruments Incorporated - http://www.ti.com
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
// 
//   Redistributions of source code must retain the above copyright 
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the   
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// $
//#############################################################################

//
// Included Files
//
#include "driverlib.h"
#include "device.h"
#include "board.h"
#include "clb_config.h"

#define TDM_CHANNELS    8   // defines total number of channels in TDM stream
#define BUFFSIZE      TDM_CHANNELS*10 // defines total test length

// ISRs
__interrupt void clbISR(void);

// Local function declarations

// Global variable declarations
uint32_t rxDataCount = 0;
uint32_t rxData[BUFFSIZE];    // buffer for storing received data
uint32_t txData[BUFFSIZE];    // buffer for storing transmit data

//
// Main
//
void main(void)
                                                                                                                                                                                                                                                                            {
    uint32_t i = 0;

    Device_init();
    Device_initGPIO();

    Interrupt_initModule();
    Interrupt_initVectorTable();

    //
    // Init functions generated by sysconfig
    //
    Board_init();

    // Clear TX and RX buffers
    for(i=0;i<BUFFSIZE;i++)
    {
        rxData[i] = 0xFFFFFFFF;
        txData[i] = 0x00000000;
    }

    //
    // Init CLB
    //
    initTILE1(myCLBForTILE1_BASE);


    // Load CLB with initial data values
    {
        // Initialize the CLB HLC R1 register
        CLB_writeInterface(myCLBForTILE1_BASE, CLB_ADDR_HLC_R1,
                           0x00000000);

        // Initialize the CLB pull FIFO
        HWREG(myCLBForTILE1_BASE + CLB_DATAEXCH + CLB_O_PULL(0)) = 0x00000000;
        HWREG(myCLBForTILE1_BASE + CLB_DATAEXCH + CLB_O_PULL(1)) = 0x00000000;
        HWREG(myCLBForTILE1_BASE + CLB_DATAEXCH + CLB_O_PULL(2)) = 0x00000000;
        HWREG(myCLBForTILE1_BASE + CLB_DATAEXCH + CLB_O_PULL(3)) = 0x00000000;

        HWREG(myCLBForTILE1_BASE + CLB_LOGICCTL + CLB_O_BUF_PTR) = 0U;
    }

    //
    // Enable CLB
    //
    CLB_enableCLB(myCLBForTILE1_BASE);

    //
    // Enable interrupts in PIE block.
    //
    //
    Interrupt_enable(INT_CLB1);

    //
    // Enable Global Interrupt (INTM) and realtime interrupt (DBGM)
    //
    EINT;
    ERTM;

    while(1)
    {

    }
}

//
// local CLB ISR
//
__interrupt void clbISR(void)
{
    //
    // Read data from CLB Push FIFO & write new data to PULL FIFO
    // NOTE: Read and write access must complete before the start of the next 32-bit
    // word cycle.
    //
    rxData[rxDataCount] = HWREG(myCLBForTILE1_BASE + CLB_DATAEXCH + CLB_O_PUSH(0));
    rxData[rxDataCount+1] = HWREG(myCLBForTILE1_BASE + CLB_DATAEXCH + CLB_O_PUSH(1));
    rxData[rxDataCount+2] = HWREG(myCLBForTILE1_BASE + CLB_DATAEXCH + CLB_O_PUSH(2));
    rxData[rxDataCount+3] = HWREG(myCLBForTILE1_BASE + CLB_DATAEXCH + CLB_O_PUSH(3));

    HWREG(myCLBForTILE1_BASE + CLB_DATAEXCH + CLB_O_PULL(0)) = rxData[rxDataCount];
    HWREG(myCLBForTILE1_BASE + CLB_DATAEXCH + CLB_O_PULL(1)) = rxData[rxDataCount+1];
    HWREG(myCLBForTILE1_BASE + CLB_DATAEXCH + CLB_O_PULL(2)) = rxData[rxDataCount+2];
    HWREG(myCLBForTILE1_BASE + CLB_DATAEXCH + CLB_O_PULL(3)) = rxData[rxDataCount+3];

    //
    // Reset the FIFO pointers
    // Note: This is needed to force HLC to read/write from the top of the
    // pull/push FIFOs on the *next* channel.
    //
    HWREG(myCLBForTILE1_BASE + CLB_LOGICCTL + CLB_O_BUF_PTR) = 0U;

    rxDataCount+=4;

    // Check for end of RX array
    if (rxDataCount+4 > BUFFSIZE)
    {
        rxDataCount = 0;
    }

    CLB_clearInterruptTag(myCLBForTILE1_BASE);
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP5);
}


//
// End of File
//