let interrupts = [
	{ int_define_name: "INT_ADCA1", int_group_channel_number: "1.1", int_group_number: "1", int_channel_number: "1", int_description: "ADCA Interrupt 1" },
	{ int_define_name: "INT_ADCB1", int_group_channel_number: "1.2", int_group_number: "1", int_channel_number: "2", int_description: "ADCB Interrupt 1" },
	{ int_define_name: "INT_XINT1", int_group_channel_number: "1.4", int_group_number: "1", int_channel_number: "4", int_description: "XINT1 Interrupt" },
	{ int_define_name: "INT_XINT2", int_group_channel_number: "1.5", int_group_number: "1", int_channel_number: "5", int_description: "XINT2 Interrupt" },
	{ int_define_name: "INT_ADCD1", int_group_channel_number: "1.6", int_group_number: "1", int_channel_number: "6", int_description: "ADCD Interrupt 1" },
	{ int_define_name: "INT_TIMER0", int_group_channel_number: "1.7", int_group_number: "1", int_channel_number: "7", int_description: "Timer 0 Interrupt" },
	{ int_define_name: "INT_WAKE", int_group_channel_number: "1.8", int_group_number: "1", int_channel_number: "8", int_description: "Standby and Halt Wakeup Interrupt" },
	{ int_define_name: "INT_EPWM1_TZ", int_group_channel_number: "2.1", int_group_number: "2", int_channel_number: "1", int_description: "ePWM1 Trip Zone Interrupt" },
	{ int_define_name: "INT_EPWM2_TZ", int_group_channel_number: "2.2", int_group_number: "2", int_channel_number: "2", int_description: "ePWM2 Trip Zone Interrupt" },
	{ int_define_name: "INT_EPWM3_TZ", int_group_channel_number: "2.3", int_group_number: "2", int_channel_number: "3", int_description: "ePWM3 Trip Zone Interrupt" },
	{ int_define_name: "INT_EPWM4_TZ", int_group_channel_number: "2.4", int_group_number: "2", int_channel_number: "4", int_description: "ePWM4 Trip Zone Interrupt" },
	{ int_define_name: "INT_EPWM5_TZ", int_group_channel_number: "2.5", int_group_number: "2", int_channel_number: "5", int_description: "ePWM5 Trip Zone Interrupt" },
	{ int_define_name: "INT_EPWM6_TZ", int_group_channel_number: "2.6", int_group_number: "2", int_channel_number: "6", int_description: "ePWM6 Trip Zone Interrupt" },
	{ int_define_name: "INT_EPWM7_TZ", int_group_channel_number: "2.7", int_group_number: "2", int_channel_number: "7", int_description: "ePWM7 Trip Zone Interrupt" },
	{ int_define_name: "INT_EPWM8_TZ", int_group_channel_number: "2.8", int_group_number: "2", int_channel_number: "8", int_description: "ePWM8 Trip Zone Interrupt" },
	{ int_define_name: "INT_EPWM1", int_group_channel_number: "3.1", int_group_number: "3", int_channel_number: "1", int_description: "ePWM1 Interrupt" },
	{ int_define_name: "INT_EPWM2", int_group_channel_number: "3.2", int_group_number: "3", int_channel_number: "2", int_description: "ePWM2 Interrupt" },
	{ int_define_name: "INT_EPWM3", int_group_channel_number: "3.3", int_group_number: "3", int_channel_number: "3", int_description: "ePWM3 Interrupt" },
	{ int_define_name: "INT_EPWM4", int_group_channel_number: "3.4", int_group_number: "3", int_channel_number: "4", int_description: "ePWM4 Interrupt" },
	{ int_define_name: "INT_EPWM5", int_group_channel_number: "3.5", int_group_number: "3", int_channel_number: "5", int_description: "ePWM5 Interrupt" },
	{ int_define_name: "INT_EPWM6", int_group_channel_number: "3.6", int_group_number: "3", int_channel_number: "6", int_description: "ePWM6 Interrupt" },
	{ int_define_name: "INT_EPWM7", int_group_channel_number: "3.7", int_group_number: "3", int_channel_number: "7", int_description: "ePWM7 Interrupt" },
	{ int_define_name: "INT_EPWM8", int_group_channel_number: "3.8", int_group_number: "3", int_channel_number: "8", int_description: "ePWM8 Interrupt" },
	{ int_define_name: "INT_ECAP1", int_group_channel_number: "4.1", int_group_number: "4", int_channel_number: "1", int_description: "eCAP1 Interrupt" },
	{ int_define_name: "INT_ECAP2", int_group_channel_number: "4.2", int_group_number: "4", int_channel_number: "2", int_description: "eCAP2 Interrupt" },
	{ int_define_name: "INT_ECAP3", int_group_channel_number: "4.3", int_group_number: "4", int_channel_number: "3", int_description: "eCAP3 Interrupt" },
	{ int_define_name: "INT_ECAP4", int_group_channel_number: "4.4", int_group_number: "4", int_channel_number: "4", int_description: "eCAP4 Interrupt" },
	{ int_define_name: "INT_ECAP5", int_group_channel_number: "4.5", int_group_number: "4", int_channel_number: "5", int_description: "eCAP5 Interrupt" },
	{ int_define_name: "INT_ECAP6", int_group_channel_number: "4.6", int_group_number: "4", int_channel_number: "6", int_description: "eCAP6 Interrupt" },
	{ int_define_name: "INT_EQEP1", int_group_channel_number: "5.1", int_group_number: "5", int_channel_number: "1", int_description: "eQEP1 Interrupt" },
	{ int_define_name: "INT_EQEP2", int_group_channel_number: "5.2", int_group_number: "5", int_channel_number: "2", int_description: "eQEP2 Interrupt" },
	{ int_define_name: "INT_EQEP3", int_group_channel_number: "5.3", int_group_number: "5", int_channel_number: "3", int_description: "eQEP3 Interrupt" },
	{ int_define_name: "INT_CLB1", int_group_channel_number: "5.5", int_group_number: "5", int_channel_number: "5", int_description: "CLB1 (Reconfigurable Logic) Interrupt" },
	{ int_define_name: "INT_CLB2", int_group_channel_number: "5.6", int_group_number: "5", int_channel_number: "6", int_description: "CLB2 (Reconfigurable Logic) Interrupt" },
	{ int_define_name: "INT_CLB3", int_group_channel_number: "5.7", int_group_number: "5", int_channel_number: "7", int_description: "CLB3 (Reconfigurable Logic) Interrupt" },
	{ int_define_name: "INT_CLB4", int_group_channel_number: "5.8", int_group_number: "5", int_channel_number: "8", int_description: "CLB4 (Reconfigurable Logic) Interrupt" },
	{ int_define_name: "INT_SPIA_RX", int_group_channel_number: "6.1", int_group_number: "6", int_channel_number: "1", int_description: "SPIA Receive Interrupt" },
	{ int_define_name: "INT_SPIA_TX", int_group_channel_number: "6.2", int_group_number: "6", int_channel_number: "2", int_description: "SPIA Transmit Interrupt" },
	{ int_define_name: "INT_SPIB_RX", int_group_channel_number: "6.3", int_group_number: "6", int_channel_number: "3", int_description: "SPIB Receive Interrupt" },
	{ int_define_name: "INT_SPIB_TX", int_group_channel_number: "6.4", int_group_number: "6", int_channel_number: "4", int_description: "SPIB Transmit Interrupt" },
	{ int_define_name: "INT_MCBSPA_RX", int_group_channel_number: "6.5", int_group_number: "6", int_channel_number: "5", int_description: "McBSPA Receive Interrupt" },
	{ int_define_name: "INT_MCBSPA_TX", int_group_channel_number: "6.6", int_group_number: "6", int_channel_number: "6", int_description: "McBSPA Transmit Interrupt" },
	{ int_define_name: "INT_MCBSPB_RX", int_group_channel_number: "6.7", int_group_number: "6", int_channel_number: "7", int_description: "McBSPB Receive Interrupt" },
	{ int_define_name: "INT_MCBSPB_TX", int_group_channel_number: "6.8", int_group_number: "6", int_channel_number: "8", int_description: "McBSPB Transmit Interrupt" },
	{ int_define_name: "INT_DMA_CH1", int_group_channel_number: "7.1", int_group_number: "7", int_channel_number: "1", int_description: "DMA Channel 1 Interrupt" },
	{ int_define_name: "INT_DMA_CH2", int_group_channel_number: "7.2", int_group_number: "7", int_channel_number: "2", int_description: "DMA Channel 2 Interrupt" },
	{ int_define_name: "INT_DMA_CH3", int_group_channel_number: "7.3", int_group_number: "7", int_channel_number: "3", int_description: "DMA Channel 3 Interrupt" },
	{ int_define_name: "INT_DMA_CH4", int_group_channel_number: "7.4", int_group_number: "7", int_channel_number: "4", int_description: "DMA Channel 4 Interrupt" },
	{ int_define_name: "INT_DMA_CH5", int_group_channel_number: "7.5", int_group_number: "7", int_channel_number: "5", int_description: "DMA Channel 5 Interrupt" },
	{ int_define_name: "INT_DMA_CH6", int_group_channel_number: "7.6", int_group_number: "7", int_channel_number: "6", int_description: "DMA Channel 6 Interrupt" },
	{ int_define_name: "INT_I2CA", int_group_channel_number: "8.1", int_group_number: "8", int_channel_number: "1", int_description: "I2CA Interrupt 1" },
	{ int_define_name: "INT_I2CA_FIFO", int_group_channel_number: "8.2", int_group_number: "8", int_channel_number: "2", int_description: "I2CA Interrupt 2" },
	{ int_define_name: "INT_I2CB", int_group_channel_number: "8.3", int_group_number: "8", int_channel_number: "3", int_description: "I2CB Interrupt 1" },
	{ int_define_name: "INT_I2CB_FIFO", int_group_channel_number: "8.4", int_group_number: "8", int_channel_number: "4", int_description: "I2CB Interrupt 2" },
	{ int_define_name: "INT_SCIC_RX", int_group_channel_number: "8.5", int_group_number: "8", int_channel_number: "5", int_description: "SCIC Receive Interrupt" },
	{ int_define_name: "INT_SCIC_TX", int_group_channel_number: "8.6", int_group_number: "8", int_channel_number: "6", int_description: "SCIC Transmit Interrupt" },
	{ int_define_name: "INT_SCID_RX", int_group_channel_number: "8.7", int_group_number: "8", int_channel_number: "7", int_description: "SCID Receive Interrupt" },
	{ int_define_name: "INT_SCID_TX", int_group_channel_number: "8.8", int_group_number: "8", int_channel_number: "8", int_description: "SCID Transmit Interrupt" },
	{ int_define_name: "INT_SCIA_RX", int_group_channel_number: "9.1", int_group_number: "9", int_channel_number: "1", int_description: "SCIA Receive Interrupt" },
	{ int_define_name: "INT_SCIA_TX", int_group_channel_number: "9.2", int_group_number: "9", int_channel_number: "2", int_description: "SCIA Transmit Interrupt" },
	{ int_define_name: "INT_SCIB_RX", int_group_channel_number: "9.3", int_group_number: "9", int_channel_number: "3", int_description: "SCIB Receive Interrupt" },
	{ int_define_name: "INT_SCIB_TX", int_group_channel_number: "9.4", int_group_number: "9", int_channel_number: "4", int_description: "SCIB Transmit Interrupt" },
	{ int_define_name: "INT_CANA0", int_group_channel_number: "9.5", int_group_number: "9", int_channel_number: "5", int_description: "CANA Interrupt 0" },
	{ int_define_name: "INT_CANA1", int_group_channel_number: "9.6", int_group_number: "9", int_channel_number: "6", int_description: "CANA Interrupt 1" },
	{ int_define_name: "INT_CANB0", int_group_channel_number: "9.7", int_group_number: "9", int_channel_number: "7", int_description: "CANB Interrupt 0" },
	{ int_define_name: "INT_CANB1", int_group_channel_number: "9.8", int_group_number: "9", int_channel_number: "8", int_description: "CANB Interrupt 1" },
	{ int_define_name: "INT_ADCA_EVT", int_group_channel_number: "10.1", int_group_number: "10", int_channel_number: "1", int_description: "ADCA Event Interrupt" },
	{ int_define_name: "INT_ADCA2", int_group_channel_number: "10.2", int_group_number: "10", int_channel_number: "2", int_description: "ADCA Interrupt 2" },
	{ int_define_name: "INT_ADCA3", int_group_channel_number: "10.3", int_group_number: "10", int_channel_number: "3", int_description: "ADCA Interrupt 3" },
	{ int_define_name: "INT_ADCA4", int_group_channel_number: "10.4", int_group_number: "10", int_channel_number: "4", int_description: "ADCA Interrupt 4" },
	{ int_define_name: "INT_ADCB_EVT", int_group_channel_number: "10.5", int_group_number: "10", int_channel_number: "5", int_description: "ADCB Event Interrupt" },
	{ int_define_name: "INT_ADCB2", int_group_channel_number: "10.6", int_group_number: "10", int_channel_number: "6", int_description: "ADCB Interrupt 2" },
	{ int_define_name: "INT_ADCB3", int_group_channel_number: "10.7", int_group_number: "10", int_channel_number: "7", int_description: "ADCB Interrupt 3" },
	{ int_define_name: "INT_ADCB4", int_group_channel_number: "10.8", int_group_number: "10", int_channel_number: "8", int_description: "ADCB Interrupt 4" },
	{ int_define_name: "INT_CLA1_1", int_group_channel_number: "11.1", int_group_number: "11", int_channel_number: "1", int_description: "CLA1 Interrupt 1" },
	{ int_define_name: "INT_CLA1_2", int_group_channel_number: "11.2", int_group_number: "11", int_channel_number: "2", int_description: "CLA1 Interrupt 2" },
	{ int_define_name: "INT_CLA1_3", int_group_channel_number: "11.3", int_group_number: "11", int_channel_number: "3", int_description: "CLA1 Interrupt 3" },
	{ int_define_name: "INT_CLA1_4", int_group_channel_number: "11.4", int_group_number: "11", int_channel_number: "4", int_description: "CLA1 Interrupt 4" },
	{ int_define_name: "INT_CLA1_5", int_group_channel_number: "11.5", int_group_number: "11", int_channel_number: "5", int_description: "CLA1 Interrupt 5" },
	{ int_define_name: "INT_CLA1_6", int_group_channel_number: "11.6", int_group_number: "11", int_channel_number: "6", int_description: "CLA1 Interrupt 6" },
	{ int_define_name: "INT_CLA1_7", int_group_channel_number: "11.7", int_group_number: "11", int_channel_number: "7", int_description: "CLA1 Interrupt 7" },
	{ int_define_name: "INT_CLA1_8", int_group_channel_number: "11.8", int_group_number: "11", int_channel_number: "8", int_description: "CLA1 Interrupt 8" },
	{ int_define_name: "INT_XINT3", int_group_channel_number: "12.1", int_group_number: "12", int_channel_number: "1", int_description: "XINT3 Interrupt" },
	{ int_define_name: "INT_XINT4", int_group_channel_number: "12.2", int_group_number: "12", int_channel_number: "2", int_description: "XINT4 Interrupt" },
	{ int_define_name: "INT_XINT5", int_group_channel_number: "12.3", int_group_number: "12", int_channel_number: "3", int_description: "XINT5 Interrupt" },
	{ int_define_name: "INT_PBIST", int_group_channel_number: "12.4", int_group_number: "12", int_channel_number: "4", int_description: "PBIST Interrupt" },
	{ int_define_name: "INT_FMC", int_group_channel_number: "12.5", int_group_number: "12", int_channel_number: "5", int_description: "Flash Wrapper Operation Done Interrupt" },
	{ int_define_name: "INT_VCU", int_group_channel_number: "12.6", int_group_number: "12", int_channel_number: "6", int_description: "VCU Interrupt" },
	{ int_define_name: "INT_FPU_OVERFLOW", int_group_channel_number: "12.7", int_group_number: "12", int_channel_number: "7", int_description: "FPU Overflow Interrupt" },
	{ int_define_name: "INT_FPU_UNDERFLOW", int_group_channel_number: "12.8", int_group_number: "12", int_channel_number: "8", int_description: "FPU Underflow Interrupt" },
	{ int_define_name: "INT_EPWM9_TZ", int_group_channel_number: "2.9", int_group_number: "2", int_channel_number: "9", int_description: "ePWM9 Trip Zone Interrupt" },
	{ int_define_name: "INT_EPWM10_TZ", int_group_channel_number: "2.10", int_group_number: "2", int_channel_number: "10", int_description: "ePWM10 Trip Zone Interrupt" },
	{ int_define_name: "INT_EPWM11_TZ", int_group_channel_number: "2.11", int_group_number: "2", int_channel_number: "11", int_description: "ePWM11 Trip Zone Interrupt" },
	{ int_define_name: "INT_EPWM12_TZ", int_group_channel_number: "2.12", int_group_number: "2", int_channel_number: "12", int_description: "ePWM12 Trip Zone Interrupt" },
	{ int_define_name: "INT_EPWM9", int_group_channel_number: "3.9", int_group_number: "3", int_channel_number: "9", int_description: "ePWM9 Interrupt" },
	{ int_define_name: "INT_EPWM10", int_group_channel_number: "3.10", int_group_number: "3", int_channel_number: "10", int_description: "ePWM10 Interrupt" },
	{ int_define_name: "INT_EPWM11", int_group_channel_number: "3.11", int_group_number: "3", int_channel_number: "11", int_description: "ePWM11 Interrupt" },
	{ int_define_name: "INT_EPWM12", int_group_channel_number: "3.12", int_group_number: "3", int_channel_number: "12", int_description: "ePWM12 Interrupt" },
	{ int_define_name: "INT_SD1", int_group_channel_number: "5.9", int_group_number: "5", int_channel_number: "9", int_description: "SD1 Interrupt" },
	{ int_define_name: "INT_SD2", int_group_channel_number: "5.10", int_group_number: "5", int_channel_number: "10", int_description: "SD2 Interrupt" },
	{ int_define_name: "INT_SPIC_RX", int_group_channel_number: "6.9", int_group_number: "6", int_channel_number: "9", int_description: "SPIC Receive Interrupt" },
	{ int_define_name: "INT_SPIC_TX", int_group_channel_number: "6.10", int_group_number: "6", int_channel_number: "10", int_description: "SPIC Transmit Interrupt" },
	{ int_define_name: "INT_UPPA", int_group_channel_number: "8.15", int_group_number: "8", int_channel_number: "15", int_description: "uPPA Interrupt" },
	{ int_define_name: "INT_USBA", int_group_channel_number: "9.15", int_group_number: "9", int_channel_number: "15", int_description: "USBA Interrupt" },
	{ int_define_name: "INT_ADCD_EVT", int_group_channel_number: "10.13", int_group_number: "10", int_channel_number: "13", int_description: "ADCD Event Interrupt" },
	{ int_define_name: "INT_ADCD2", int_group_channel_number: "10.14", int_group_number: "10", int_channel_number: "14", int_description: "ADCD Interrupt 2" },
	{ int_define_name: "INT_ADCD3", int_group_channel_number: "10.15", int_group_number: "10", int_channel_number: "15", int_description: "ADCD Interrupt 3" },
	{ int_define_name: "INT_ADCD4", int_group_channel_number: "10.16", int_group_number: "10", int_channel_number: "16", int_description: "ADCD Interrupt 4" },
	{ int_define_name: "INT_EMIF_ERROR", int_group_channel_number: "12.9", int_group_number: "12", int_channel_number: "9", int_description: "EMIF Error Interrupt" },
	{ int_define_name: "INT_RAM_CORR_ERR", int_group_channel_number: "12.10", int_group_number: "12", int_channel_number: "10", int_description: "RAM Correctable Error Interrupt" },
	{ int_define_name: "INT_FLASH_CORR_ERR", int_group_channel_number: "12.11", int_group_number: "12", int_channel_number: "11", int_description: "Flash Correctable Error Interrupt" },
	{ int_define_name: "INT_RAM_ACC_VIOL", int_group_channel_number: "12.12", int_group_number: "12", int_channel_number: "12", int_description: "RAM Access Violation Interrupt" },
	{ int_define_name: "INT_SYS_PLL_SLIP", int_group_channel_number: "12.13", int_group_number: "12", int_channel_number: "13", int_description: "System PLL Slip Interrupt" },
	{ int_define_name: "INT_AUX_PLL_SLIP", int_group_channel_number: "12.14", int_group_number: "12", int_channel_number: "14", int_description: "Auxiliary PLL Slip Interrupt" },
	{ int_define_name: "INT_CLA_OVERFLOW", int_group_channel_number: "12.15", int_group_number: "12", int_channel_number: "15", int_description: "CLA Overflow Interrupt" },
	{ int_define_name: "INT_CLA_UNDERFLOW", int_group_channel_number: "12.16", int_group_number: "12", int_channel_number: "16", int_description: "CLA Underflow Interrupt" },
	{ int_define_name: "INT_TIMER1", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "CPU Timer 1 Interrupt" },
	{ int_define_name: "INT_TIMER2", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "CPU Timer 2 Interrupt" },
	{ int_define_name: "INT_DATALOG", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "Datalogging Interrupt" },
	{ int_define_name: "INT_RTOS", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "RTOS Interrupt" },
	{ int_define_name: "INT_EMU", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "Emulation Interrupt" },
	{ int_define_name: "INT_NMI", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "Non-Maskable Interrupt" },
	{ int_define_name: "INT_ILLEGAL", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "Illegal Operation Trap" },
	{ int_define_name: "INT_USER1", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "User Defined Trap 1" },
	{ int_define_name: "INT_USER2", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "User Defined Trap 2" },
	{ int_define_name: "INT_USER3", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "User Defined Trap 3" },
	{ int_define_name: "INT_USER4", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "User Defined Trap 4" },
	{ int_define_name: "INT_USER5", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "User Defined Trap 5" },
	{ int_define_name: "INT_USER6", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "User Defined Trap 6" },
	{ int_define_name: "INT_USER7", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "User Defined Trap 7" },
	{ int_define_name: "INT_USER8", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "User Defined Trap 8" },
	{ int_define_name: "INT_USER9", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "User Defined Trap 9" },
	{ int_define_name: "INT_USER10", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "User Defined Trap 10" },
	{ int_define_name: "INT_USER11", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "User Defined Trap 11" },
	{ int_define_name: "INT_USER12", int_group_channel_number: "OTHER", int_group_number: "", int_channel_number: "", int_description: "User Defined Trap 12" },
];
module.exports = {
	interrupts: interrupts,
}
