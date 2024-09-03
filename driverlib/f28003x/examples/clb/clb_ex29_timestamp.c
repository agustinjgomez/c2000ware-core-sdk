//#############################################################################
//
// FILE:   clb_ex29_timestamp.c
//
// TITLE:  CLB Trip Zone Timestamp
//
//! \addtogroup driver_example_list
//! <h1>CLB Trip Zone Timestamp</h1>
//!
//! This example displays how to timestamp interrupts generated by the CLB. An
//! interrupt is generated when ePWM1 is tripped.
//!
//! ePWM1 is configured to be interrupted by TZ1 and TZ2, both one shot trip sources.
//!
//! The CLB is configured as follows:
//!  - COUNTER0 and COUNTER1 continually count when the program begins.
//!  - COUNTER0 timestamps TZ1 and COUNTER1 timestamps TZ2.
//!  - COUNTER2 increments once when COUNTER0/COUNTER1 overflows using LUT2.
//!  - FSM0/1 are configured to sync counters and stop COUNTER0/1 when an interrupt
//!         is received.
//!  - TZ1 (GPIO12) and TZ2 (GPIO13) are routed as inputs through CLBXBAR.
//!  - BOUNDARY.boundaryInput0 denotes TZ1. On rising edge, HLC issues an interrupt with tag 12.
//!  - BOUDNARY.in1 denotes TZ2. On rising edge, HLC issues an interrupt with tag 13.
//!  - BOUNDARY.boundaryInput7 serves as a simultaneous enable for COUNTER0/1 to begin counting.
//!
//! TZ1 is tripped when GPIO12 is connected to GND. TZ2 is tripped when GPIO13 is
//! connected to GND. When an interrupt occurs, the interrupt handler determines
//! the initial trip source and stores this value in a variable 'initialTripZone'.
//!
//! View these variables in Debug Expressions tab:
//!
//! initialTripZone: stores the first TZ to have been tripped
//! tz1Counter64bit: stores the counter value at the instant that TZ1 is tripped.
//! tz2Counter64bit: stores the counter value at the instant that TZ2 is tripped.
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


//
// Included Files
//
#include "driverlib.h"
#include "device.h"
#include "clb_config.h"
#include "clb.h"
#include "board.h"

//
// Globals
//
uint32_t epwm1TZIntCount;
#define EPWM_TZ1_INT_TAG    12U
#define EPWM_TZ2_INT_TAG    13U

uint32_t initialTripZone;
uint64_t tz1Counter64bit;
uint64_t tz2Counter64bit;

//
// Function Prototypes
//
void initEPWM1(void);
__interrupt void epwm1TZISR(void);
__interrupt void clb1ISR(void);

//
// Main
//
void main(void)
{
    //
    // Initialize device clock and peripherals
    //
    Device_init();

    //
    // Disable pin locks and enable internal pull ups.
    //
    Device_initGPIO();

    //
    // Initialize PIE and clear PIE registers. Disables CPU interrupts.
    //
    Interrupt_initModule();

    //
    // Initialize the PIE vector table with pointers to the shell Interrupt
    // Service Routines (ISR).
    //
    Interrupt_initVectorTable();

    //
    // Interrupts that are used in this example are re-mapped to ISR functions
    // found within this file.
    //
    Interrupt_register(INT_EPWM1_TZ, &epwm1TZISR);
    Interrupt_register(INT_CLB1, &clb1ISR);

    //
    // Disable sync(Freeze clock to PWM as well)
    //
    SysCtl_disablePeripheral(SYSCTL_PERIPH_CLK_TBCLKSYNC);

    //
    // Initialize ePWM1
    //
    initEPWM1();

    //
    // Enable sync and clock to PWM
    //
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_TBCLKSYNC);

    //
    // Enabling CLB1
    //
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_CLB1);

    // Board Initialization
    Board_init();

    initTILE1(myTILE1_BASE);

    //
    // Enable interrupts required for this example
    //
    Interrupt_enable(INT_EPWM1_TZ);
    Interrupt_enable(INT_CLB1);

    //
    // Enable Global Interrupt (INTM) and real time interrupt (DBGM)
    //
    EINT;
    ERTM;

    CLB_clearInterruptTag(myTILE1_BASE);

    // Enable synchronized CLB counters
    HWREG(myTILE1_BASE + CLB_LOGICCTL + CLB_O_GP_REG) = 1 << 7;

    //
    // IDLE loop. Just sit and loop forever (optional):
    //
    for(;;)
    {
        NOP;
    }
}

__interrupt void clb1ISR(void)
{
    // Get counter value for TZ1
    uint32_t baseTZ1 = CLB_getRegister(myTILE1_BASE, CLB_REG_HLC_R0);
    uint32_t overflowTZ1 = CLB_getRegister(myTILE1_BASE, CLB_REG_HLC_R2);
    tz1Counter64bit = (uint64_t) overflowTZ1 << 32 | baseTZ1;

    // Get counter value for TZ2
    uint32_t baseTZ2 = CLB_getRegister(myTILE1_BASE, CLB_REG_HLC_R1);
    uint32_t overflowTZ2 = CLB_getRegister(myTILE1_BASE, CLB_REG_HLC_R3);
    tz2Counter64bit = (uint64_t) overflowTZ2 << 32 | baseTZ2;

    // Determine initial source of interrupt, TZ1 or TZ2
    if ( (tz1Counter64bit != 0) && ((tz1Counter64bit < tz2Counter64bit) || (tz2Counter64bit == 0)) )
        initialTripZone = 1;
    else if ( (tz2Counter64bit != 0) && ((tz2Counter64bit < tz1Counter64bit) || (tz1Counter64bit == 0)) )
        initialTripZone = 2;
    else
        initialTripZone = 0;

    CLB_clearInterruptTag(myTILE1_BASE);
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP5);
}

//
// epwm1TZISR - ePWM1 TZ ISR
//
__interrupt void epwm1TZISR(void)
{
    epwm1TZIntCount++;

    //
    // To re-enable the OST Interrupt, uncomment the below code:
    //
    // EPWM_clearTripZoneFlag(myEPWM1_BASE,
    //                        (EPWM_TZ_INTERRUPT | EPWM_TZ_FLAG_CBC));

    //
    // Acknowledge this interrupt to receive more interrupts from group 2
    //
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP2);
}

//
// initEPWM1 - Configure ePWM1
//
void initEPWM1()
{
    //
    // Enable TZ1 and TZ2 as one shot trip sources
    //
    EPWM_enableTripZoneSignals(myEPWM1_BASE, EPWM_TZ_SIGNAL_OSHT1);
    EPWM_enableTripZoneSignals(myEPWM1_BASE, EPWM_TZ_SIGNAL_OSHT2);

    //
    // Action on TZ1
    //
    EPWM_setTripZoneAction(myEPWM1_BASE,
                           EPWM_TZ_ACTION_EVENT_TZA,
                           EPWM_TZ_ACTION_HIGH);

    //
    // Enable TZ interrupt
    //
    EPWM_enableTripZoneInterrupt(myEPWM1_BASE, EPWM_TZ_INTERRUPT_OST);

    //
    // Set-up TBCLK
    //
    EPWM_setTimeBasePeriod(myEPWM1_BASE, 12000U);
    EPWM_setPhaseShift(myEPWM1_BASE, 0U);
    EPWM_setTimeBaseCounter(myEPWM1_BASE, 0U);
    EPWM_setTimeBaseCounterMode(myEPWM1_BASE, EPWM_COUNTER_MODE_UP_DOWN);
    EPWM_disablePhaseShiftLoad(myEPWM1_BASE);

    //
    // Set ePWM clock pre-scaler
    //
    EPWM_setClockPrescaler(myEPWM1_BASE,
                           EPWM_CLOCK_DIVIDER_4,
                           EPWM_HSCLOCK_DIVIDER_4);

    //
    // Set up shadowing
    //
    EPWM_setCounterCompareShadowLoadMode(myEPWM1_BASE,
                                         EPWM_COUNTER_COMPARE_A,
                                         EPWM_COMP_LOAD_ON_CNTR_ZERO);

    //
    // Set-up compare
    //
    EPWM_setCounterCompareValue(myEPWM1_BASE, EPWM_COUNTER_COMPARE_A, 6000U);

    //
    // Set actions
    //
    EPWM_setActionQualifierAction(myEPWM1_BASE,
                                  EPWM_AQ_OUTPUT_A,
                                  EPWM_AQ_OUTPUT_HIGH,
                                  EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);
    EPWM_setActionQualifierAction(myEPWM1_BASE,
                                  EPWM_AQ_OUTPUT_A,
                                  EPWM_AQ_OUTPUT_LOW,
                                  EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);
}

