;;#############################################################################
;;
;; FILE:   dcsm_ex1_f2838x_dcsm_z2otp.asm
;;
;; TITLE:  Dual Code Security Module Zone 2 OTP for CM's Access control by CPU1
;;
;; DESCRIPTION:
;;
;;         This file is used by the example dcsm_ex1_secure_memory_partition 
;;         to specify Z2 DCSM OTP and zone select block values to program.
;;
;;         It configures the 1st Zone Select Block(ZSB) in the OTP to change the
;;         zone passwords and allocates CM's C1RAM to zone 2.
;;
;; !!IMPORTANT!! The below memory sections are mapped to OTP (one-time
;; programmable) memory with the *lnk_DCSM_cpu1.cmd linker command file. In order
;; to program the below memory sections, user should uncomment the .long words
;; of each section and change the value to what is desired. Additionally, the
;; corresponding section of *lnk_DCSM_cpu1.cmd should no longer be labeled as a
;; dummy section. Remove ", type = DSECT" in SECTIONS from the memory section
;; that is being programmed.
;;
;;
;; !!IMPORTANT!! The "dcsm_z2otp_link_pointer" section contains the
;; Z2 LINKPOINTER which determines the location of the Z2 Zone Select block.
;; If the LINKPOINTER is changed, then the "dcsm_zsel_z2" section
;; in the *lnk_DCSM_cpu1.cmd command linker file must also change to an
;; address decoded from the value specified in the Z2-LINKPOINTER location.
;; In this example, the "dcsm_zsel_z2" section maps to ZSB1.
;;
;; The "dcsm_zsel_z2" section contains the actual Z2 Zone Select Block
;; values that will be linked and programmed into to the DCSM Z2 OTP Zone
;; Select block in OTP. In this example, the values seen for the CSMPSWD* 
;; & GRABRAM* are of the ZSB1 CSMPSWD (these values must be known in order to 
;; unlock the CSM module) & for the memory allocations resp.
;;
;; It is recommended that all values be left as default expected by TRM during code
;; development.  These default values do not activate code security and dummy
;; reads of the Z2 DCSM PWL registers is all that is required to unlock the
;; CSM. When code development is complete, modify values to activate the
;; code security module.
;;
;; ******************************WARNING***************************************
;; It is recommended not to program 0xFFFFFFFF to user OTP locations, if users
;; intend to comeback and re-program any of the bits to '0' in future. If user
;; programs 0xFFFFFFFF to any of the OTP locations then the ECC locations would
;; get programmed to a non erased state and users won't be able to comeback
;; and re-program the OTP location to another value. Please refer to DCSM
;; chapter of device TRM for more details on ECC for the locations in DCSM.
;;
;; Hence TI ships this example commenting out the initialization of all the
;; below locations.
;;#############################################################################
;; 
;// C2000Ware v5.04.00.00
;//Copyright (C) 2024 Texas Instruments Incorporated - http://www.ti.com
;//
;// Redistribution and use in source and binary forms, with or without 
;// modification, are permitted provided that the following conditions 
;// are met:
;// 
;//   Redistributions of source code must retain the above copyright 
;//   notice, this list of conditions and the following disclaimer.
;// 
;//   Redistributions in binary form must reproduce the above copyright
;//   notice, this list of conditions and the following disclaimer in the 
;//   documentation and/or other materials provided with the   
;//   distribution.
;// 
;//   Neither the name of Texas Instruments Incorporated nor the names of
;//   its contributors may be used to endorse or promote products derived
;//   from this software without specific prior written permission.
;// 
;// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
;// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
;// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
;// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
;// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
;// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
;// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
;// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
;// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
;// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
;// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
;// $
;;#############################################################################

      .sect "dcsm_z2otp_link_pointer"
      .retain
;;    .long 0x00003FFF     ;Z2OTP_LINKPOINTER1
;;    .long 0x00003FFF     ;Z2OTP_LINKPOINTER2
;;    .long 0x00003FFF     ;Z2OTP_LINKPOINTER3

;; Uncomment these lines to allow programming of Zone2 Link pointer which has to
;; be done in either multiples of 64-bits or 128-bits.
      .sect "dcsm_rsvd_z2"
      .retain
;;    .long 0xFFFFFFFF     ;Reserved

      .sect "dcsm_z2otp_gpreg"
      .retain
;;    .long 0xFFFFFFFF     ;Z2OTP_GPREG1
;;    .long 0xFFFFFFFF     ;Z2OTP_GPREG2
;;    .long 0xFFFFFFFF     ;Z2OTP_GPREG3
;;    .long 0xFFFFFFFF     ;Z2OTP_GPREG4

      .sect "dcsm_z2otp_pswd_lock"
      .retain
;;    .long 0xFFFFFFFF     ;Z2OTP_PSWDLOCK

      .sect "dcsm_z2otp_crc_lock"
      .retain
;;    .long 0xFFFFFFFF     ;Z2OTP_CRCLOCK

;; Uncomment these lines to allow programming of Zone2 PSWDLOCK & CRCLOCK
;; which has to be done in either multiples of 64-bits or 128-bits.
      .sect "dcsm_rsvd1_z2"
      .retain
;     .long 0xFFFFFFFF     ;Reserved
;     .long 0xFFFFFFFF     ;Reserved

      .sect "dcsm_zsel_z2"
      .retain
;;    .long 0xFFFFFFFF     ;Z2OTP_CSMPSWD0 (LSW of 128-bit password)
;;    .long 0x1F7FFFFF     ;Z2OTP_CSMPSWD1
;;    .long 0xFFFFFFFF     ;Z2OTP_CSMPSWD2
;;    .long 0xFFFFFFFF     ;Z2OTP_CSMPSWD3 (MSW of 128-bit password)

;;    .long 0x0AAAAAAA     ;Z2OTP_GRABSECT1
;;    .long 0x0AAAAAAA     ;Z2OTP_GRABSECT2
;;    .long 0x0AAAAAAA     ;Z2OTP_GRABSECT3
;;    .long 0x000AAAAA     ;Z2OTP_GRABRAM1
;;    .long 0x0AAAAA06     ;Z2OTP_GRABRAM2
;;    .long 0x000AAAAA     ;Z2OTP_GRABRAM3

;;    .long 0xFFFFFFFF     ;Z2OTP_EXEONLYSECT1
;;    .long 0xFFFFFFFF     ;Z2OTP_EXEONLYSECT2
;;    .long 0xFFFFFFFF     ;Z2OTP_EXEONLYRAM1
;;    .long 0xFFFFFFFF     ;Reserved
;;    .long 0xFFFFFFFF     ;Z2OTP_JTAGPSWDL0
;;    .long 0xFFFFFFFF     ;Z2OTP_JTAGPSWDL1

;;----------------------------------------------------------------------

;; For code security operation,after development has completed, prior to
;; production, all other zone select block locations should be programmed
;; to 0x0000 for maximum security.

;;#############################################################################
;; End of file
;;#############################################################################
