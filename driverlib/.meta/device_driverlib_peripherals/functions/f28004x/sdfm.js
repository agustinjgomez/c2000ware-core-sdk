let sdfm_driverlib = 
{
  "name": "sdfm",
  "functions": [
    {
      "file": "sdfm.c",
      "peripheral": "sdfm",
      "functionName": "SDFM_configComparator",
      "functionArgs": [
        "base",
        "config1",
        "config2",
        "config3"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "uint16_t",
        "uint32_t",
        "uint16_t"
      ],
      "returnType": "void",
      "registersUsed": [],
      "registersUsedMatchingBifield": []
    },
    {
      "file": "sdfm.c",
      "peripheral": "sdfm",
      "functionName": "SDFM_configDataFilter",
      "functionArgs": [
        "base",
        "config1",
        "config2"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "uint16_t",
        "uint16_t"
      ],
      "returnType": "void",
      "registersUsed": [],
      "registersUsedMatchingBifield": []
    },
    {
      "file": "sdfm.c",
      "peripheral": "sdfm",
      "functionName": "SDFM_configZeroCrossComparator",
      "functionArgs": [
        "base",
        "config1",
        "config2"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "uint16_t",
        "uint16_t"
      ],
      "returnType": "void",
      "registersUsed": [],
      "registersUsedMatchingBifield": []
    },
    {
      "file": "sdfm.c",
      "peripheral": "sdfm",
      "functionName": "SDFM_configDataFilterFIFO",
      "functionArgs": [
        "base",
        "config1",
        "config2"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "uint16_t",
        "uint16_t"
      ],
      "returnType": "void",
      "registersUsed": [],
      "registersUsedMatchingBifield": []
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_isBaseValid",
      "functionArgs": [
        "base"
      ],
      "functionArgsTypes": [
        "uint32_t"
      ],
      "returnType": "#ifdef DEBUG  static inline bool",
      "registersUsed": [],
      "registersUsedMatchingBifield": []
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_enableExternalReset",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_disableExternalReset",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_enableFilter",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_disableFilter",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_enableFIFOBuffer",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDFIFOCTL1"
      ],
      "registersUsedMatchingBifield": [
        "SDFIFOCTL1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_disableFIFOBuffer",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDFIFOCTL1"
      ],
      "registersUsedMatchingBifield": [
        "SDFIFOCTL1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_getZeroCrossTripStatus",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline bool",
      "registersUsed": [
        "SDSTATUS"
      ],
      "registersUsedMatchingBifield": [
        "SDSTATUS"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_clearZeroCrossTripStatus",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDCTL"
      ],
      "registersUsedMatchingBifield": [
        "SDCTL"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_enableComparator",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_disableComparator",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setFilterType",
      "functionArgs": [
        "base",
        "filterNumber",
        "filterType"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "SDFM_FilterType"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setFilterOverSamplingRatio",
      "functionArgs": [
        "base",
        "filterNumber",
        "overSamplingRatio"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "uint16_t"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setupModulatorClock",
      "functionArgs": [
        "base",
        "filterNumber",
        "clockMode"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "SDFM_ModulatorClockMode"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDCTL",
        "SDCTLPARM1",
        "SDCTLPARM2",
        "SDCTLPARM3",
        "SDCTLPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDCTL",
        "SDCTLPARM1",
        "SDCTLPARM2",
        "SDCTLPARM3",
        "SDCTLPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setOutputDataFormat",
      "functionArgs": [
        "base",
        "filterNumber",
        "dataFormat"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "SDFM_OutputDataFormat"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDDPARM1",
        "SDDPARM2",
        "SDDPARM3",
        "SDDPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDDPARM1",
        "SDDPARM2",
        "SDDPARM3",
        "SDDPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setDataShiftValue",
      "functionArgs": [
        "base",
        "filterNumber",
        "shiftValue"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "uint16_t"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDDPARM1",
        "SDDPARM2",
        "SDDPARM3",
        "SDDPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDDPARM1",
        "SDDPARM2",
        "SDDPARM3",
        "SDDPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setCompFilterHighThreshold",
      "functionArgs": [
        "base",
        "filterNumber",
        "highThreshold"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "uint16_t"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDCMPH1",
        "SDCMPH2",
        "SDCMPH3",
        "SDCMPH4"
      ],
      "registersUsedMatchingBifield": [
        "SDCMPH1",
        "SDCMPH2",
        "SDCMPH3",
        "SDCMPH4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setCompFilterLowThreshold",
      "functionArgs": [
        "base",
        "filterNumber",
        "lowThreshold"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "uint16_t"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDCMPL1",
        "SDCMPL2",
        "SDCMPL3",
        "SDCMPL4"
      ],
      "registersUsedMatchingBifield": [
        "SDCMPL1",
        "SDCMPL2",
        "SDCMPL3",
        "SDCMPL4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setCompFilterZeroCrossThreshold",
      "functionArgs": [
        "base",
        "filterNumber",
        "zeroCrossThreshold"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "uint16_t"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDCMPHZ1"
      ],
      "registersUsedMatchingBifield": [
        "SDCMPHZ1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_enableZeroCrossEdgeDetect",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_disableZeroCrossEdgeDetect",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_enableInterrupt",
      "functionArgs": [
        "base",
        "filterNumber",
        "intFlags"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "uint16_t"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4",
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4",
        "SDFIFOCTL1"
      ],
      "registersUsedMatchingBifield": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4",
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4",
        "SDFIFOCTL1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_disableInterrupt",
      "functionArgs": [
        "base",
        "filterNumber",
        "intFlags"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "uint16_t"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4",
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4",
        "SDFIFOCTL1"
      ],
      "registersUsedMatchingBifield": [
        "SDDFPARM1",
        "SDDFPARM2",
        "SDDFPARM3",
        "SDDFPARM4",
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4",
        "SDFIFOCTL1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setComparatorFilterType",
      "functionArgs": [
        "base",
        "filterNumber",
        "filterType"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "SDFM_FilterType"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setCompFilterOverSamplingRatio",
      "functionArgs": [
        "base",
        "filterNumber",
        "overSamplingRatio"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "uint16_t"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4"
      ],
      "registersUsedMatchingBifield": [
        "SDCPARM1",
        "SDCPARM2",
        "SDCPARM3",
        "SDCPARM4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_getFilterData",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline uint32_t",
      "registersUsed": [
        "SDDATA1",
        "SDDATA2",
        "SDDATA3",
        "SDDATA4"
      ],
      "registersUsedMatchingBifield": [
        "SDDATA1",
        "SDDATA2",
        "SDDATA3",
        "SDDATA4"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_getThresholdStatus",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline SDFM_OutputThresholdStatus",
      "registersUsed": [
        "SDIFLG"
      ],
      "registersUsedMatchingBifield": [
        "SDIFLG"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_getModulatorStatus",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline bool",
      "registersUsed": [
        "SDIFLG"
      ],
      "registersUsedMatchingBifield": [
        "SDIFLG"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_getNewFilterDataStatus",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline bool",
      "registersUsed": [
        "SDIFLG"
      ],
      "registersUsedMatchingBifield": [
        "SDIFLG"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_getFIFOOverflowStatus",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline bool",
      "registersUsed": [
        "SDIFLG"
      ],
      "registersUsedMatchingBifield": [
        "SDIFLG"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_getFIFOISRStatus",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline bool",
      "registersUsed": [
        "SDIFLG"
      ],
      "registersUsedMatchingBifield": [
        "SDIFLG"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_getIsrStatus",
      "functionArgs": [
        "base"
      ],
      "functionArgsTypes": [
        "uint32_t"
      ],
      "returnType": "static inline bool",
      "registersUsed": [
        "SDIFLG"
      ],
      "registersUsedMatchingBifield": [
        "SDIFLG"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_clearInterruptFlag",
      "functionArgs": [
        "base",
        "flag"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "uint32_t"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDIFLG",
        "SDIFLGCLR"
      ],
      "registersUsedMatchingBifield": [
        "SDIFLG",
        "SDIFLGCLR"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_enableMasterInterrupt",
      "functionArgs": [
        "base"
      ],
      "functionArgsTypes": [
        "uint32_t"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDCTL"
      ],
      "registersUsedMatchingBifield": [
        "SDCTL"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_disableMasterInterrupt",
      "functionArgs": [
        "base"
      ],
      "functionArgsTypes": [
        "uint32_t"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDCTL"
      ],
      "registersUsedMatchingBifield": [
        "SDCTL"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_enableMasterFilter",
      "functionArgs": [
        "base"
      ],
      "functionArgsTypes": [
        "uint32_t"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDMFILEN"
      ],
      "registersUsedMatchingBifield": [
        "SDMFILEN"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_disableMasterFilter",
      "functionArgs": [
        "base"
      ],
      "functionArgsTypes": [
        "uint32_t"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDMFILEN"
      ],
      "registersUsedMatchingBifield": [
        "SDMFILEN"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_getFIFODataCount",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline uint16_t",
      "registersUsed": [
        "SDFIFOCTL1"
      ],
      "registersUsedMatchingBifield": [
        "SDFIFOCTL1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_getComparatorSincData",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline uint16_t",
      "registersUsed": [
        "SDCDATA1"
      ],
      "registersUsedMatchingBifield": [
        "SDCDATA1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_getFIFOData",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline uint32_t",
      "registersUsed": [
        "SDDATFIFO1"
      ],
      "registersUsedMatchingBifield": [
        "SDDATFIFO1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setFIFOInterruptLevel",
      "functionArgs": [
        "base",
        "filterNumber",
        "fifoLevel"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "uint16_t"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDFIFOCTL1"
      ],
      "registersUsedMatchingBifield": [
        "SDFIFOCTL1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setDataReadyInterruptSource",
      "functionArgs": [
        "base",
        "filterNumber",
        "dataReadySource"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "SDFM_DataReadyInterruptSource"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDFIFOCTL1"
      ],
      "registersUsedMatchingBifield": [
        "SDFIFOCTL1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_getWaitForSyncStatus",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline bool",
      "registersUsed": [
        "SDSYNC1"
      ],
      "registersUsedMatchingBifield": [
        "SDSYNC1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_clearWaitForSyncFlag",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDSYNC1"
      ],
      "registersUsedMatchingBifield": [
        "SDSYNC1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_enableWaitForSync",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDSYNC1"
      ],
      "registersUsedMatchingBifield": [
        "SDSYNC1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_disableWaitForSync",
      "functionArgs": [
        "base",
        "filterNumber"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDSYNC1"
      ],
      "registersUsedMatchingBifield": [
        "SDSYNC1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setPWMSyncSource",
      "functionArgs": [
        "base",
        "filterNumber",
        "syncSource"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "SDFM_PWMSyncSource"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDSYNC1"
      ],
      "registersUsedMatchingBifield": [
        "SDSYNC1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setFIFOClearOnSyncMode",
      "functionArgs": [
        "base",
        "filterNumber",
        "fifoClearSyncMode"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "SDFM_FIFOClearSyncMode"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDSYNC1"
      ],
      "registersUsedMatchingBifield": [
        "SDSYNC1"
      ]
    },
    {
      "file": "sdfm.h",
      "peripheral": "sdfm",
      "functionName": "SDFM_setWaitForSyncClearMode",
      "functionArgs": [
        "base",
        "filterNumber",
        "syncClearMode"
      ],
      "functionArgsTypes": [
        "uint32_t",
        "SDFM_FilterNumber",
        "SDFM_WaitForSyncClearMode"
      ],
      "returnType": "static inline void",
      "registersUsed": [
        "SDSYNC1"
      ],
      "registersUsedMatchingBifield": [
        "SDSYNC1"
      ]
    }
  ]
}
module.exports = { 
  sdfm_driverlib: sdfm_driverlib,
}
