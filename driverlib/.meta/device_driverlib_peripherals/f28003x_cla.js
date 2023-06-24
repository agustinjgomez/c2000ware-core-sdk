let CLA_BGTaskStatus = [
	{ name: "CLA_BGSTS_RUNNING", displayName: "Run status" },
	{ name: "CLA_BGSTS_CANNOT_INTERRUPT", displayName: "Can BG task be interrupted?" },
	{ name: "CLA_BGSTS_OVERFLOW", displayName: "BG task hardware trigger overflow - if a second trigger occurs while the BG is already running, the overflow is set" },
]
let CLA_TaskNumber = [
	{ name: "CLA_TASK_1", displayName: "CLA Task 1" },
	{ name: "CLA_TASK_2", displayName: "CLA Task 2" },
	{ name: "CLA_TASK_3", displayName: "CLA Task 3" },
	{ name: "CLA_TASK_4", displayName: "CLA Task 4" },
	{ name: "CLA_TASK_5", displayName: "CLA Task 5" },
	{ name: "CLA_TASK_6", displayName: "CLA Task 6" },
	{ name: "CLA_TASK_7", displayName: "CLA Task 7" },
	{ name: "CLA_TASK_8", displayName: "CLA Task 8" },
]
let CLA_MVECTNumber = [
	{ name: "CLA_MVECT_1", displayName: "Task Interrupt Vector 1" },
	{ name: "CLA_MVECT_2", displayName: "Task Interrupt Vector 2" },
	{ name: "CLA_MVECT_3", displayName: "Task Interrupt Vector 3" },
	{ name: "CLA_MVECT_4", displayName: "Task Interrupt Vector 4" },
	{ name: "CLA_MVECT_5", displayName: "Task Interrupt Vector 5" },
	{ name: "CLA_MVECT_6", displayName: "Task Interrupt Vector 6" },
	{ name: "CLA_MVECT_7", displayName: "Task Interrupt Vector 7" },
	{ name: "CLA_MVECT_8", displayName: "Task Interrupt Vector 8" },
]
let CLA_Trigger = [
	{ name: "CLA_TRIGGER_SOFTWARE", displayName: "CLA Task Trigger Source is Software" },
	{ name: "CLA_TRIGGER_ADCA1", displayName: "CLA Task Trigger Source is ADCA1" },
	{ name: "CLA_TRIGGER_ADCA2", displayName: "CLA Task Trigger Source is ADCA2" },
	{ name: "CLA_TRIGGER_ADCA3", displayName: "CLA Task Trigger Source is ADCA3" },
	{ name: "CLA_TRIGGER_ADCA4", displayName: "CLA Task Trigger Source is ADCA4" },
	{ name: "CLA_TRIGGER_ADCAEVT", displayName: "CLA Task Trigger Source is ADCAEVT" },
	{ name: "CLA_TRIGGER_ADCB1", displayName: "CLA Task Trigger Source is ADCB1" },
	{ name: "CLA_TRIGGER_ADCB2", displayName: "CLA Task Trigger Source is ADCB2" },
	{ name: "CLA_TRIGGER_ADCB3", displayName: "CLA Task Trigger Source is ADCB3" },
	{ name: "CLA_TRIGGER_ADCB4", displayName: "CLA Task Trigger Source is ADCB4" },
	{ name: "CLA_TRIGGER_ADCBEVT", displayName: "CLA Task Trigger Source is ADCBEVT" },
	{ name: "CLA_TRIGGER_ADCC1", displayName: "CLA Task Trigger Source is ADCC1" },
	{ name: "CLA_TRIGGER_ADCC2", displayName: "CLA Task Trigger Source is ADCC2" },
	{ name: "CLA_TRIGGER_ADCC3", displayName: "CLA Task Trigger Source is ADCC3" },
	{ name: "CLA_TRIGGER_ADCC4", displayName: "CLA Task Trigger Source is ADCC4" },
	{ name: "CLA_TRIGGER_ADCCEVT", displayName: "CLA Task Trigger Source is ADCCEVT" },
	{ name: "CLA_TRIGGER_XINT1", displayName: "CLA Task Trigger Source is XINT1" },
	{ name: "CLA_TRIGGER_XINT2", displayName: "CLA Task Trigger Source is XINT2" },
	{ name: "CLA_TRIGGER_XINT3", displayName: "CLA Task Trigger Source is XINT3" },
	{ name: "CLA_TRIGGER_XINT4", displayName: "CLA Task Trigger Source is XINT4" },
	{ name: "CLA_TRIGGER_XINT5", displayName: "CLA Task Trigger Source is XINT5" },
	{ name: "CLA_TRIGGER_EPWM1INT", displayName: "CLA Task Trigger Source is EPWM1INT" },
	{ name: "CLA_TRIGGER_EPWM2INT", displayName: "CLA Task Trigger Source is EPWM2INT" },
	{ name: "CLA_TRIGGER_EPWM3INT", displayName: "CLA Task Trigger Source is EPWM3INT" },
	{ name: "CLA_TRIGGER_EPWM4INT", displayName: "CLA Task Trigger Source is EPWM4INT" },
	{ name: "CLA_TRIGGER_EPWM5INT", displayName: "CLA Task Trigger Source is EPWM5INT" },
	{ name: "CLA_TRIGGER_EPWM6INT", displayName: "CLA Task Trigger Source is EPWM6INT" },
	{ name: "CLA_TRIGGER_EPWM7INT", displayName: "CLA Task Trigger Source is EPWM7INT" },
	{ name: "CLA_TRIGGER_EPWM8INT", displayName: "CLA Task Trigger Source is EPWM8INT" },
	{ name: "CLA_TRIGGER_MCANA_FEVT0", displayName: "CLA Task Trigger Source is MCANAFEVT0" },
	{ name: "CLA_TRIGGER_MCANA_FEVT1", displayName: "CLA Task Trigger Source is MCANAFEVT1" },
	{ name: "CLA_TRIGGER_MCANA_FEVT2", displayName: "CLA Task Trigger Source is MCANAFEVT2" },
	{ name: "CLA_TRIGGER_TINT0", displayName: "CLA Task Trigger Source is TINT0" },
	{ name: "CLA_TRIGGER_TINT1", displayName: "CLA Task Trigger Source is TINT1" },
	{ name: "CLA_TRIGGER_TINT2", displayName: "CLA Task Trigger Source is TINT2" },
	{ name: "CLA_TRIGGER_ECAP1INT", displayName: "CLA Task Trigger Source is ECAP1INT" },
	{ name: "CLA_TRIGGER_ECAP2INT", displayName: "CLA Task Trigger Source is ECAP2INT" },
	{ name: "CLA_TRIGGER_ECAP3INT", displayName: "CLA Task Trigger Source is ECAP3INT" },
	{ name: "CLA_TRIGGER_EQEP1INT", displayName: "CLA Task Trigger Source is EQEP1INT" },
	{ name: "CLA_TRIGGER_EQEP2INT", displayName: "CLA Task Trigger Source is EQEP2INT" },
	{ name: "CLA_TRIGGER_ECAP3INT2", displayName: "CLA Task Trigger Source is ECAP3INT2" },
	{ name: "CLA_TRIGGER_SDFM1INT", displayName: "CLA Task Trigger Source is SDFM1INT" },
	{ name: "CLA_TRIGGER_SDFM1DRINT1", displayName: "CLA Task Trigger Srce is SDFM1DRINT1" },
	{ name: "CLA_TRIGGER_SDFM1DRINT2", displayName: "CLA Task Trigger Srce is SDFM1DRINT2" },
	{ name: "CLA_TRIGGER_SDFM1DRINT3", displayName: "CLA Task Trigger Srce is SDFM1DRINT3" },
	{ name: "CLA_TRIGGER_SDFM1DRINT4", displayName: "CLA Task Trigger Srce is SDFM1DRINT4" },
	{ name: "CLA_TRIGGER_SDFM2INT", displayName: "CLA Task Trigger Source is SDFM2INT" },
	{ name: "CLA_TRIGGER_SDFM2DRINT1", displayName: "CLA Task Trigger Srce is SDFM2DRINT1" },
	{ name: "CLA_TRIGGER_SDFM2DRINT2", displayName: "CLA Task Trigger Srce is SDFM2DRINT2" },
	{ name: "CLA_TRIGGER_SDFM2DRINT3", displayName: "CLA Task Trigger Srce is SDFM2DRINT3" },
	{ name: "CLA_TRIGGER_SDFM2DRINT4", displayName: "CLA Task Trigger Srce is SDFM2DRINT4" },
	{ name: "CLA_TRIGGER_PMBUSAINT", displayName: "CLA Task Trigger Source is PMBUSAINT" },
	{ name: "CLA_TRIGGER_SPITXAINT", displayName: "CLA Task Trigger Source is SPITXAINT" },
	{ name: "CLA_TRIGGER_SPIRXAINT", displayName: "CLA Task Trigger Source is SPIRXAINT" },
	{ name: "CLA_TRIGGER_SPITXBINT", displayName: "CLA Task Trigger Source is SPITXBINT" },
	{ name: "CLA_TRIGGER_SPIRXBINT", displayName: "CLA Task Trigger Source is SPIRXBINT" },
	{ name: "CLA_TRIGGER_LINAINT1", displayName: "CLA Task Trigger Source is LINAINT1" },
	{ name: "CLA_TRIGGER_LINAINT0", displayName: "CLA Task Trigger Source is LINAINT0" },
	{ name: "CLA_TRIGGER_LINBINT1", displayName: "CLA Task Trigger Source is LINAINT1" },
	{ name: "CLA_TRIGGER_LINBINT0", displayName: "CLA Task Trigger Source is LINAINT0" },
	{ name: "CLA_TRIGGER_CLA1CRCINT", displayName: "CLA Task Trigger Srce is CLA1CRCINT" },
	{ name: "CLA_TRIGGER_FSITXAINT1", displayName: "CLA Task Trigger Source is FSITXAINT1" },
	{ name: "CLA_TRIGGER_FSITXAINT2", displayName: "CLA Task Trigger Source is FSITXAINT2" },
	{ name: "CLA_TRIGGER_FSIRXAINT1", displayName: "CLA Task Trigger Source is FSIRXAINT1" },
	{ name: "CLA_TRIGGER_FSIRXAINT2", displayName: "CLA Task Trigger Source is FSIRXAINT2" },
	{ name: "CLA_TRIGGER_CLB1INT", displayName: "CLA Task Trigger Source is CLB1INT" },
	{ name: "CLA_TRIGGER_CLB2INT", displayName: "CLA Task Trigger Source is CLB2INT" },
	{ name: "CLA_TRIGGER_CLB3INT", displayName: "CLA Task Trigger Source is CLB3INT" },
	{ name: "CLA_TRIGGER_CLB4INT", displayName: "CLA Task Trigger Source is CLB4INT" },
	{ name: "CLA_TRIGGER_HICAINT", displayName: "CLA Task Trigger Source is HICA_INT" },
	{ name: "CLA_TRIGGER_DMACH1INT", displayName: "CLA Task Trigger Source is DMA_CH1INT" },
	{ name: "CLA_TRIGGER_DMACH2INT", displayName: "CLA Task Trigger Source is DMA_CH2INT" },
	{ name: "CLA_TRIGGER_DMACH3INT", displayName: "CLA Task Trigger Source is DMA_CH3INT" },
	{ name: "CLA_TRIGGER_DMACH4INT", displayName: "CLA Task Trigger Source is DMA_CH4INT" },
	{ name: "CLA_TRIGGER_DMACH5INT", displayName: "CLA Task Trigger Source is DMA_CH5INT" },
	{ name: "CLA_TRIGGER_DMACH6INT", displayName: "CLA Task Trigger Source is DMA_CH6INT" },
]
let CLA_NUM_EOT_INTERRUPTS = [
	{ name: "CLA_NUM_EOT_INTERRUPTS", displayName: "NUM EOT INTERRUPTS" },
]
let CLA_TASKFLAG = [
	{ name: "CLA_TASKFLAG_1", displayName: "CLA Task 1 Flag" },
	{ name: "CLA_TASKFLAG_2", displayName: "CLA Task 2 Flag" },
	{ name: "CLA_TASKFLAG_3", displayName: "CLA Task 3 Flag" },
	{ name: "CLA_TASKFLAG_4", displayName: "CLA Task 4 Flag" },
	{ name: "CLA_TASKFLAG_5", displayName: "CLA Task 5 Flag" },
	{ name: "CLA_TASKFLAG_6", displayName: "CLA Task 6 Flag" },
	{ name: "CLA_TASKFLAG_7", displayName: "CLA Task 7 Flag" },
	{ name: "CLA_TASKFLAG_8", displayName: "CLA Task 8 Flag" },
	{ name: "CLA_TASKFLAG_ALL", displayName: "CLA All Task Flag" },
]
module.exports = {
	CLA_BGTaskStatus: CLA_BGTaskStatus,
	CLA_TaskNumber: CLA_TaskNumber,
	CLA_MVECTNumber: CLA_MVECTNumber,
	CLA_Trigger: CLA_Trigger,
	CLA_NUM_EOT_INTERRUPTS: CLA_NUM_EOT_INTERRUPTS,
	CLA_TASKFLAG: CLA_TASKFLAG,
}
