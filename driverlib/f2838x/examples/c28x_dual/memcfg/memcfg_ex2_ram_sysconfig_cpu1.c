//#############################################################################
//
// FILE:   memcfg_ex2_ram_sysconfig_cpu1.c
//
// TITLE: SysConfig RAM Management Example
//
//! \addtogroup driver_dual_example_list
//! <h1> Shared RAM Management (CPU1)</h1>
//!
//! This example shows how to assign shared RAM for use by both the CPU2 and
//! CPU1 core. Shared RAM regions are defined in  both the CPU2 and CPU1
//! linker files. In this example GS0 and GS14 are assigned to/owned by CPU2.
//! The remaining shared RAM regions are owned by CPU1.
//!
//! In this example, a pattern is written to cpu1RWArray and then an IPC flag
//! is sent to notify CPU2 that data is ready to be read. CPU2 then reads the
//! data from cpu2RArray and writes a modified pattern to cpu2RWArray. Once
//! CPU2 acknowledges the IPC flag, CPU1 reads the data from cpu1RArray and
//! compares with expected result.
//!
//! A timer ISR is also serviced in both CPUs. The ISRs are copied into the
//! shared RAM region owned by the respective CPUs. Each ISR toggles a GPIO.
//! Watch the GPIOs on an oscilloscope, or if using the controlCARD, watch
//! LED1 and LED2 blink at different rates.
//!
//! Following are the memory allocation details of CPU Timer interrupt ISRs &
//! read(R)/read write(RW) arrays in CPU1 & CPU2 as configured in the example.
//!  - cpu1RWArray[] is mapped to shared RAM GS1
//!  - cpu1RArray[] is mapped to shared RAM GS0
//!  - cpu2RArray[] is mapped to shared RAM GS1
//!  - cpu2RWArray[] is mapped to shared RAM GS0
//!  - cpuTimer0ISR in CPU2 is copied to shared RAM GS14, toggles LED1
//!  - cpuTimer0ISR in CPU1 is copied to shared RAM GS15, toggles LED2
//!
//! \b  Watch \b Variables
//!  - \e error Indicates that the data written is not correctly received by
//!    the other CPU.
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
#include "board.h"

//
// Globals
//
uint16_t cpu1RArray[256];       // Mapped to GS0 of shared RAM owned by CPU2
uint16_t cpu1RWArray[256];      // Mapped to GS1 of shared RAM owned by CPU1
#pragma DATA_SECTION(cpu1RArray,"SHARERAMGS0");
#pragma DATA_SECTION(cpu1RWArray,"SHARERAMGS1");

uint16_t error;
uint16_t multiplier;

uint16_t isrfuncLoadStart;
extern uint16_t isrfuncLoadEnd;
uint16_t isrfuncRunStart;
uint16_t isrfuncLoadSize;

//
// Function Prototypes
//
void initCPUTimer(uint32_t);
void configCPUTimer(uint32_t, float, float);
__interrupt void cpuTimer0ISR(void);
#pragma CODE_SECTION(cpuTimer0ISR, "isrfunc")

void readDataCPU1(void);
void writeDataCPU1(void);

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
    // Initialize PIE and clear PIE registers. Disables CPU interrupts.
    //
    Interrupt_initModule();

    //
    // Initialize the PIE vector table with pointers to the shell Interrupt
    // Service Routines (ISR).
    //
    Interrupt_initVectorTable();

    //
    // Initialize SysConfig Settings
    //
    Board_init();

    //
    // Boot CPU2 core
    //
    Device_bootCPU2(BOOT_MODE_CPU2);

    //
    // Copy the ISR to a specified RAM location
    //
    memcpy(&isrfuncRunStart, &isrfuncLoadStart, (uint32_t)&isrfuncLoadSize);

    //
    // Interrupts that are used in this example are re-mapped to ISR functions
    // found within this file.
    //
    Interrupt_register(INT_TIMER0, &cpuTimer0ISR);

    //
    // Configure CPU Timer 0 to a 2 second period
    //
    configCPUTimer(CPUTIMER0_BASE, DEVICE_SYSCLK_FREQ, 2000000);

    //
    // Start CPU Timer 0
    //
    CPUTimer_startTimer(CPUTIMER0_BASE);

    //
    // Enable CPU Timer 0 interrupt
    //
    Interrupt_enable(INT_TIMER0);

    //
    // Enable Global Interrupt (INTM) and realtime interrupt (DBGM)
    //
    EINT;
    ERTM;

    error = 0;
    multiplier = 0;

    writeDataCPU1();
    IPC_setFlagLtoR(IPC_CPU1_L_CPU2_R, IPC_FLAG10);

    //
    // Loop indefinitely
    //
    for(;;)
    {
        //
        // If there is no pending flag
        //
        if(IPC_isFlagBusyLtoR(IPC_CPU1_L_CPU2_R, IPC_FLAG10) == 0)
        {
            readDataCPU1();

            if(multiplier++ > 255)
            {
                multiplier = 0;
            }

            //
            // Write an array to a memory location owned by CPU01
            //
            writeDataCPU1();

            //
            // Set a flag to notify CPU02 that data is available
            //
            IPC_setFlagLtoR(IPC_CPU1_L_CPU2_R, IPC_FLAG10);
        }
    }
}

//
// configCPUTimer - This function initializes the selected timer to the
// period specified by the "freq" and "period" parameters. The "freq" is
// entered as Hz and the period in microseconds. The timer is held in the
// stopped state after configuration.
//
void configCPUTimer(uint32_t cpuTimer, float freq, float period)
{
    uint32_t temp;

    //
    // Initialize timer period:
    //
    temp = (uint32_t)(freq / 1000000 * period);
    CPUTimer_setPeriod(cpuTimer, temp - 1);

    //
    // Set pre-scale counter to divide by 1 (SYSCLKOUT):
    //
    CPUTimer_setPreScaler(cpuTimer, 0);

    //
    // Initializes timer control register. The timer is stopped, reloaded,
    // free run disabled, and interrupt enabled.
    //
    CPUTimer_stopTimer(cpuTimer);
    CPUTimer_reloadTimerCounter(cpuTimer);
    CPUTimer_setEmulationMode(cpuTimer,
                              CPUTIMER_EMULATIONMODE_STOPAFTERNEXTDECREMENT);
    CPUTimer_enableInterrupt(cpuTimer);
}

//
// cpuTimer0ISR - CPU Timer0 ISR
//
__interrupt void cpuTimer0ISR(void)
{
   GPIO_togglePin(DEVICE_GPIO_PIN_LED2);

   Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
}

//
// writeDataCPU1 - Write a pattern to an array in shared RAM
//
void writeDataCPU1(void)
{
    uint16_t index;

    //
    // Use first location to write a multiplier.
    //
    cpu1RWArray[0] = multiplier;

    for(index = 1; index < 256; index++)
    {
        cpu1RWArray[index] = index;

        //
        // The following code will attempt to write to a shared RAM assigned
        // to CPU2 and as a result will cause an access violation.
        //
        // cpu1RArray[index] = 1000 + index;
    }
}

//
// readDataCPU1 - Read and compare an array from shared RAM
//
void readDataCPU1(void)
{
    uint16_t index;

    if(cpu1RArray[0] == multiplier)
    {
        for(index = 1; index < 256; index++)
        {
            if(cpu1RArray[index] != multiplier * cpu1RWArray[index])
            {
                error = 1;
            }
        }
    }
    else
    {
        error = 1;
    }
}

//
// End of File
//
