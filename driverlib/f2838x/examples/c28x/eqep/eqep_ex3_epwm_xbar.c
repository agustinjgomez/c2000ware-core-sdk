//#############################################################################
//
// FILE:   eqep_ex3_test_epwm_xbar.c
//
// TITLE:  ePWM frequency Measurement Using eQEP via xbar connection
//
//! \addtogroup driver_example_list
//! <h1>ePWM frequency Measurement Using eQEP via xbar connection</h1>
//!
//! This example will calculate the frequency of an PWM signal using the eQEP
//! module.  ePWM1A is configured to generate this input signal with a
//! frequency of 5 kHz. This ePWM signal is connected to input of eQEP using
//! Input CrossBar and EPWM XBAR. ePWM module will interrupt once every period
//! and call the frequency calculation function. This example uses the IQMath
//! library to simplify high-precision calculations.
//!
//! In addition to the main example file, the following files must be included
//! in this project:
//! - \b eqep_ex1_calculation.c - contains frequency calculation function
//! - \b eqep_ex1_calculation.h - includes initialization values for frequency
//!                               structure
//!
//! The configuration for this example is as follows
//! - Maximum frequency is configured to 10KHz (baseFreq)
//! - Minimum frequency is assumed at 50Hz for capture pre-scalar selection
//! - GPIO0 is connected to output of INPUT_XBAR1
//! - INPUT_XBAR1 is connected to  output of PWMXBAR at TRIP4
//! - eQEPA source is configured as PWMXBAR.1 output (TRIP4)
//!
//! \b SPEED_FR: High Frequency Measurement is obtained by counting the
//! external input pulses for 10ms (unit timer set to 100Hz).
//! \f[ SPEED\_FR = \frac{Count\ Delta}{10ms} \f]
//!
//! \b SPEED_PR: Low Frequency Measurement is obtained by measuring time
//! period of input edges. Time measurement is averaged over 64 edges for
//! better results and the capture unit performs the time measurement using
//! pre-scaled SYSCLK.
//!
//! Note that the pre-scaler for capture unit clock is selected such that the
//! capture timer does not overflow at the required minimum frequency. This
//! example runs indefinitely until the user stops it.
//!
//! For more information about the frequency calculation see the comments at
//! the beginning of eqep_ex1_calculation.c and the XLS file provided with the
//! project, eqep_ex1_calculation.xls.
//!
//! \b Watch \b Variables \n
//! - \b freq.freqHzFR - Frequency measurement using position counter/unit
//!   time out
//! - \b freq.freqHzPR - Frequency measurement using capture unit
//!
//
//#############################################################################
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
//#############################################################################

//
// Included Files
//
#include "driverlib.h"
#include "device.h"
#include "IQmathLib.h"
#include "eqep_ex3_calculation.h"
#include "board.h"


//
// Defines
//
#define TB_CLK    DEVICE_SYSCLK_FREQ / 2        // ePWM Time base clock is SYSCLK/2
#define PWM_CLK   5000U                      // We want to output at 5 kHz
#define PRD_VAL   (TB_CLK / (PWM_CLK * 2))  // Calculate value period value
                                            // for up-down count mode
#define BASE_FREQ       10000  // Base/max frequency is 10 kHz
// See Equation 5 in eqep_ex1_calculation.c
#define FREQ_SCALER_PR  (((DEVICE_SYSCLK_FREQ / 128) * 8) / (2 * BASE_FREQ))
// See Equation 2 in eqep_ex1_calculation.c
#define FREQ_SCALER_FR  ((BASE_FREQ * 2) / 100)


//
// Function Prototypes
//
void initEPWM(void);
__interrupt void epwmISR(void);

//
// Globals
//
FreqCal_Object freq =
{
    FREQ_SCALER_PR,  // freqScalerPR
    FREQ_SCALER_FR,  // freqScalerFR
    BASE_FREQ,       // baseFreq
    0, 0, 0, 0, 0    // Initialize outputs to zero
};
EQEP_SourceSelect source1 =
{
 EQEP_SOURCE_PWMXBAR1, // eQEPA as PWMXBAR1
 EQEP_SOURCE_DEVICE_PIN, // eQEPB as device pin
 EQEP_SOURCE_DEVICE_PIN  // eQEP Index as device pin
};
uint32_t count =0;  // counter to check measurement gets saturated
uint32_t pass=0, fail =0; // Pass or fail indicator

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
    // Disable pin locks and enable internal pullups.
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
    // Board Initialization
    // Setup eQEP1, configuring the unit timer and quadrature capture units
    //
    Board_init();

    //
    // Initialize GPIOs for use as EPWM1A
    //
    GPIO_setPinConfig(GPIO_0_EPWM1A);
    GPIO_setPadConfig(0, GPIO_PIN_TYPE_STD);


    //
    // Configures ePWM1A output (GPIO0) as input to ePWM XBAR using ZInput XBAR
    // And then routs this signal to PWMXBAR.1
    //
    XBAR_enableEPWMMux(XBAR_TRIP4, XBAR_MUX01);
    XBAR_setInputPin(INPUTXBAR_BASE, XBAR_INPUT1, 0);
    XBAR_setEPWMMuxConfig(XBAR_TRIP4, XBAR_EPWM_MUX01_INPUTXBAR1);

    //
    // Interrupts that are used in this example are re-mapped to ISR functions
    // found within this file.
    //
    Interrupt_register(INT_EPWM1, &epwmISR);

    //
    // Setup ePWM1 to generate a 5 kHz signal to be an input to the eQEP
    //
    initEPWM();

    //
    // Enable interrupts required for this example
    //
    Interrupt_enable(INT_EPWM1);

    //
    // Enable Global Interrupt (INTM) and realtime interrupt (DBGM)
    //
    EINT;
    ERTM;

    //
    // Setup eQEP1, configuring the unit timer and quadrature capture units
    //

    //
    // Loop indefinitely
    //
    while(1)
    {
        ;
    }
}

//
// initEPWM - Function to configure ePWM1 to generate a 5 kHz signal.
//
void
initEPWM(void)
{
    //
    // Disable the ePWM time base clock before configuring the module
    //
    SysCtl_disablePeripheral(SYSCTL_PERIPH_CLK_TBCLKSYNC);

    //
    // Set phase shift to 0 and clear the time base counter
    //
    EPWM_setPhaseShift(EPWM1_BASE, 0);
    EPWM_setTimeBaseCounter(EPWM1_BASE, 0);

    //
    // Disable the shadow load; the load will be immediate instead
    //
    EPWM_disableCounterCompareShadowLoadMode(EPWM1_BASE,
                                             EPWM_COUNTER_COMPARE_A);
    EPWM_disableCounterCompareShadowLoadMode(EPWM1_BASE,
                                             EPWM_COUNTER_COMPARE_B);

    //
    // Set the compare A value to half the period value, compare B to 0
    //
    EPWM_setCounterCompareValue(EPWM1_BASE, EPWM_COUNTER_COMPARE_A, PRD_VAL/2);
  //  EPWM_setCounterCompareValue(EPWM1_BASE, EPWM_COUNTER_COMPARE_B, 0);

    //
    // Set action qualifier behavior on compare A events
    // - EPWM1A --> 1 when CTR = CMPA and increasing
    // - EPWM1A --> 0 when CTR = CMPA and decreasing
    //
    EPWM_setActionQualifierAction(EPWM1_BASE, EPWM_AQ_OUTPUT_A,
                                  EPWM_AQ_OUTPUT_HIGH,
                                  EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);
    EPWM_setActionQualifierAction(EPWM1_BASE, EPWM_AQ_OUTPUT_A,
                                  EPWM_AQ_OUTPUT_LOW,
                                  EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);

    //
    // Configure EPWM1B to be complementary to EPWM1A
    //
    EPWM_setDeadBandDelayPolarity(EPWM1_BASE, EPWM_DB_FED,
                                  EPWM_DB_POLARITY_ACTIVE_LOW);
    EPWM_setDeadBandDelayMode(EPWM1_BASE, EPWM_DB_FED, true);
    EPWM_setDeadBandDelayMode(EPWM1_BASE, EPWM_DB_RED, true);

    //
    // Enable interrupt when the counter is equal to 0
    //
    EPWM_setInterruptSource(EPWM1_BASE, EPWM_INT_TBCTR_ZERO);
    EPWM_enableInterrupt(EPWM1_BASE);

    //
    // Interrupt on first event
    //
    EPWM_setInterruptEventCount(EPWM1_BASE, 1);

    //
    // Set the time base clock prescaler to /1
    //
    EPWM_setClockPrescaler(EPWM1_BASE, EPWM_CLOCK_DIVIDER_1,
                           EPWM_HSCLOCK_DIVIDER_1);

    //
    // Set the period value; don't shadow the register
    //
    EPWM_setPeriodLoadMode(EPWM1_BASE, EPWM_PERIOD_DIRECT_LOAD);
    EPWM_setTimeBasePeriod(EPWM1_BASE, PRD_VAL);

    //
    // Put the time base counter into up-down count mode
    //
    EPWM_setTimeBaseCounterMode(EPWM1_BASE, EPWM_COUNTER_MODE_UP_DOWN);

    //
    // Sync the ePWM time base clock
    //
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_TBCLKSYNC);
}

//
// ePWM1 ISR- interrupts once per ePWM period
//
__interrupt void
epwmISR(void)
{
    //
    // Checks for events and calculates frequency.
    //
    FreqCal_calculate(&freq, &count);

    //
    // Comparing the eQEP measured frequency with the ePWM frequency
    // After count becomes 3 , eQEP measurement gets saturated and
    // classifying pass = 1 if measured frequency is 50 more or
    // less than input
    //
    if (count >= 3){
        if (((freq.freqHzFR - PWM_CLK) < 50) && ((freq.freqHzFR - PWM_CLK) > -50)){
            pass = 1; fail = 0;
          }
        else {
            fail = 1; pass = 0;
          }
    }

    //
    // Clear interrupt flag and issue ACK
    //
    EPWM_clearEventTriggerInterruptFlag(EPWM1_BASE);
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP3);
}

//
// End of File
//

