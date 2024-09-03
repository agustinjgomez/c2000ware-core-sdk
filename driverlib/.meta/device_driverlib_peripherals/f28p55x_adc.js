let ADC_ClkPrescale = [
	{ name: "ADC_CLK_DIV_1_0", displayName: "ADCCLK = (input clock) / 1.0" },
	{ name: "ADC_CLK_DIV_2_0", displayName: "ADCCLK = (input clock) / 2.0" },
	{ name: "ADC_CLK_DIV_2_5", displayName: "ADCCLK = (input clock) / 2.5" },
	{ name: "ADC_CLK_DIV_3_0", displayName: "ADCCLK = (input clock) / 3.0" },
	{ name: "ADC_CLK_DIV_3_5", displayName: "ADCCLK = (input clock) / 3.5" },
	{ name: "ADC_CLK_DIV_4_0", displayName: "ADCCLK = (input clock) / 4.0" },
	{ name: "ADC_CLK_DIV_4_5", displayName: "ADCCLK = (input clock) / 4.5" },
	{ name: "ADC_CLK_DIV_5_0", displayName: "ADCCLK = (input clock) / 5.0" },
	{ name: "ADC_CLK_DIV_5_5", displayName: "ADCCLK = (input clock) / 5.5" },
	{ name: "ADC_CLK_DIV_6_0", displayName: "ADCCLK = (input clock) / 6.0" },
	{ name: "ADC_CLK_DIV_6_5", displayName: "ADCCLK = (input clock) / 6.5" },
	{ name: "ADC_CLK_DIV_7_0", displayName: "ADCCLK = (input clock) / 7.0" },
	{ name: "ADC_CLK_DIV_7_5", displayName: "ADCCLK = (input clock) / 7.5" },
	{ name: "ADC_CLK_DIV_8_0", displayName: "ADCCLK = (input clock) / 8.0" },
	{ name: "ADC_CLK_DIV_8_5", displayName: "ADCCLK = (input clock) / 8.5" },
]
let ADC_Trigger = [
	{ name: "ADC_TRIGGER_SW_ONLY", displayName: "Software only" },
	{ name: "ADC_TRIGGER_CPU1_TINT0", displayName: "CPU1 Timer 0, TINT0" },
	{ name: "ADC_TRIGGER_CPU1_TINT1", displayName: "CPU1 Timer 1, TINT1" },
	{ name: "ADC_TRIGGER_CPU1_TINT2", displayName: "CPU1 Timer 2, TINT2" },
	{ name: "ADC_TRIGGER_GPIO", displayName: "GPIO, ADCEXTSOC" },
	{ name: "ADC_TRIGGER_EPWM1_SOCA", displayName: "ePWM1, ADCSOCA" },
	{ name: "ADC_TRIGGER_EPWM1_SOCB", displayName: "ePWM1, ADCSOCB" },
	{ name: "ADC_TRIGGER_EPWM2_SOCA", displayName: "ePWM2, ADCSOCA" },
	{ name: "ADC_TRIGGER_EPWM2_SOCB", displayName: "ePWM2, ADCSOCB" },
	{ name: "ADC_TRIGGER_EPWM3_SOCA", displayName: "ePWM3, ADCSOCA" },
	{ name: "ADC_TRIGGER_EPWM3_SOCB", displayName: "ePWM3, ADCSOCB" },
	{ name: "ADC_TRIGGER_EPWM4_SOCA", displayName: "ePWM4, ADCSOCA" },
	{ name: "ADC_TRIGGER_EPWM4_SOCB", displayName: "ePWM4, ADCSOCB" },
	{ name: "ADC_TRIGGER_EPWM5_SOCA", displayName: "ePWM5, ADCSOCA" },
	{ name: "ADC_TRIGGER_EPWM5_SOCB", displayName: "ePWM5, ADCSOCB" },
	{ name: "ADC_TRIGGER_EPWM6_SOCA", displayName: "ePWM6, ADCSOCA" },
	{ name: "ADC_TRIGGER_EPWM6_SOCB", displayName: "ePWM6, ADCSOCB" },
	{ name: "ADC_TRIGGER_EPWM7_SOCA", displayName: "ePWM7, ADCSOCA" },
	{ name: "ADC_TRIGGER_EPWM7_SOCB", displayName: "ePWM7, ADCSOCB" },
	{ name: "ADC_TRIGGER_EPWM8_SOCA", displayName: "ePWM8, ADCSOCA" },
	{ name: "ADC_TRIGGER_EPWM8_SOCB", displayName: "ePWM8, ADCSOCB" },
	{ name: "ADC_TRIGGER_EPWM9_SOCA", displayName: "ePWM9, ADCSOCA" },
	{ name: "ADC_TRIGGER_EPWM9_SOCB", displayName: "ePWM9, ADCSOCB" },
	{ name: "ADC_TRIGGER_EPWM10_SOCA", displayName: "ePWM10, ADCSOCA" },
	{ name: "ADC_TRIGGER_EPWM10_SOCB", displayName: "ePWM10, ADCSOCB" },
	{ name: "ADC_TRIGGER_EPWM11_SOCA", displayName: "ePWM11, ADCSOCA" },
	{ name: "ADC_TRIGGER_EPWM11_SOCB", displayName: "ePWM11, ADCSOCB" },
	{ name: "ADC_TRIGGER_REPEATER1", displayName: "Repeater 1" },
	{ name: "ADC_TRIGGER_REPEATER2", displayName: "Repeater 2" },
	{ name: "ADC_TRIGGER_EPWM12_SOCA", displayName: "ePWM12, ADCSOCA" },
	{ name: "ADC_TRIGGER_EPWM12_SOCB", displayName: "ePWM12 ADCSOCB" },
]
let ADC_Channel = [
	{ name: "ADC_CH_ADCIN0", displayName: "single-ended, ADCIN0" },
	{ name: "ADC_CH_ADCIN1", displayName: "single-ended, ADCIN1" },
	{ name: "ADC_CH_ADCIN2", displayName: "single-ended, ADCIN2" },
	{ name: "ADC_CH_ADCIN3", displayName: "single-ended, ADCIN3" },
	{ name: "ADC_CH_ADCIN4", displayName: "single-ended, ADCIN4" },
	{ name: "ADC_CH_ADCIN5", displayName: "single-ended, ADCIN5" },
	{ name: "ADC_CH_ADCIN6", displayName: "single-ended, ADCIN6" },
	{ name: "ADC_CH_ADCIN7", displayName: "single-ended, ADCIN7" },
	{ name: "ADC_CH_ADCIN8", displayName: "single-ended, ADCIN8" },
	{ name: "ADC_CH_ADCIN9", displayName: "single-ended, ADCIN9" },
	{ name: "ADC_CH_ADCIN10", displayName: "single-ended, ADCIN10" },
	{ name: "ADC_CH_ADCIN11", displayName: "single-ended, ADCIN11" },
	{ name: "ADC_CH_ADCIN12", displayName: "single-ended, ADCIN12" },
	{ name: "ADC_CH_ADCIN13", displayName: "single-ended, ADCIN13" },
	{ name: "ADC_CH_ADCIN14", displayName: "single-ended, ADCIN14" },
	{ name: "ADC_CH_ADCIN15", displayName: "single-ended, ADCIN15" },
	{ name: "ADC_CH_ADCIN16", displayName: "single-ended, ADCIN16" },
	{ name: "ADC_CH_ADCIN17", displayName: "single-ended, ADCIN17" },
	{ name: "ADC_CH_ADCIN18", displayName: "single-ended, ADCIN18" },
	{ name: "ADC_CH_ADCIN19", displayName: "single-ended, ADCIN19" },
	{ name: "ADC_CH_ADCIN20", displayName: "single-ended, ADCIN20" },
	{ name: "ADC_CH_ADCIN21", displayName: "single-ended, ADCIN21" },
	{ name: "ADC_CH_ADCIN22", displayName: "single-ended, ADCIN22" },
	{ name: "ADC_CH_ADCIN23", displayName: "single-ended, ADCIN23" },
	{ name: "ADC_CH_ADCIN24", displayName: "single-ended, ADCIN24" },
	{ name: "ADC_CH_ADCIN25", displayName: "single-ended, ADCIN25" },
	{ name: "ADC_CH_ADCIN26", displayName: "single-ended, ADCIN26" },
	{ name: "ADC_CH_ADCIN27", displayName: "single-ended, ADCIN27" },
	{ name: "ADC_CH_ADCIN28", displayName: "single-ended, ADCIN28" },
	{ name: "ADC_CH_ADCIN29", displayName: "single-ended, ADCIN29" },
	{ name: "ADC_CH_ADCIN30", displayName: "single-ended, ADCIN30" },
	{ name: "ADC_CH_ADCIN31", displayName: "single-ended, ADCIN31" },
]
let ADC_PulseMode = [
	{ name: "ADC_PULSE_END_OF_ACQ_WIN", displayName: "Occurs at the end of the acquisition window" },
	{ name: "ADC_PULSE_END_OF_CONV", displayName: "Occurs at the end of the conversion" },
]
let ADC_IntNumber = [
	{ name: "ADC_INT_NUMBER1", displayName: "ADCINT1 Interrupt" },
	{ name: "ADC_INT_NUMBER2", displayName: "ADCINT2 Interrupt" },
	{ name: "ADC_INT_NUMBER3", displayName: "ADCINT3 Interrupt" },
	{ name: "ADC_INT_NUMBER4", displayName: "ADCINT4 Interrupt" },
]
let ADC_PPBNumber = [
	{ name: "ADC_PPB_NUMBER1", displayName: "Post-processing block 1" },
	{ name: "ADC_PPB_NUMBER2", displayName: "Post-processing block 2" },
	{ name: "ADC_PPB_NUMBER3", displayName: "Post-processing block 3" },
	{ name: "ADC_PPB_NUMBER4", displayName: "Post-processing block 4" },
]
let ADC_SOCNumber = [
	{ name: "ADC_SOC_NUMBER0", displayName: "SOC/EOC number 0" },
	{ name: "ADC_SOC_NUMBER1", displayName: "SOC/EOC number 1" },
	{ name: "ADC_SOC_NUMBER2", displayName: "SOC/EOC number 2" },
	{ name: "ADC_SOC_NUMBER3", displayName: "SOC/EOC number 3" },
	{ name: "ADC_SOC_NUMBER4", displayName: "SOC/EOC number 4" },
	{ name: "ADC_SOC_NUMBER5", displayName: "SOC/EOC number 5" },
	{ name: "ADC_SOC_NUMBER6", displayName: "SOC/EOC number 6" },
	{ name: "ADC_SOC_NUMBER7", displayName: "SOC/EOC number 7" },
	{ name: "ADC_SOC_NUMBER8", displayName: "SOC/EOC number 8" },
	{ name: "ADC_SOC_NUMBER9", displayName: "SOC/EOC number 9" },
	{ name: "ADC_SOC_NUMBER10", displayName: "SOC/EOC number 10" },
	{ name: "ADC_SOC_NUMBER11", displayName: "SOC/EOC number 11" },
	{ name: "ADC_SOC_NUMBER12", displayName: "SOC/EOC number 12" },
	{ name: "ADC_SOC_NUMBER13", displayName: "SOC/EOC number 13" },
	{ name: "ADC_SOC_NUMBER14", displayName: "SOC/EOC number 14" },
	{ name: "ADC_SOC_NUMBER15", displayName: "SOC/EOC number 15" },
]
let ADC_IntSOCTrigger = [
	{ name: "ADC_INT_SOC_TRIGGER_NONE", displayName: "No ADCINT will trigger the SOC" },
	{ name: "ADC_INT_SOC_TRIGGER_ADCINT1", displayName: "ADCINT1 will trigger the SOC" },
	{ name: "ADC_INT_SOC_TRIGGER_ADCINT2", displayName: "ADCINT2 will trigger the SOC" },
]
let ADC_PriorityMode = [
	{ name: "ADC_PRI_ALL_ROUND_ROBIN", displayName: "Round robin mode is used for all" },
	{ name: "ADC_PRI_SOC0_HIPRI", displayName: "SOC 0 hi pri, others in round robin" },
	{ name: "ADC_PRI_THRU_SOC1_HIPRI", displayName: "SOC 0-1 hi pri, others in round robin" },
	{ name: "ADC_PRI_THRU_SOC2_HIPRI", displayName: "SOC 0-2 hi pri, others in round robin" },
	{ name: "ADC_PRI_THRU_SOC3_HIPRI", displayName: "SOC 0-3 hi pri, others in round robin" },
	{ name: "ADC_PRI_THRU_SOC4_HIPRI", displayName: "SOC 0-4 hi pri, others in round robin" },
	{ name: "ADC_PRI_THRU_SOC5_HIPRI", displayName: "SOC 0-5 hi pri, others in round robin" },
	{ name: "ADC_PRI_THRU_SOC6_HIPRI", displayName: "SOC 0-6 hi pri, others in round robin" },
	{ name: "ADC_PRI_THRU_SOC7_HIPRI", displayName: "SOC 0-7 hi pri, others in round robin" },
	{ name: "ADC_PRI_THRU_SOC8_HIPRI", displayName: "SOC 0-8 hi pri, others in round robin" },
	{ name: "ADC_PRI_THRU_SOC9_HIPRI", displayName: "SOC 0-9 hi pri, others in round robin" },
	{ name: "ADC_PRI_THRU_SOC10_HIPRI", displayName: "SOC 0-10 hi pri, others in round robin" },
	{ name: "ADC_PRI_THRU_SOC11_HIPRI", displayName: "SOC 0-11 hi pri, others in round robin" },
	{ name: "ADC_PRI_THRU_SOC12_HIPRI", displayName: "SOC 0-12 hi pri, others in round robin" },
	{ name: "ADC_PRI_THRU_SOC13_HIPRI", displayName: "SOC 0-13 hi pri, others in round robin" },
	{ name: "ADC_PRI_THRU_SOC14_HIPRI", displayName: "SOC 0-14 hi pri, SOC15 in round robin" },
	{ name: "ADC_PRI_ALL_HIPRI", displayName: "All priorities based on SOC number" },
]
let ADC_ReferenceMode = [
	{ name: "ADC_REFERENCE_INTERNAL", displayName: "REFERENCE INTERNAL" },
	{ name: "ADC_REFERENCE_EXTERNAL", displayName: "REFERENCE EXTERNAL" },
	{ name: "ADC_REFERENCE_VDDA", displayName: "REFERENCE VDDA" },
]
let ADC_ReferenceVoltage = [
	{ name: "ADC_REFERENCE_3_3V", displayName: "REFERENCE 3 3V" },
	{ name: "ADC_REFERENCE_2_5V", displayName: "REFERENCE 2 5V" },
	{ name: "ADC_REFERENCE_VREFHI", displayName: "This value is valid when ADC reference" },
	{ name: "ADC_REFERENCE_2xVREFHI", displayName: "This value is valid when ADC reference" },
]
let ADC_SyncInput = [
	{ name: "ADC_SYNCIN_DISABLE", displayName: "ADC Syncin is disabled" },
	{ name: "ADC_SYNCIN_EPWM1SYNCOUT", displayName: "ADC Syncin is EPWM1SYNCOUT" },
	{ name: "ADC_SYNCIN_EPWM2SYNCOUT", displayName: "ADC Syncin is EPWM2SYNCOUT" },
	{ name: "ADC_SYNCIN_EPWM3SYNCOUT", displayName: "ADC Syncin is EPWM3SYNCOUT" },
	{ name: "ADC_SYNCIN_EPWM4SYNCOUT", displayName: "ADC Syncin is EPWM4SYNCOUT" },
	{ name: "ADC_SYNCIN_EPWM5SYNCOUT", displayName: "ADC Syncin is EPWM5SYNCOUT" },
	{ name: "ADC_SYNCIN_EPWM6SYNCOUT", displayName: "ADC Syncin is EPWM6SYNCOUT" },
	{ name: "ADC_SYNCIN_EPWM7SYNCOUT", displayName: "ADC Syncin is EPWM7SYNCOUT" },
	{ name: "ADC_SYNCIN_EPWM8SYNCOUT", displayName: "ADC Syncin is EPWM8SYNCOUT" },
	{ name: "ADC_SYNCIN_EPWM9SYNCOUT", displayName: "ADC Syncin is EPWM9SYNCOUT" },
	{ name: "ADC_SYNCIN_EPWM10SYNCOUT", displayName: "ADC Syncin is EPWM10SYNCOUT" },
	{ name: "ADC_SYNCIN_EPWM11SYNCOUT", displayName: "ADC Syncin is EPWM11SYNCOUT" },
	{ name: "ADC_SYNCIN_EPWM12SYNCOUT", displayName: "ADC Syncin is EPWM12SYNCOUT" },
	{ name: "ADC_SYNCIN_ECAP1YNCOUT", displayName: "ADC Syncin is ECAP1YNCOUT" },
	{ name: "ADC_SYNCIN_ECAP2SYNCOUT", displayName: "ADC Syncin is ECAP2SYNCOUT" },
	{ name: "ADC_SYNCIN_INPUTXBAROUTPUT5", displayName: "ADC Syncin is INPUTXBAROUTPUT5" },
	{ name: "ADC_SYNCIN_INPUTXBAROUTPUT6", displayName: "ADC Syncin is INPUTXBAROUTPUT6" },
]
let ADC_PPBIntSrcSelect = [
	{ name: "ADC_PPB_OS_INT_1", displayName: "PCount generates PPB interrupt" },
	{ name: "ADC_PPB_OS_INT_2", displayName: "PCount/Sync generates PPB interrupt" },
]
let ADC_ExtChannel = [
	{ name: "ADC_CH_ADCINX_0", displayName: "ADCINX.0 is converted" },
	{ name: "ADC_CH_ADCINX_1", displayName: "ADCINX.1 is converted" },
	{ name: "ADC_CH_ADCINX_2", displayName: "ADCINX.2 is converted" },
	{ name: "ADC_CH_ADCINX_3", displayName: "ADCINX.3 is converted" },
	{ name: "ADC_CH_ADCINX_4", displayName: "ADCINX.4 is converted" },
	{ name: "ADC_CH_ADCINX_5", displayName: "ADCINX.5 is converted" },
	{ name: "ADC_CH_ADCINX_6", displayName: "ADCINX.6 is converted" },
	{ name: "ADC_CH_ADCINX_7", displayName: "ADCINX.7 is converted" },
	{ name: "ADC_CH_ADCINX_8", displayName: "ADCINX.8 is converted" },
	{ name: "ADC_CH_ADCINX_9", displayName: "ADCINX.9 is converted" },
	{ name: "ADC_CH_ADCINX_10", displayName: "ADCINX.10 is converted" },
	{ name: "ADC_CH_ADCINX_11", displayName: "ADCINX.11 is converted" },
	{ name: "ADC_CH_ADCINX_12", displayName: "ADCINX.12 is converted" },
	{ name: "ADC_CH_ADCINX_13", displayName: "ADCINX.13 is converted" },
	{ name: "ADC_CH_ADCINX_14", displayName: "ADCINX.14 is converted" },
	{ name: "ADC_CH_ADCINX_15", displayName: "ADCINX.15 is converted" },
]
let ADC_IntTrigger = [
	{ name: "ADC_INT_TRIGGER_EOC0", displayName: "SOC/EOC0" },
	{ name: "ADC_INT_TRIGGER_EOC1", displayName: "SOC/EOC1" },
	{ name: "ADC_INT_TRIGGER_EOC2", displayName: "SOC/EOC2" },
	{ name: "ADC_INT_TRIGGER_EOC3", displayName: "SOC/EOC3" },
	{ name: "ADC_INT_TRIGGER_EOC4", displayName: "SOC/EOC4" },
	{ name: "ADC_INT_TRIGGER_EOC5", displayName: "SOC/EOC5" },
	{ name: "ADC_INT_TRIGGER_EOC6", displayName: "SOC/EOC6" },
	{ name: "ADC_INT_TRIGGER_EOC7", displayName: "SOC/EOC7" },
	{ name: "ADC_INT_TRIGGER_EOC8", displayName: "SOC/EOC8" },
	{ name: "ADC_INT_TRIGGER_EOC9", displayName: "SOC/EOC9" },
	{ name: "ADC_INT_TRIGGER_EOC10", displayName: "SOC/EOC10" },
	{ name: "ADC_INT_TRIGGER_EOC11", displayName: "SOC/EOC11" },
	{ name: "ADC_INT_TRIGGER_EOC12", displayName: "SOC/EOC12" },
	{ name: "ADC_INT_TRIGGER_EOC13", displayName: "SOC/EOC13" },
	{ name: "ADC_INT_TRIGGER_EOC14", displayName: "SOC/EOC14" },
	{ name: "ADC_INT_TRIGGER_EOC15", displayName: "SOC/EOC15" },
	{ name: "ADC_INT_TRIGGER_OSINT1", displayName: "OSINT1" },
	{ name: "ADC_INT_TRIGGER_OSINT2", displayName: "OSINT2" },
	{ name: "ADC_INT_TRIGGER_OSINT3", displayName: "OSINT3" },
	{ name: "ADC_INT_TRIGGER_OSINT4", displayName: "OSINT4" },
]
let ADC_PPBCompSource = [
	{ name: "ADC_PPB_COMPSOURCE_RESULT", displayName: "PPB compare source is ADCRESULT" },
	{ name: "ADC_PPB_COMPSOURCE_PSUM", displayName: "PPB compare source is PSUM" },
	{ name: "ADC_PPB_COMPSOURCE_SUM", displayName: "PPB compare source is SUM" },
]
let ADC_RepInstance = [
	{ name: "ADC_REPINST1", displayName: "Select ADC repeater instance 1" },
	{ name: "ADC_REPINST2", displayName: "Select ADC repeater instance 2" },
]
let ADC_RepMode = [
	{ name: "ADC_REPMODE_OVERSAMPLING", displayName: "ADC repeater mode is oversampling" },
	{ name: "ADC_REPMODE_UNDERSAMPLING", displayName: "ADC repeater mode is undersampling" },
]
let ADC_EVT = [
	{ name: "ADC_EVT_TRIPHI", displayName: "Trip High Event" },
	{ name: "ADC_EVT_TRIPLO", displayName: "Trip Low Event" },
	{ name: "ADC_EVT_ZERO", displayName: "Zero Crossing Event" },
]
let ADC_FORCE = [
	{ name: "ADC_FORCE_SOC0", displayName: "SW trigger ADC SOC 0" },
	{ name: "ADC_FORCE_SOC1", displayName: "SW trigger ADC SOC 1" },
	{ name: "ADC_FORCE_SOC2", displayName: "SW trigger ADC SOC 2" },
	{ name: "ADC_FORCE_SOC3", displayName: "SW trigger ADC SOC 3" },
	{ name: "ADC_FORCE_SOC4", displayName: "SW trigger ADC SOC 4" },
	{ name: "ADC_FORCE_SOC5", displayName: "SW trigger ADC SOC 5" },
	{ name: "ADC_FORCE_SOC6", displayName: "SW trigger ADC SOC 6" },
	{ name: "ADC_FORCE_SOC7", displayName: "SW trigger ADC SOC 7" },
	{ name: "ADC_FORCE_SOC8", displayName: "SW trigger ADC SOC 8" },
	{ name: "ADC_FORCE_SOC9", displayName: "SW trigger ADC SOC 9" },
	{ name: "ADC_FORCE_SOC10", displayName: "SW trigger ADC SOC 10" },
	{ name: "ADC_FORCE_SOC11", displayName: "SW trigger ADC SOC 11" },
	{ name: "ADC_FORCE_SOC12", displayName: "SW trigger ADC SOC 12" },
	{ name: "ADC_FORCE_SOC13", displayName: "SW trigger ADC SOC 13" },
	{ name: "ADC_FORCE_SOC14", displayName: "SW trigger ADC SOC 14" },
	{ name: "ADC_FORCE_SOC15", displayName: "SW trigger ADC SOC 15" },
]
let ADC_REPEATER = [
	{ name: "ADC_REPEATER_MODULE_BUSY", displayName: "REPEATER MODULE BUSY" },
	{ name: "ADC_REPEATER_PHASE_OVERFLOW", displayName: "REPEATER PHASE OVERFLOW" },
	{ name: "ADC_REPEATER_TRIGGER_OVERFLOW", displayName: "REPEATER TRIGGER OVERFLOW" },
]
let ADC_REP1CTL = [
	{ name: "ADC_REP1CTL_ACTIVEMODE_S", displayName: "REP1CTL ACTIVEMODE S" },
	{ name: "ADC_REP1CTL_MODULEBUSY_S", displayName: "REP1CTL MODULEBUSY S" },
]
let ADC_REPSTATUS_MASK = [
	{ name: "ADC_REPSTATUS_MASK", displayName: "REPSTATUS MASK" },
]
module.exports = {
	ADC_ClkPrescale: ADC_ClkPrescale,
	ADC_Trigger: ADC_Trigger,
	ADC_Channel: ADC_Channel,
	ADC_PulseMode: ADC_PulseMode,
	ADC_IntNumber: ADC_IntNumber,
	ADC_PPBNumber: ADC_PPBNumber,
	ADC_SOCNumber: ADC_SOCNumber,
	ADC_IntSOCTrigger: ADC_IntSOCTrigger,
	ADC_PriorityMode: ADC_PriorityMode,
	ADC_ReferenceMode: ADC_ReferenceMode,
	ADC_ReferenceVoltage: ADC_ReferenceVoltage,
	ADC_SyncInput: ADC_SyncInput,
	ADC_PPBIntSrcSelect: ADC_PPBIntSrcSelect,
	ADC_ExtChannel: ADC_ExtChannel,
	ADC_IntTrigger: ADC_IntTrigger,
	ADC_PPBCompSource: ADC_PPBCompSource,
	ADC_RepInstance: ADC_RepInstance,
	ADC_RepMode: ADC_RepMode,
	ADC_EVT: ADC_EVT,
	ADC_FORCE: ADC_FORCE,
	ADC_REPEATER: ADC_REPEATER,
	ADC_REP1CTL: ADC_REP1CTL,
	ADC_REPSTATUS_MASK: ADC_REPSTATUS_MASK,
}
