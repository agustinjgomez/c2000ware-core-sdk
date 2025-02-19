#ifndef DRIVER_TINIE_NPU_MAPPING_H_
#define DRIVER_TINIE_NPU_MAPPING_H_

//*****************************************************************************
// MEMCFG
//*****************************************************************************
#define MEMCFG_GSXACCPROT0_TINIE_WRPROT_GS0  MEMCFG_GSXACCPROT0_NPU_WRPROT_GS0
#define MEMCFG_NMVIOL_TINIEREAD              MEMCFG_NMVIOL_NPUREAD
#define MEMCFG_NMVIOL_TINIEWRITE             MEMCFG_NMVIOL_NPUWRITE
#define MEMCFG_O_NMTINIERDAVADDR             MEMCFG_O_NMNPURDAVADDR
#define MEMCFG_O_NMTINIEWRAVADDR             MEMCFG_O_NMNPUWRAVADDR
#define MEMCFG_O_UCTINIEREADDR               MEMCFG_O_UCNPUREADDR
#define MEMCFG_GSXACCPROT0_TINIE_WRPROT_GS0  MEMCFG_GSXACCPROT0_NPU_WRPROT_GS0
#define MEMCFG_GSXACCPROT0_TINIE_WRPROT_GS1  MEMCFG_GSXACCPROT0_NPU_WRPROT_GS1
#define MEMCFG_GSXACCPROT0_TINIE_WRPROT_GS2  MEMCFG_GSXACCPROT0_NPU_WRPROT_GS2
#define MEMCFG_GSXACCPROT0_TINIE_WRPROT_GS3  MEMCFG_GSXACCPROT0_NPU_WRPROT_GS3
#define MEMCFG_NMAVFLG_TINIEREAD             MEMCFG_NMAVFLG_NPUREAD
#define MEMCFG_NMAVFLG_TINIEWRITE            MEMCFG_NMAVFLG_NPUWRITE
#define MEMCFG_NMAVSET_TINIEREAD             MEMCFG_NMAVSET_NPUREAD
#define MEMCFG_NMAVSET_TINIEWRITE            MEMCFG_NMAVSET_NPUWRITE
#define MEMCFG_NMAVCLR_TINIEREAD             MEMCFG_NMAVCLR_NPUREAD
#define MEMCFG_NMAVCLR_TINIEWRITE            MEMCFG_NMAVCLR_NPUWRITE
#define MEMCFG_NMAVINTEN_TINIEREAD           MEMCFG_NMAVINTEN_NPUREAD
#define MEMCFG_NMAVINTEN_TINIEWRITE          MEMCFG_NMAVINTEN_NPUWRITE
#define MEMCFG_UCERRFLG_TINIERDERR           MEMCFG_UCERRFLG_NPURDERR
#define MEMCFG_UCERRSET_TINIERDERR           MEMCFG_UCERRSET_NPURDERR
#define MEMCFG_UCERRCLR_TINIERDERR           MEMCFG_UCERRCLR_NPURDERR


//*****************************************************************************
// SysCtrl
//*****************************************************************************
#define SYSCTL_PERIPH_CLK_TINIE           SYSCTL_PERIPH_CLK_NPU
#define SYSCTL_PERIPH_RES_TINIE           SYSCTL_PERIPH_RES_NPU
#define SYSCTL_TINIECLK_DIV_1             SYSCTL_NPUCLK_DIV_1
#define SYSCTL_TINIECLK_DIV_2             SYSCTL_NPUCLK_DIV_2
#define SysCtl_TINIECLKDivider            SysCtl_NPUCLKDivider
#define SysCtl_setTINIEClockDivider       SysCtl_setNPUClockDivider
#define SYSCTL_SOFTPRES30_TINIE           SYSCTL_SOFTPRES30_NPU
#define SYSCTL_PERCLKDIVSEL_TINIECLKDIV   SYSCTL_PERCLKDIVSEL_NPUCLKDIV
#define SYSCTL_PCLKCR12_TINIE             SYSCTL_PCLKCR12_NPU

#endif /* DRIVER_TINIE_NPU_MAPPING_H_ */
