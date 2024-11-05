//###########################################################################
//
// FILE:    f2838x_mcbsp.c
//
// TITLE:   F2838x Device McBSP Initialization & Support Functions.
//
//###########################################################################
//
//
// 
// C2000Ware v5.04.00.00
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
//###########################################################################

//
// Included Files
//
#include "f2838x_device.h"
#include "f2838x_examples.h"

//
// MCBSP_INIT_DELAY determines the amount of CPU cycles in the 2 sample rate
// generator (SRG) cycles required for the Mcbsp initialization routine.
// MCBSP_CLKG_DELAY determines the amount of CPU cycles in the 2 clock
// generator (CLKG) cycles required for the Mcbsp initialization routine.
//

//
// Defines
//
#define CPU_SPD              200E6
#define MCBSP_SRG_FREQ       CPU_SPD/4   // SRG input is LSPCLK (SYSCLKOUT/4)
                                         // for examples
#define CLKGDV_VAL           1

// # of CPU cycles in 2 SRG cycles-init delay
#define MCBSP_INIT_DELAY     2*(CPU_SPD/MCBSP_SRG_FREQ)

// # of CPU cycles in 2 CLKG cycles-init delay
#define MCBSP_CLKG_DELAY     2*(CPU_SPD/(MCBSP_SRG_FREQ/(1+CLKGDV_VAL)))

//
// Function Prototypes
//
void delay_loop(void);      // Delay function used for SRG initialization
void clkg_delay_loop(void); // Delay function used for CLKG initialization

//
// InitMcbsp - This function initializes the McBSP to a known state.
//
// To use McBSPB update the following function to write to
// McbspbRegs.
//
void InitMcbspa(void)
{
    //
    // Reset the McBSP
    // Disable all interrupts
    // Frame sync generator reset
    // Sample rate generator reset
    // Transmitter reset
    // Receiver reset
    //
    McbspaRegs.SPCR2.bit.FRST = 0;
    McbspaRegs.SPCR2.bit.GRST = 0;
    McbspaRegs.SPCR2.bit.XRST = 0;
    McbspaRegs.SPCR1.bit.RRST = 0;

    //
    // Enable loop back mode
    // This does not require external hardware
    //
    McbspaRegs.SPCR2.all = 0x0000;
    McbspaRegs.SPCR1.all = 0x8000;

    //
    // RX data delay is 1 bit
    // TX data delay is 1 bit
    //
    McbspaRegs.RCR2.bit.RDATDLY = 1;
    McbspaRegs.XCR2.bit.XDATDLY = 1;

    //
    // No clock sync for CLKG
    // Frame-synchronization period
    //
    McbspaRegs.SRGR2.bit.GSYNC = 0;
    McbspaRegs.SRGR2.bit.FPER = 320;

    //
    // Frame-synchronization pulses from
    // the sample rate generator
    //
    McbspaRegs.SRGR2.bit.FSGM = 1;

    //
    // Sample rate generator input clock is LSPCLK
    //
    McbspaRegs.SRGR2.bit.CLKSM = 1;
    McbspaRegs.PCR.bit.SCLKME = 0;

    //
    // Divide-down value for CLKG
    // Frame-synchronization pulse width
    //
    McbspaRegs.SRGR1.bit.CLKGDV = CLKGDV_VAL;
    clkg_delay_loop();
    McbspaRegs.SRGR1.bit.FWID = 1;

    //
    // CLKX is driven by the sample rate generator
    // Transmit frame synchronization generated by internal
    // sample rate generator
    //
    McbspaRegs.PCR.bit.CLKXM = 1;
    McbspaRegs.PCR.bit.FSXM = 1;

    //
    // Enable Sample rate generator and
    // wait at least 2 CLKG clock cycles
    //
    McbspaRegs.SPCR2.bit.GRST = 1;
    clkg_delay_loop();

    //
    // Release from reset
    // RX, TX and frame sync generator
    //
    McbspaRegs.SPCR2.bit.XRST = 1;
    McbspaRegs.SPCR1.bit.RRST = 1;
    McbspaRegs.SPCR2.bit.FRST = 1;
}

//
// InitMcbspaInt - Enable TX and RX interrupts
//
// To use McBSPB update the following function to write to
// McbspbRegs.
//
void InitMcbspaInt(void)
{
    // Reset TX and RX
    // Enable interrupts for TX and RX
    // Release TX and RX
    McbspaRegs.SPCR2.bit.XRST = 0;
    McbspaRegs.SPCR1.bit.RRST = 0;
    McbspaRegs.MFFINT.bit.XINT = 1;
    McbspaRegs.MFFINT.bit.RINT = 1;
    McbspaRegs.SPCR2.bit.XRST = 1;
    McbspaRegs.SPCR1.bit.RRST = 1;
}

//
// InitMcbspa8bit - McBSP uses an 8-bit word for both TX and RX.
//
// To change the word length for RX and TX the values written
// to the bit RWDLEN1 and XWDLEN1 in the function have to be
// updated.
//
// 8-bit word  - 0h
// 12-bit word - 1h
// 16-bit word - 2h
// 20-bit word - 3h
// 24-bit word - 4h
// 32-bit word - 5h
//

void InitMcbspa8bit(void)
{
    McbspaRegs.RCR1.bit.RWDLEN1 = 0;
    McbspaRegs.XCR1.bit.XWDLEN1 = 0;
}

//
// delay_loop - Delay function (at least 2 SRG cycles)
//              Required in McBSP initialization
//
void delay_loop(void)
{
    long i;
    for (i = 0; i < MCBSP_INIT_DELAY; i++) {}
}

//
// clkg_delay_loop - Delay function (at least 2 CLKG cycles)
//                   Required in McBSP init
//
void clkg_delay_loop(void)
{
    long i;
    for (i = 0; i < MCBSP_CLKG_DELAY; i++) {}
}

//
// End of file
//
