//###########################################################################
//
// FILE:    hw_mindbxbar.h
//
// TITLE:   Definitions for the XBAR registers.
//
//###########################################################################
// 
// C2000Ware v5.03.00.00
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

#ifndef HW_MINDBXBAR_H
#define HW_MINDBXBAR_H

//*************************************************************************************************
//
// The following are defines for the XBAR register offsets
//
//*************************************************************************************************
#define XBAR_O_MDL1SELECT        0x0U    // MDL1SELECT Input Select Register
#define XBAR_O_MDL2SELECT        0x1U    // MDL2SELECT Input Select Register
#define XBAR_O_MDL3SELECT        0x2U    // MDL3SELECT Input Select Register
#define XBAR_O_MDL4SELECT        0x3U    // MDL4SELECT Input Select Register
#define XBAR_O_MDL5SELECT        0x4U    // MDL5SELECT Input Select Register
#define XBAR_O_MDL6SELECT        0x5U    // MDL6SELECT Input Select Register
#define XBAR_O_MDL7SELECT        0x6U    // MDL7SELECT Input Select Register
#define XBAR_O_MDL8SELECT        0x7U    // MDL8SELECT Input Select Register
#define XBAR_O_MDL9SELECT        0x8U    // MDL9SELECT Input Select Register
#define XBAR_O_MDL10SELECT       0x9U    // MDL10SELECT Input Select Register
#define XBAR_O_MDL11SELECT       0xAU    // MDL11SELECT Input Select Register
#define XBAR_O_MDL12SELECT       0xBU    // MDL12SELECT Input Select Register
#define XBAR_O_MDL13SELECT       0xCU    // MDL13SELECT Input Select Register
#define XBAR_O_MDL14SELECT       0xDU    // MDL14SELECT Input Select Register
#define XBAR_O_MDL15SELECT       0xEU    // MDL15SELECT Input Select Register
#define XBAR_O_MDL16SELECT       0xFU    // MDL16SELECT Input Select Register
#define XBAR_O_INPUTSELECTLOCK   0x1EU   // Input Select Lock Register


//*************************************************************************************************
//
// The following are defines for the bit fields in the INPUTSELECTLOCK register
//
//*************************************************************************************************
#define XBAR_INPUTSELECTLOCK_MDL1SELECT    0x1U      // Lock bit for MDL1SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL2SELECT    0x2U      // Lock bit for MDL2SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL3SELECT    0x4U      // Lock bit for MDL3SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL4SELECT    0x8U      // Lock bit for MDL4SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL5SELECT    0x10U     // Lock bit for MDL5SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL6SELECT    0x20U     // Lock bit for MDL6SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL7SELECT    0x40U     // Lock bit for MDL7SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL8SELECT    0x80U     // Lock bit for MDL8SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL9SELECT    0x100U    // Lock bit for MDL9SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL10SELECT   0x200U    // Lock bit for MDL10SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL11SELECT   0x400U    // Lock bit for MDL11SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL12SELECT   0x800U    // Lock bit for MDL12SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL13SELECT   0x1000U   // Lock bit for MDL13SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL14SELECT   0x2000U   // Lock bit for MDL14SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL15SELECT   0x4000U   // Lock bit for MDL15SELECT Register
#define XBAR_INPUTSELECTLOCK_MDL16SELECT   0x8000U   // Lock bit for MDL16SELECT Register



#endif
