var tEOC_12bit_SYSCLK = {
    ADC_CLK_DIV_1_0 : 11,
    ADC_CLK_DIV_2_0 : 21,
    ADC_CLK_DIV_2_5 : 26,
    ADC_CLK_DIV_3_0 : 31,
    ADC_CLK_DIV_3_5 : 36,
    ADC_CLK_DIV_4_0 : 41,
    ADC_CLK_DIV_4_5 : 46,
    ADC_CLK_DIV_5_0 : 51,
    ADC_CLK_DIV_5_5 : 56,
    ADC_CLK_DIV_6_0 : 61,
    ADC_CLK_DIV_6_5 : 66,
    ADC_CLK_DIV_7_0 : 71,
    ADC_CLK_DIV_7_5 : 76,
    ADC_CLK_DIV_8_0 : 81,
    ADC_CLK_DIV_8_5 : 86,    
}

var tEOC_16bit_SYSCLK = {
    ADC_CLK_DIV_1_0 : 31,
    ADC_CLK_DIV_2_0 : 60,
    ADC_CLK_DIV_2_5 : 75,
    ADC_CLK_DIV_3_0 : 90,
    ADC_CLK_DIV_3_5 : 104,
    ADC_CLK_DIV_4_0 : 119,
    ADC_CLK_DIV_4_5 : 134,
    ADC_CLK_DIV_5_0 : 149,
    ADC_CLK_DIV_5_5 : 163,
    ADC_CLK_DIV_6_0 : 178,
    ADC_CLK_DIV_6_5 : 193,
    ADC_CLK_DIV_7_0 : 208,
    ADC_CLK_DIV_7_5 : 222,
    ADC_CLK_DIV_8_0 : 237,
    ADC_CLK_DIV_8_5 : 252,    
}

var Cp_F28004x = {
    ADCINA0     : { CMP_DIS: 12.7   , CMP_EN: 15.2       },       
    ADCINA1     : { CMP_DIS: 13.7   , CMP_EN: 16.2       },       
    ADCINA2     : { CMP_DIS: 9.2    , CMP_EN: 11.7       },       
    ADCINA3     : { CMP_DIS: 6.9    , CMP_EN: 9.4        },       
    ADCINA4     : { CMP_DIS: 9.2    , CMP_EN: 11.7       },       
    ADCINA5     : { CMP_DIS: 7.5    , CMP_EN: 10         },   
    ADCINA6     : { CMP_DIS: 8.0    , CMP_EN: 10.5       },       
    ADCINA7     : { CMP_DIS: 7.0    , CMP_EN: 9.5        },       
    ADCINA8     : { CMP_DIS: 10.0   , CMP_EN: 12.5       },       
    ADCINA9     : { CMP_DIS: 8.1    , CMP_EN: 10.6       },       
    ADCINA10    : { CMP_DIS: 9.3    , CMP_EN: 11.8       },       
    ADCINB0     : { CMP_DIS: 7.1    , CMP_EN: 9.6        },       
    ADCINB1     : { CMP_DIS: 9.3    , CMP_EN: 11.8       },       
    ADCINB2     : { CMP_DIS: 9.6    , CMP_EN: 12.1       },       
    ADCINB3     : { CMP_DIS: 125.6  , CMP_EN: 128.1      },           
    ADCINB4     : { CMP_DIS: 8.8    , CMP_EN: 11.3       },       
    ADCINB5     : { CMP_DIS: 7.1    , CMP_EN: 9.6        },       
    ADCINB6     : { CMP_DIS: 9.2    , CMP_EN: 11.7       },       
    ADCINB8     : { CMP_DIS: 9.2    , CMP_EN: 11.7       },       
    ADCINB15    : { CMP_DIS: 12.7   , CMP_EN: 15.2       },       
    ADCINC0     : { CMP_DIS: 6.4    , CMP_EN: 8.9        },       
    ADCINC1     : { CMP_DIS: 6.1    , CMP_EN: 8.6        },       
    ADCINC2     : { CMP_DIS: 5.24   , CMP_EN: 7.74       },       
    ADCINC3     : { CMP_DIS: 5.5    , CMP_EN: 8          },   
    ADCINC4     : { CMP_DIS: 6.2    , CMP_EN: 8.7        },       
    ADCINC5     : { CMP_DIS: 5.6    , CMP_EN: 8.1        },       
    ADCINC6     : { CMP_DIS: 9.6    , CMP_EN: 12.1       },       
    ADCINC8     : { CMP_DIS: 8.8    , CMP_EN: 11.3       },       
    ADCINC10    : { CMP_DIS: 9.3    , CMP_EN: 11.8       },       
    ADCINC12    : { CMP_DIS: 4.1    , CMP_EN: 6.6        },       
    ADCINC14    : { CMP_DIS: 4.5    , CMP_EN: 7          },   
    ADCINC15    : { CMP_DIS: 12.7   , CMP_EN: 15.2       },       
}

var Cp_F2837xD = {
    ADCINA0     : { CMP_DIS: 12.9   , CMP_EN: 12.9  },
    ADCINA1     : { CMP_DIS: 10.3   , CMP_EN: 10.3  },
    ADCINA2     : { CMP_DIS: 5.9    , CMP_EN: 7.3   },
    ADCINA3     : { CMP_DIS: 6.3    , CMP_EN: 8.8   },
    ADCINA4     : { CMP_DIS: 5.9    , CMP_EN: 7.3   },
    ADCINA5     : { CMP_DIS: 6.3    , CMP_EN: 8.8   },
    ADCINB0     : { CMP_DIS: 117.0  , CMP_EN: 117.0 },
    ADCINB1     : { CMP_DIS: 10.6   , CMP_EN: 10.6  },
    ADCINB2     : { CMP_DIS: 5.9    , CMP_EN: 7.3   },
    ADCINB3     : { CMP_DIS: 6.2    , CMP_EN: 8.7   },
    ADCINB4     : { CMP_DIS: 5.2    , CMP_EN: 5.2   },
    ADCINB5     : { CMP_DIS: 5.1    , CMP_EN: 5.1   },
    ADCINC2     : { CMP_DIS: 5.5    , CMP_EN: 6.9   },
    ADCINC3     : { CMP_DIS: 5.8    , CMP_EN: 8.3   },
    ADCINC4     : { CMP_DIS: 5.0    , CMP_EN: 6.4   },
    ADCINC5     : { CMP_DIS: 5.3    , CMP_EN: 7.8   },
    ADCIND0     : { CMP_DIS: 5.3    , CMP_EN: 6.7   },
    ADCIND1     : { CMP_DIS: 5.7    , CMP_EN: 8.2   },
    ADCIND2     : { CMP_DIS: 5.3    , CMP_EN: 6.7   },
    ADCIND3     : { CMP_DIS: 5.6    , CMP_EN: 8.1   },
    ADCIND4     : { CMP_DIS: 4.3    , CMP_EN: 4.3   },
    ADCIND5     : { CMP_DIS: 4.3    , CMP_EN: 4.3   },
    ADCINA14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCINA15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
    ADCINB14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCINB15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
    ADCINC14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCINC15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
    ADCIND14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCIND15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
}

var Cp_F2837xS = {
    ADCINA0     : { CMP_DIS: 12.9   , CMP_EN: 12.9  },
    ADCINA1     : { CMP_DIS: 10.3   , CMP_EN: 10.3  },
    ADCINA2     : { CMP_DIS: 5.9    , CMP_EN: 7.3   },
    ADCINA3     : { CMP_DIS: 6.3    , CMP_EN: 8.8   },
    ADCINA4     : { CMP_DIS: 5.9    , CMP_EN: 7.3   },
    ADCINA5     : { CMP_DIS: 6.3    , CMP_EN: 8.8   },
    ADCINB0     : { CMP_DIS: 117.0  , CMP_EN: 117.0 },
    ADCINB1     : { CMP_DIS: 10.6   , CMP_EN: 10.6  },
    ADCINB2     : { CMP_DIS: 5.9    , CMP_EN: 7.3   },
    ADCINB3     : { CMP_DIS: 6.2    , CMP_EN: 8.7   },
    ADCINB4     : { CMP_DIS: 5.2    , CMP_EN: 5.2   },
    ADCINB5     : { CMP_DIS: 5.1    , CMP_EN: 5.1   },
    ADCINC2     : { CMP_DIS: 5.5    , CMP_EN: 6.9   },
    ADCINC3     : { CMP_DIS: 5.8    , CMP_EN: 8.3   },
    ADCINC4     : { CMP_DIS: 5.0    , CMP_EN: 6.4   },
    ADCINC5     : { CMP_DIS: 5.3    , CMP_EN: 7.8   },
    ADCIND0     : { CMP_DIS: 5.3    , CMP_EN: 6.7   },
    ADCIND1     : { CMP_DIS: 5.7    , CMP_EN: 8.2   },
    ADCIND2     : { CMP_DIS: 5.3    , CMP_EN: 6.7   },
    ADCIND3     : { CMP_DIS: 5.6    , CMP_EN: 8.1   },
    ADCIND4     : { CMP_DIS: 4.3    , CMP_EN: 4.3   },
    ADCIND5     : { CMP_DIS: 4.3    , CMP_EN: 4.3   },
    ADCINA14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCINA15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
    ADCINB14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCINB15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
    ADCINC14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCINC15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
    ADCIND14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCIND15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
}

var Cp_F2838x = {
    ADCINA0     : { CMP_DIS: 12.9   , CMP_EN: 12.9  },
    ADCINA1     : { CMP_DIS: 10.3   , CMP_EN: 10.3  },
    ADCINA2     : { CMP_DIS: 5.9    , CMP_EN: 7.3   },
    ADCINA3     : { CMP_DIS: 6.3    , CMP_EN: 8.8   },
    ADCINA4     : { CMP_DIS: 5.9    , CMP_EN: 7.3   },
    ADCINA5     : { CMP_DIS: 6.3    , CMP_EN: 8.8   },
    ADCINB0     : { CMP_DIS: 117.0  , CMP_EN: 117.0 },
    ADCINB1     : { CMP_DIS: 10.6   , CMP_EN: 10.6  },
    ADCINB2     : { CMP_DIS: 5.9    , CMP_EN: 7.3   },
    ADCINB3     : { CMP_DIS: 6.2    , CMP_EN: 8.7   },
    ADCINB4     : { CMP_DIS: 5.2    , CMP_EN: 5.2   },
    ADCINB5     : { CMP_DIS: 5.1    , CMP_EN: 5.1   },
    ADCINC2     : { CMP_DIS: 5.5    , CMP_EN: 6.9   },
    ADCINC3     : { CMP_DIS: 5.8    , CMP_EN: 8.3   },
    ADCINC4     : { CMP_DIS: 5.0    , CMP_EN: 6.4   },
    ADCINC5     : { CMP_DIS: 5.3    , CMP_EN: 7.8   },
    ADCIND0     : { CMP_DIS: 5.3    , CMP_EN: 6.7   },
    ADCIND1     : { CMP_DIS: 5.7    , CMP_EN: 8.2   },
    ADCIND2     : { CMP_DIS: 5.3    , CMP_EN: 6.7   },
    ADCIND3     : { CMP_DIS: 5.6    , CMP_EN: 8.1   },
    ADCIND4     : { CMP_DIS: 4.3    , CMP_EN: 4.3   },
    ADCIND5     : { CMP_DIS: 4.3    , CMP_EN: 4.3   },
    ADCINA14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCINA15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
    ADCINB14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCINB15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
    ADCINC14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCINC15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
    ADCIND14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCIND15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
}

var Cp_F2807x = {
    ADCINA0 : { CMP_DIS: 12.9   , CMP_EN: 12.9  },
    ADCINA1 : { CMP_DIS: 10.3   , CMP_EN: 10.3  },
    ADCINA2 : { CMP_DIS: 5.9    , CMP_EN: 7.3   },
    ADCINA3 : { CMP_DIS: 6.3    , CMP_EN: 8.8   },
    ADCINA4 : { CMP_DIS: 5.9    , CMP_EN: 7.3   },
    ADCINA5 : { CMP_DIS: 6.3    , CMP_EN: 8.8   },
    ADCINB0 : { CMP_DIS: 117.0  , CMP_EN: 117.0 },
    ADCINB1 : { CMP_DIS: 10.6   , CMP_EN: 10.6  },
    ADCINB2 : { CMP_DIS: 5.9    , CMP_EN: 7.3   },
    ADCINB3 : { CMP_DIS: 6.2    , CMP_EN: 8.7   },
    ADCINB4 : { CMP_DIS: 5.2    , CMP_EN: 5.2   },
    ADCINB5 : { CMP_DIS: 5.1    , CMP_EN: 5.1   },
    ADCIND0 : { CMP_DIS: 5.3    , CMP_EN: 6.7   },
    ADCIND1 : { CMP_DIS: 5.7    , CMP_EN: 8.2   },
    ADCIND2 : { CMP_DIS: 5.3    , CMP_EN: 6.7   },
    ADCIND3 : { CMP_DIS: 5.6    , CMP_EN: 8.1   },
    ADCIND4 : { CMP_DIS: 4.3    , CMP_EN: 4.3   },
    ADCINA14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCINA15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
    ADCINB14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCINB15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
    ADCIND14    : { CMP_DIS: 8.6    , CMP_EN: 10.0  },
    ADCIND15    : { CMP_DIS: 9.0    , CMP_EN: 11.5  },
}

var Cp_F28002x = {
    ADCINA0     : { CMP_DIS: 3.3    , CMP_EN: 15.8  },    
    ADCINC15    : { CMP_DIS: 3.3    , CMP_EN: 15.8  },    
    ADCINA1     : { CMP_DIS: 2.4    , CMP_EN: 4.9   },    
    ADCINA2     : { CMP_DIS: 2.9    , CMP_EN: 5.4   },    
    ADCINC9     : { CMP_DIS: 2.9    , CMP_EN: 5.4   },    
    ADCINA3     : { CMP_DIS: 71.4   , CMP_EN: 73.9  },    
    ADCINC5     : { CMP_DIS: 71.4   , CMP_EN: 73.9  },    
    ADCINA4     : { CMP_DIS: 4.5    , CMP_EN: 7     },
    ADCINC14    : { CMP_DIS: 4.5    , CMP_EN: 7     },
    ADCINA5     : { CMP_DIS: 2.7    , CMP_EN: 5.2   },    
    ADCINC2     : { CMP_DIS: 2.7    , CMP_EN: 5.2   },    
    ADCINA6     : { CMP_DIS: 2.6    , CMP_EN: 5.1   },    
    ADCINA7     : { CMP_DIS: 4.2    , CMP_EN: 6.7   },    
    ADCINC3     : { CMP_DIS: 4.2    , CMP_EN: 6.7   },    
    ADCINA8     : { CMP_DIS: 4.5    , CMP_EN: 7     },
    ADCINC11    : { CMP_DIS: 4.5    , CMP_EN: 7     },
    ADCINA9     : { CMP_DIS: 3.4    , CMP_EN: 5.9   },    
    ADCINC8     : { CMP_DIS: 3.4    , CMP_EN: 5.9   },    
    ADCINA10    : { CMP_DIS: 2.9    , CMP_EN: 5.4   },    
    ADCINC10    : { CMP_DIS: 2.9    , CMP_EN: 5.4   },    
    ADCINA11    : { CMP_DIS: 2.9    , CMP_EN: 5.4   },    
    ADCINC0     : { CMP_DIS: 2.9    , CMP_EN: 5.4   },    
    ADCINA12    : { CMP_DIS: 4.7    , CMP_EN: 7.2   },    
    ADCINC1     : { CMP_DIS: 4.7    , CMP_EN: 7.2   },    
    ADCINA14    : { CMP_DIS: 2.5    , CMP_EN: 5     },
    ADCINC4     : { CMP_DIS: 2.5    , CMP_EN: 5     },
    ADCINA15    : { CMP_DIS: 3.3    , CMP_EN: 5.8   },    
    ADCINC7     : { CMP_DIS: 3.3    , CMP_EN: 5.8   },    
    ADCINC6     : { CMP_DIS: 2.9    , CMP_EN: 5.4   },    
}

var Cp_F28003x = {
    ADCINA0     : { CMP_DIS: 9.1 , CMP_EN:  11.6  },
    ADCINA1     : { CMP_DIS: 7.4 , CMP_EN:  9.9  },
    ADCINA2     : { CMP_DIS: 4.1 , CMP_EN:  6.6  },
    ADCINA3     : { CMP_DIS: 3.3 , CMP_EN:  5.8  },
    ADCINA4     : { CMP_DIS: 3.8 , CMP_EN:  6.3  },
    ADCINA5     : { CMP_DIS: 3.5 , CMP_EN:  6  },
    ADCINA6     : { CMP_DIS: 3.2 , CMP_EN:  5.7  },
    ADCINA7     : { CMP_DIS: 3.8 , CMP_EN:  6.3 },
    ADCINA8     : { CMP_DIS: 4.1 , CMP_EN:  6.6  },
    ADCINA9     : { CMP_DIS: 3.1 , CMP_EN:  5.6  },
    ADCINA10    : { CMP_DIS: 4.7 , CMP_EN: 7.2  },
    ADCINA11    : { CMP_DIS: 4 , CMP_EN: 6.5  },
    ADCINA12    : { CMP_DIS: 3.4 , CMP_EN: 5.9  },
    ADCINA14    : { CMP_DIS: 3.8 , CMP_EN: 6.3  },
    ADCINA15    : { CMP_DIS: 3.8 , CMP_EN: 6.3  },
    ADCINC0     : { CMP_DIS: 4 , CMP_EN: 6.5  },
    ADCINC1     : { CMP_DIS: 3 , CMP_EN: 5.5  },
    ADCINC2     : { CMP_DIS: 3.6 , CMP_EN: 6.1  },
    ADCINC3     : { CMP_DIS: 3.8 , CMP_EN:  6.3 },
    ADCINC4     : { CMP_DIS: 3.8 , CMP_EN: 6.3  },
    ADCINC5     : { CMP_DIS: 3.6 , CMP_EN: 6.1  },
    ADCINC6     : { CMP_DIS: 3.9 , CMP_EN: 6.4  },
    ADCINC7     : { CMP_DIS: 3.3 , CMP_EN: 5.8  },
    ADCINC8     : { CMP_DIS: 3.8 , CMP_EN: 6.3  },
    ADCINC9     : { CMP_DIS: 4.1 , CMP_EN:  6.6  },
    ADCINC10    : { CMP_DIS: 4.7 , CMP_EN: 7.2  },
    ADCINC11    : { CMP_DIS: 4.1 , CMP_EN: 6.6  },
    ADCINC14    : { CMP_DIS: 4.2 , CMP_EN: 6.7  },
    ADCINC15    : { CMP_DIS: 9.1 , CMP_EN: 11.6  },
    ADCINB0     : { CMP_DIS: 4.1 , CMP_EN: 6.6  },
    ADCINB1     : { CMP_DIS: 4.7 , CMP_EN: 7.2  },
    ADCINB2     : { CMP_DIS: 3.9 , CMP_EN: 6.4  },
    ADCINB3     : { CMP_DIS: 75  , CMP_EN: 77.5 },
    ADCINB4     : { CMP_DIS: 3.8 , CMP_EN: 6.3  },
    ADCINB5     : { CMP_DIS: 3.5 , CMP_EN: 6  },
    ADCINB6     : { CMP_DIS: 4.1 , CMP_EN:  6.6  },
    ADCINB7     : { CMP_DIS: 7.4 , CMP_EN:  9.9  },
    ADCINB8     : { CMP_DIS: 3.8 , CMP_EN:  6.3  },
    ADCINB9     : { CMP_DIS: 3.3 , CMP_EN: 5.8  },
    ADCINB11    : { CMP_DIS: 4 , CMP_EN: 6.5  },
    ADCINB12    : { CMP_DIS: 3.6 , CMP_EN: 6.1  },
    ADCINB14    : { CMP_DIS: 3.8 , CMP_EN: 6.3  },
    ADCINB15    : { CMP_DIS: 9.1 , CMP_EN: 11.6  },
    AGPIO_B5    : { CMP_DIS: 3.2   , CMP_EN: 5.7  },
    AGPIO_B11   : { CMP_DIS: 3.1   , CMP_EN: 5.6  },
}

var Cp_F280013x = {
    ADCINA0     : { CMP_DIS: 9.3, CMP_EN:  14.3  },
    ADCINA1     : { CMP_DIS: 9.3, CMP_EN:  14.3  },
    ADCINA2     : { CMP_DIS: 1.5, CMP_EN:  4.0   },
    ADCINA3     : { CMP_DIS: 1.8, CMP_EN:  4.3  },
    ADCINA4     : { CMP_DIS: 2.4, CMP_EN:  4.9  },
    ADCINA5     : { CMP_DIS: 4.4, CMP_EN:  9.4  },
    ADCINA6     : { CMP_DIS: 3.1, CMP_EN:  8.1  },
    ADCINA7     : { CMP_DIS: 5.1, CMP_EN:  10.1  },
    ADCINA8     : { CMP_DIS: 2.2, CMP_EN:  4.7  },
    ADCINA9     : { CMP_DIS: 4.3, CMP_EN:  9.3  },
    ADCINA10    : { CMP_DIS: 4.3, CMP_EN:  9.3  },
    ADCINA11    : { CMP_DIS: 4.4 , CMP_EN:  9.4  },
    ADCINA12    : { CMP_DIS: 5.1, CMP_EN:  10.1  },
    ADCINA14    : { CMP_DIS: 5.4 , CMP_EN: 10.4  },
    ADCINA15    : { CMP_DIS: 5.4 , CMP_EN: 10.4  },
    ADCINA16    : { CMP_DIS: 2.4 , CMP_EN: 4.9},
    ADCINA17    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINA18    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINA19    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINA20    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINC0     : { CMP_DIS: 4.4 , CMP_EN: 9.4  },
    ADCINC1     : { CMP_DIS: 5.1, CMP_EN:  10.1  },
    ADCINC2     : { CMP_DIS: 4.4 , CMP_EN:  9.4  },
    ADCINC3     : { CMP_DIS: 5.1, CMP_EN:  10.1  },
    ADCINC4     : { CMP_DIS: 5.4 , CMP_EN: 10.4  },
    ADCINC5     : { CMP_DIS: 1.8 , CMP_EN: 4.3  },
    ADCINC6     : { CMP_DIS: 3.1 , CMP_EN:  8.1  },
    ADCINC7     : { CMP_DIS: 5.4 , CMP_EN: 10.4  },
    ADCINC8     : { CMP_DIS: 4.3, CMP_EN:  9.3  },
    ADCINC9     : { CMP_DIS: 1.5 , CMP_EN: 4.0  },
    ADCINC10    : { CMP_DIS: 4.3, CMP_EN:  9.3  },
    ADCINC11    : { CMP_DIS: 2.2, CMP_EN:  4.7  },
    ADCINC14    : { CMP_DIS: 2.4 , CMP_EN: 4.9  },
    ADCINC15    : { CMP_DIS: 9.3 , CMP_EN: 14.3},
    ADCINC16    : { CMP_DIS: 2.4 , CMP_EN: 4.9},
    ADCINC17    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINC18    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINC19    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINC20    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINB3     : { CMP_DIS: 63  , CMP_EN: 65.5 },
    ADCINB5     : { CMP_DIS: 2.1 , CMP_EN: 4.6  },
    ADCINB11    : { CMP_DIS: 1.6 , CMP_EN: 4.1  },
    AGPIO_B5    : { CMP_DIS: 1   , CMP_EN: 3.5  },
    AGPIO_B11   : { CMP_DIS: 1   , CMP_EN: 3.5  },
}

var Cp_F280015x = {
    ADCINA0     : { CMP_DIS: 9.3, CMP_EN:  14.3  },
    ADCINA1     : { CMP_DIS: 9.3, CMP_EN:  14.3  },
    ADCINA2     : { CMP_DIS: 1.5, CMP_EN:  4.0   },
    ADCINA3     : { CMP_DIS: 1.8, CMP_EN:  4.3  },
    ADCINA4     : { CMP_DIS: 2.4, CMP_EN:  4.9  },
    ADCINA5     : { CMP_DIS: 4.4, CMP_EN:  9.4  },
    ADCINA6     : { CMP_DIS: 3.1, CMP_EN:  8.1  },
    ADCINA7     : { CMP_DIS: 5.1, CMP_EN:  10.1  },
    ADCINA8     : { CMP_DIS: 2.2, CMP_EN:  4.7  },
    ADCINA9     : { CMP_DIS: 4.3, CMP_EN:  9.3  },
    ADCINA10    : { CMP_DIS: 4.3, CMP_EN:  9.3  },
    ADCINA11    : { CMP_DIS: 4.4 , CMP_EN:  9.4  },
    ADCINA12    : { CMP_DIS: 5.1, CMP_EN:  10.1  },
    ADCINA14    : { CMP_DIS: 5.4 , CMP_EN: 10.4  },
    ADCINA15    : { CMP_DIS: 5.4 , CMP_EN: 10.4  },
    ADCINA16    : { CMP_DIS: 2.4 , CMP_EN: 4.9},
    ADCINA17    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINA18    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINA19    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINA20    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINC0     : { CMP_DIS: 4.4 , CMP_EN: 9.4  },
    ADCINC1     : { CMP_DIS: 5.1, CMP_EN:  10.1  },
    ADCINC2     : { CMP_DIS: 4.4 , CMP_EN:  9.4  },
    ADCINC3     : { CMP_DIS: 5.1, CMP_EN:  10.1  },
    ADCINC4     : { CMP_DIS: 5.4 , CMP_EN: 10.4  },
    ADCINC5     : { CMP_DIS: 1.8 , CMP_EN: 4.3  },
    ADCINC6     : { CMP_DIS: 3.1 , CMP_EN:  8.1  },
    ADCINC7     : { CMP_DIS: 5.4 , CMP_EN: 10.4  },
    ADCINC8     : { CMP_DIS: 4.3, CMP_EN:  9.3  },
    ADCINC9     : { CMP_DIS: 1.5 , CMP_EN: 4.0  },
    ADCINC10    : { CMP_DIS: 4.3, CMP_EN:  9.3  },
    ADCINC11    : { CMP_DIS: 2.2, CMP_EN:  4.7  },
    ADCINC14    : { CMP_DIS: 2.4 , CMP_EN: 4.9  },
    ADCINC15    : { CMP_DIS: 9.3 , CMP_EN: 14.3},
    ADCINC16    : { CMP_DIS: 2.4 , CMP_EN: 4.9},
    ADCINC17    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINC18    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINC19    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINC20    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINB3     : { CMP_DIS: 63  , CMP_EN: 65.5 },
    ADCINB5     : { CMP_DIS: 2.1 , CMP_EN: 4.6  },
    ADCINB11    : { CMP_DIS: 1.6 , CMP_EN: 4.1  },
    AGPIO_B5    : { CMP_DIS: 1   , CMP_EN: 3.5  },
    AGPIO_B11   : { CMP_DIS: 1   , CMP_EN: 3.5  },
}

var Cp_F28P65x = {
    ADCINA0     : { CMP_DIS: 9.3, CMP_EN:  14.3  },
    ADCINA1     : { CMP_DIS: 9.3, CMP_EN:  14.3  },
    ADCINA2     : { CMP_DIS: 1.5, CMP_EN:  4.0   },
    ADCINA3     : { CMP_DIS: 1.8, CMP_EN:  4.3  },
    ADCINA4     : { CMP_DIS: 2.4, CMP_EN:  4.9  },
    ADCINA5     : { CMP_DIS: 4.4, CMP_EN:  9.4  },
    ADCINA6     : { CMP_DIS: 3.1, CMP_EN:  8.1  },
    ADCINA7     : { CMP_DIS: 5.1, CMP_EN:  10.1  },
    ADCINA8     : { CMP_DIS: 2.2, CMP_EN:  4.7  },
    ADCINA9     : { CMP_DIS: 4.3, CMP_EN:  9.3  },
    ADCINA10    : { CMP_DIS: 4.3, CMP_EN:  9.3  },
    ADCINA11    : { CMP_DIS: 4.4 , CMP_EN:  9.4  },
    ADCINA12    : { CMP_DIS: 5.1, CMP_EN:  10.1  },
    ADCINA14    : { CMP_DIS: 5.4 , CMP_EN: 10.4  },
    ADCINA15    : { CMP_DIS: 5.4 , CMP_EN: 10.4  },
    ADCINA16    : { CMP_DIS: 2.4 , CMP_EN: 4.9},
    ADCINA17    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINA18    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINA19    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINA20    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINC0     : { CMP_DIS: 4.4 , CMP_EN: 9.4  },
    ADCINC1     : { CMP_DIS: 5.1, CMP_EN:  10.1  },
    ADCINC2     : { CMP_DIS: 4.4 , CMP_EN:  9.4  },
    ADCINC3     : { CMP_DIS: 5.1, CMP_EN:  10.1  },
    ADCINC4     : { CMP_DIS: 5.4 , CMP_EN: 10.4  },
    ADCINC5     : { CMP_DIS: 1.8 , CMP_EN: 4.3  },
    ADCINC6     : { CMP_DIS: 3.1 , CMP_EN:  8.1  },
    ADCINC7     : { CMP_DIS: 5.4 , CMP_EN: 10.4  },
    ADCINC8     : { CMP_DIS: 4.3, CMP_EN:  9.3  },
    ADCINC9     : { CMP_DIS: 1.5 , CMP_EN: 4.0  },
    ADCINC10    : { CMP_DIS: 4.3, CMP_EN:  9.3  },
    ADCINC11    : { CMP_DIS: 2.2, CMP_EN:  4.7  },
    ADCINC14    : { CMP_DIS: 2.4 , CMP_EN: 4.9  },
    ADCINC15    : { CMP_DIS: 9.3 , CMP_EN: 14.3},
    ADCINC16    : { CMP_DIS: 2.4 , CMP_EN: 4.9},
    ADCINC17    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINC18    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINC19    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINC20    : { CMP_DIS: 2.7 , CMP_EN: 5.2},
    ADCINB3     : { CMP_DIS: 63  , CMP_EN: 65.5 },
    ADCINB5     : { CMP_DIS: 2.1 , CMP_EN: 4.6  },
    ADCINB11    : { CMP_DIS: 1.6 , CMP_EN: 4.1  },
    AGPIO_B5    : { CMP_DIS: 1   , CMP_EN: 3.5  },
    AGPIO_B11   : { CMP_DIS: 1   , CMP_EN: 3.5  },
}

var Cp = {
	F28P65x: Cp_F28P65x,
	F280015x: Cp_F280015x,
    F280013x: Cp_F280013x,
    F28003x: Cp_F28003x,
    F28002x: Cp_F28002x,
    F2838x : Cp_F2838x,
    F28004x: Cp_F28004x,
    F2837xD: Cp_F2837xD,
    F2837xS: Cp_F2837xS,
    F2807x:  Cp_F2807x
}

var Ron = {
	F28P65x:{ REF_3V3: 860, REF: 500}, 
	F280015x:{ REF_3V3: 860, REF: 500}, 
    F280013x:{ REF_3V3: 860, REF: 500}, 
    F28003x: { REF_3V3: 860, REF: 500}, 
    F28002x: { REF_3V3: 860, REF: 500},
    F2838x : { REF_3V3: 700, REF: 700},
    F28004x: { REF_3V3: 860, REF: 500},
    F2837xD: { REF_3V3: 425, REF: 425},
    F2837xS: { REF_3V3: 425, REF: 425},
    F2807x:  { REF_3V3: 600, REF: 600},
}

var Ch = {
	F28P65x:{ REF_3V3: 7.5,  REF: 12.5},
	F280015x:{ REF_3V3: 7.5,  REF: 12.5},
    F280013x:{ REF_3V3: 7.5,  REF: 12.5}, 
    F28003x: { REF_3V3: 7.5,  REF: 12.5}, 
    F28002x: { REF_3V3: 7.5,  REF: 12.5},
    F2838x : { REF_3V3: 16.5, REF: 16.5},
    F28004x: { REF_3V3: 7.5,  REF: 12.5},
    F2837xD: { REF_3V3: 14.5, REF: 14.5},
    F2837xS: { REF_3V3: 14.5, REF: 14.5},
    F2807x:  { REF_3V3: 16.5, REF: 16.5},
}

exports = {
    Ch: Ch,
    Ron: Ron,
    Cp: Cp,
    tEOC_12bit_SYSCLK,
    tEOC_16bit_SYSCLK
}