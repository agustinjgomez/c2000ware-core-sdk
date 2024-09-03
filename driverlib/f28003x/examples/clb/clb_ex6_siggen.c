//#############################################################################
//
// FILE:   clb_ex6_siggen.c
//
// TITLE:  CLB Signal Generator.
//
//! \addtogroup driver_example_list
//! <h1>CLB Signal Generator</h1>
//!
//! For the detailed description of this example, please refer to:
//!  `C2000Ware_PATH\utilities\clb_tool\clb_syscfg\doc\CLB Tool Users Guide.pdf`
//!
//! This example uses CLB1 to generate a rectangular wave and CLB2 to check the 
//! rectangular wave generated by CLB1 doesnât exceed the defined duty cycle and 
//! period limits.
//!
//
//
//#############################################################################
// $TI Release: F28003x Support Library v5.03.00.00 $
// 
// $Copyright:
// Copyright (C) 2024 Texas Instruments Incorporated - http://www.ti.com/
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



#include "driverlib.h"
#include "device.h"
#include "clb_config.h"
#include "clb.h"
#include "board.h"


__interrupt void clb2ISR(void);

// GPREG settings:
// bit 2 = enable
// bit 1 = ISR end flag
// bit 0 not used
uint32_t gpreg1 = 1;


bool error_low = false;
bool error_hi  = false;


void main(void)
{
    Device_init();
    Device_initGPIO();

    //
    // map interrupts
    //
    Interrupt_initModule();
    Interrupt_initVectorTable();

    Interrupt_register(INT_CLB2, &clb2ISR);


    //
    // initialize CLB tiles
    //
	SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_CLB1);
	SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_CLB2);

    Board_init();

    initTILE1(myTILE1_BASE);
    initTILE2(myTILE2_BASE);

    //
    // enable interrupts
    //
    Interrupt_enable(INT_CLB2);
    EINT;

    //
    // enable CLB counters
    //
    HWREG(0x3100) = 0x6;
    HWREG(0x3500) = 0x6;
    CLB_setGPREG(myTILE1_BASE, gpreg1);


    while(1)
    {
        asm(" NOP");
    }
}



__interrupt void clb2ISR(void)
{
        asm(" ESTOP0");

    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP5);
}

//
// end of file //
//
