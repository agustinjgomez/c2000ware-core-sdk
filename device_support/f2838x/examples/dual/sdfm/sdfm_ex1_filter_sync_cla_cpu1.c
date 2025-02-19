//###########################################################################
//
// FILE:   sdfm_ex1_filter_sync_cla_cpu1.c
//
// TITLE:  SDFM Filter sync CLA Example for f2838x.
//
//! \addtogroup dual_example_list
//! <h1> SDFM Filter Sync CLA</h1>
//!
//! In this example, SDFM1 filter data is read by CPU1 CLA in Cla1Task1 and
//! SDFM2 filter data is read by CPU2 CLA in CLA1Task2. SDFM1 & SDFM2 instances
//! can be assigned to either CPU1 or CPU2.
//! The SDFM configuration is shown below:
//!  - SDFM1 is used for CPU1 and SDFM2 is used for CPU2 for demonstration
//!  - MODE0 Input control mode selected
//!  - Comparator settings
//!       -    Sinc3 filter selected
//!       -    OSR = 32
//!       -    HLT = 0x7FFF (Higher threshold setting)
//!       -    LLT  = 0x0000(Lower threshold setting)
//!  -  Data filter settings
//!      - All the 4 filter modules enabled
//!      - Sinc3 filter selected
//!      - OSR = 256
//!      - All the 4 filters are synchronized by using MFE
//!       (Master Filter enable bit)
//!      - Filter output represented in 16 bit format
//!      - In order to convert 25 bit Data filter
//!        into 16 bit format user needs to right shift by 10 bits for
//!        Sinc3 filter with OSR = 256
//!  - Interrupt module settings for SDFM filter
//!       -    All the 4 higher threshold comparator interrupts disabled
//!       -    All the 4 lower threshold comparator interrupts disabled
//!       -    All the 4 modulator failure interrupts disabled
//!       -    All the 4 filter will generate interrupt when a new filter data
//!         is available
//!
//! \b External \b Connections \n
//!   - SDFM_PIN_MUX_OPTION1 Connect Sigma-Delta streams to
//!     (SD-D1, SD-C1 to SD-D8,SD-C8) on GPIO16-GPIO31
//!   - SDFM_PIN_MUX_OPTION2 Connect Sigma-Delta streams to
//!     (SD-D1, SD-C1 to SD-D8,SD-C8) on GPIO48-GPIO63
//!   - SDFM_PIN_MUX_OPTION3 Connect Sigma-Delta streams to
//!     (SD-D1, SD-C1 to SD-D8,SD-C8) on GPIO122-GPIO137
//!
//! \b Watch \b Variables \n
//! -  \b Filter1_Result_CPU1 - Output of filter 1
//! -  \b Filter2_Result_CPU1 - Output of filter 2
//! -  \b Filter3_Result_CPU1 - Output of filter 3
//! -  \b Filter4_Result_CPU1 - Output of filter 4
//!
//
//###########################################################################
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
#include <sdfm_ex1_filter_cla_sync_shared_cpu1.h>
#include "f2838x_sdfm_drivers.h"
#include "f2838x_struct.h"

//
// Defines
//
#define MAX_SAMPLES               1024
#define SDFM_PIN_MUX_OPTION1      1
#define SDFM_PIN_MUX_OPTION2      2
#define SDFM_PIN_MUX_OPTION3      3
#define WAITSTEP                  asm(" RPT #255 || NOP")

//
// Globals
//
Uint16 gPeripheralNumber;

//
// Function Prototypes
//
void Sdfm_configurePins(Uint16);
void Cla_initMemoryMap(void);
void CLA_initCpu1Cla(void);

//
// Main
//
int main(void)
{
    Uint16  pinMuxoption;
    Uint16  HLT, LLT;

    //
    // Initialize System Control:
    // PLL, WatchDog, enable Peripheral Clocks
    // This example function is found in the f2838x_sysctrl.c file.
    //
    InitSysCtrl();

    //
    // Clear all __interrupts and initialize PIE vector table:
    // Disable CPU __interrupts
    //
    DINT;

    //
    // Initialize PIE control registers to their default state.
    // The default state is all PIE __interrupts disabled and flags
    // are cleared.
    // This function is found in the f2838x_piectrl.c file.
    //
    InitPieCtrl();

    //
    // Disable CPU __interrupts and clear all CPU __interrupt flags:
    //
    IER = 0x0000;
    IFR = 0x0000;

    //
    // Initialize the PIE vector table with pointers to the shell Interrupt
    // Service Routines (ISR).
    // This will populate the entire table, even if the __interrupt
    // is not used in this example.  This is useful for debug purposes.
    // The shell ISR routines are found in f2838x_sysctrl.c.
    // This function is found in f2838x_sysctrl.c.
    //
    InitPieVectTable();

    //
    // Enable CPU INT11 which is connected to CLA
    //
    IER |= M_INT11;

    EINT;

#ifdef CPU1
    pinMuxoption = SDFM_PIN_MUX_OPTION2;

    //
    // Configure GPIO pins as SDFM pins
    //
    Sdfm_configurePins(pinMuxoption);

    CONNECT_SD1(TO_CPU1);         //Connect SDFM1 to CPU1
    CONNECT_SD2(TO_CPU2);         //Connect SDFM2 to CPU2
#endif

    //
    // Configure the CLA memory spaces
    //
    Cla_initMemoryMap();

#ifdef CPU1
    //
    // Configure the CLA task vectors for CPU1
    //
    CLA_initCpu1Cla();
#endif
#ifdef CPU2
    //
    // Configure the CLA task vectors for CPU2
    //
    CLA_initCpu2Cla();
#endif

    Cla1ForceTask8andWait();
    WAITSTEP;

    EALLOW;

    //
    // Trigger Source for TASK1 of CLA1 = SDFM1
    //
    DmaClaSrcSelRegs.CLA1TASKSRCSEL1.bit.TASK1 = CLA_TRIG_SD1INT;

//    //
//    // Trigger Source for TASK2 of CLA1 = SDFM2. Uncomment this in case
//    // SDFM2 is to be connected to CPU1
//    //
//    DmaClaSrcSelRegs.CLA1TASKSRCSEL1.bit.TASK2 = CLA_TRIG_SD2INT;

    //
    // Lock CLA1TASKSRCSEL1 register
    //
    DmaClaSrcSelRegs.CLA1TASKSRCSELLOCK.bit.CLA1TASKSRCSEL1=1;
    EDIS;

    gPeripheralNumber = SDFM1; // Select SDFM1

    //
    // Input Control Module
    //
    // Configure Input Control Mode: Modulator Clock rate = Modulator data rate
    //
    Sdfm_configureInputCtrl(gPeripheralNumber, FILTER1, MODE_0);
    Sdfm_configureInputCtrl(gPeripheralNumber, FILTER2, MODE_0);
    Sdfm_configureInputCtrl(gPeripheralNumber, FILTER3, MODE_0);
    Sdfm_configureInputCtrl(gPeripheralNumber, FILTER4, MODE_0);

    //
    // Comparator Module
    //
    HLT = 0x7FFF;    // Over value threshold settings
    LLT = 0x0000;    // Under value threshold settings

    //
    // Configure Comparator module's comparator filter type and comparator's OSR
    // value, higher threshold, lower threshold
    //
    Sdfm_configureComparator(gPeripheralNumber, FILTER1, SINC3, OSR_32,
                             HLT, LLT);
    Sdfm_configureComparator(gPeripheralNumber, FILTER2, SINC3, OSR_32,
                             HLT, LLT);
    Sdfm_configureComparator(gPeripheralNumber, FILTER3, SINC3, OSR_32,
                             HLT, LLT);
    Sdfm_configureComparator(gPeripheralNumber, FILTER4, SINC3, OSR_32,
                             HLT, LLT);

    //
    // Data filter Module
    //
    // Configure Data filter modules filter type, OSR value and
    // enable / disable data filter
    //
    Sdfm_configureData_filter(gPeripheralNumber, FILTER1, FILTER_ENABLE, SINC3,
                              OSR_256, DATA_16_BIT, SHIFT_10_BITS);
    Sdfm_configureData_filter(gPeripheralNumber, FILTER2, FILTER_ENABLE, SINC3,
                              OSR_256, DATA_16_BIT, SHIFT_10_BITS);
    Sdfm_configureData_filter(gPeripheralNumber, FILTER3, FILTER_ENABLE, SINC3,
                              OSR_256, DATA_16_BIT, SHIFT_10_BITS);
    Sdfm_configureData_filter(gPeripheralNumber, FILTER4, FILTER_ENABLE, SINC3,
                              OSR_256, DATA_16_BIT, SHIFT_10_BITS);

    //
    // Enable Master filter bit: Unless this bit is set none of the filter
    // modules can be enabled.
    // All the filter modules are synchronized when master filter bit is enabled
    // after individual filter modules are enabled.
    //
    Sdfm_enableMFE(gPeripheralNumber);

    //
    // PWM11.CMPC, PWM11.CMPD signals can synchronize SDFM1 filters and
    // PWM12.CMPC and PWM12.CMPD signals can synchronize SDFM2 filters. This
    // option is not being used in this example for SDFM1.
    //
    Sdfm_configureExternalreset(gPeripheralNumber,FILTER_1_EXT_RESET_DISABLE,
                                FILTER_2_EXT_RESET_DISABLE,
                                FILTER_3_EXT_RESET_DISABLE,
                                FILTER_4_EXT_RESET_DISABLE);

    //
    // Enable interrupts
    //
    // Following SDFM interrupts can be enabled / disabled using this function.
    //  Enable / disable comparator high threshold
    //  Enable / disable comparator low threshold
    //  Enable / disable modulator clock failure
    //  Enable / disable filter acknowledge
    //
    Sdfm_configureInterrupt(gPeripheralNumber, FILTER1, IEH_DISABLE,
                            IEL_DISABLE, MFIE_ENABLE, AE_ENABLE);
    Sdfm_configureInterrupt(gPeripheralNumber, FILTER2, IEH_DISABLE,
                            IEL_DISABLE, MFIE_ENABLE, AE_ENABLE);
    Sdfm_configureInterrupt(gPeripheralNumber, FILTER3, IEH_DISABLE,
                            IEL_DISABLE, MFIE_ENABLE, AE_ENABLE);
    Sdfm_configureInterrupt(gPeripheralNumber, FILTER4, IEH_DISABLE,
                            IEL_DISABLE, MFIE_ENABLE, AE_ENABLE);

    //
    // Enable master interrupt so that any of the filter interrupts can trigger
    // SDFM interrupt to CPU
    //
    Sdfm_enableMIE(gPeripheralNumber);

    //
    // Wait for an interrupt
    //
    while(1);
}

//
// Sdfm_configurePins - Configure SDFM pin muxing GPIOs. SDFM1 GPIO pins are
// mapped to CPU1 while SDFM2 GPIO pins are mapped to CPU2.
//
void Sdfm_configurePins(Uint16 sdfmPinOption)
{
    Uint16 pin;
    switch (sdfmPinOption)
    {
        case SDFM_PIN_MUX_OPTION1:
            for(pin = 16; pin <= 23; pin++)
            {
                GPIO_SetupPinOptions(pin, GPIO_INPUT, GPIO_ASYNC);
                GPIO_SetupPinMux(pin,GPIO_MUX_CPU1,7);
            }
            for(pin = 24; pin <= 31; pin++)
            {
                GPIO_SetupPinOptions(pin, GPIO_INPUT, GPIO_ASYNC);
                GPIO_SetupPinMux(pin,GPIO_MUX_CPU2,7);
            }
            break;

        case SDFM_PIN_MUX_OPTION2:
            for(pin = 48; pin <= 55; pin++)
            {
                GPIO_SetupPinOptions(pin, GPIO_INPUT, GPIO_ASYNC);
                GPIO_SetupPinMux(pin,GPIO_MUX_CPU1,7);
            }
            for(pin = 56; pin <= 63; pin++)
            {
                GPIO_SetupPinOptions(pin, GPIO_INPUT, GPIO_ASYNC);
                GPIO_SetupPinMux(pin,GPIO_MUX_CPU2,7);
            }
            break;

        case SDFM_PIN_MUX_OPTION3:
            for(pin = 122; pin <= 129; pin++)
            {
                GPIO_SetupPinOptions(pin, GPIO_INPUT, GPIO_ASYNC);
                GPIO_SetupPinMux(pin,GPIO_MUX_CPU1,7);
            }
            for(pin = 130; pin <= 137; pin++)
            {
                GPIO_SetupPinOptions(pin, GPIO_INPUT, GPIO_ASYNC);
                GPIO_SetupPinMux(pin,GPIO_MUX_CPU2,7);
            }
            break;
    }
}

//
// Cla_initMemoryMap - Initialize CLA memory map
//
void Cla_initMemoryMap(void)
{
    EALLOW;

    //
    // Initialize and wait for CLA1ToCPUMsgRAM
    //
    MemCfgRegs.MSGxINIT.bit.INIT_CLA1TOCPU = 1;
    while(MemCfgRegs.MSGxINITDONE.bit.INITDONE_CLA1TOCPU != 1){};

    //
    // Initialize and wait for CPUToCLA1MsgRAM
    //
    MemCfgRegs.MSGxINIT.bit.INIT_CPUTOCLA1 = 1;
    while(MemCfgRegs.MSGxINITDONE.bit.INITDONE_CPUTOCLA1 != 1){};

    //
    // Copy the program and constants from FLASH to RAM before configuring
    // the CLA
    //
#if defined(_FLASH)
    memcpy((uint32_t *)&Cla1funcsRunStart, (uint32_t *)&Cla1funcsLoadStart,
        (uint32_t)&Cla1funcsLoadSize );
    memcpy((uint32_t *)&Cla1ConstRunStart, (uint32_t *)&Cla1ConstLoadStart,
        (uint32_t)&Cla1ConstLoadSize );
#endif //defined(_FLASH)

    //
    // Select LS0 and LS1 RAM to be data RAM for the CLA and LS5 to be
    // programming space for the CLA as per linker cmd file used in this
    // example. This configuration should be updated as per the linker cmd file
    // used in the application.
    //
    MemCfgRegs.LSxMSEL.bit.MSEL_LS0 = 1; //LS0RAM is shared between CPU and CLA
    MemCfgRegs.LSxCLAPGM.bit.CLAPGM_LS0 = 0; // LS0RAM is configured as
                                             // data memory

    MemCfgRegs.LSxMSEL.bit.MSEL_LS1 = 1; //LS1RAM is shared between CPU and CLA
    MemCfgRegs.LSxCLAPGM.bit.CLAPGM_LS1 = 0; // LS1RAM is configured as
                                             // data memory

    MemCfgRegs.LSxMSEL.bit.MSEL_LS5 = 1; //LS5RAM is shared between CPU and CLA
    MemCfgRegs.LSxCLAPGM.bit.CLAPGM_LS5 = 1; // LS5RAM is configured as
                                             // program memory

    //
    // Filter1 and Filter2 data memory is mapped to LS6 RAM in linker cmd file
    // used in this example. This configuration should be updated as per the
    // linker cmd file used in the application.
    //
    MemCfgRegs.LSxMSEL.bit.MSEL_LS6 = 1; //LS6RAM is shared between CPU and CLA
    MemCfgRegs.LSxCLAPGM.bit.CLAPGM_LS6 = 0; // LS6RAM is configured as
                                             // data memory

    //
    // Filter3 and Filter4 data memory is mapped to LS7 RAM in linker cmd file
    // used in this example. This configuration should be updated as per the
    // linker cmd file used in the application.
    //
    MemCfgRegs.LSxMSEL.bit.MSEL_LS7 = 1; //LS7RAM is shared between CPU and CLA
    MemCfgRegs.LSxCLAPGM.bit.CLAPGM_LS7 = 0; // LS7RAM is configured as
                                             // data memory

    EDIS;
}

//
// CLA_initCpu1Cla - Initialize CLA tasks and end of task ISRs
//
void CLA_initCpu1Cla(void)
{
    //
    // Compute all CLA task vectors
    // On Type-1 CLAs the MVECT registers accept full 16-bit task addresses as
    // opposed to offsets used on older Type-0 CLAs
    //
    EALLOW;
    Cla1Regs.MVECT1 = (uint16_t)(&Cla1Task1);
    Cla1Regs.MVECT2 = (uint16_t)(&Cla1Task2);
    Cla1Regs.MVECT8 = (uint16_t)(&Cla1Task8);

    //
    // Enable IACK instruction to start a task on CLA in software
    // for all  8 CLA tasks
    //
    asm("   RPT #3 || NOP");
    Cla1Regs.MCTL.bit.IACKE = 1;
    Cla1Regs.MIER.all = 0x0083;

    //
    // Configure the vectors for the end-of-task interrupt for all
    // 8 tasks
    //
    PieVectTable.CLA1_1_INT = &cla1Isr1;
    PieVectTable.CLA1_2_INT = &cla1Isr2;
    PieVectTable.CLA1_3_INT = &cla1Isr3;
    PieVectTable.CLA1_4_INT = &cla1Isr4;
    PieVectTable.CLA1_5_INT = &cla1Isr5;
    PieVectTable.CLA1_6_INT = &cla1Isr6;
    PieVectTable.CLA1_7_INT = &cla1Isr7;
    PieVectTable.CLA1_8_INT = &cla1Isr8;

    //
    // Enable CLA interrupts at the group and subgroup levels
    //
    PieCtrlRegs.PIEIER11.all = 0xFFFF;
    IER |= (M_INT11 );
    EINT;   // Enable Global interrupt INTM
    ERTM;   // Enable Global realtime interrupt DBGM
    EDIS;
}

//
// cla1Isr1 - CLA 1 ISR 1
//
interrupt void cla1Isr1 ()
{
     asm(" ESTOP0");
     PieCtrlRegs.PIEACK.all = M_INT11;
}

//
// cla1Isr2 - CLA 1 ISR 2
//
interrupt void cla1Isr2 ()
{
     asm(" ESTOP0");
     PieCtrlRegs.PIEACK.all = M_INT11;
}

//
// cla1Isr3 - CLA 1 ISR 3
//
interrupt void cla1Isr3 ()
{
    asm(" ESTOP0");
}

//
// cla1Isr4 - CLA 1 ISR 4
//
interrupt void cla1Isr4 ()
{
    asm(" ESTOP0");
}

//
// cla1Isr5 - CLA 1 ISR 5
//
interrupt void cla1Isr5 ()
{
    asm(" ESTOP0");
}

//
// cla1Isr6 - CLA 1 ISR 6
//
interrupt void cla1Isr6 ()
{
    asm(" ESTOP0");
}

//
// cla1Isr7 - CLA 1 ISR 7
//
interrupt void cla1Isr7 ()
{
    asm(" ESTOP0");
}

//
// cla1Isr8 - CLA 1 ISR 8
//
interrupt void cla1Isr8 ()
{
    // asm(" ESTOP0");
    PieCtrlRegs.PIEACK.all = M_INT11;
}

//
// End of file
//
