//#############################################################################
//! \file   reference/C/source/$FILENAME$
//! \brief  Mean of Real and Imaginary Parts of a Complex Vector
//#############################################################################
//!
//! Copyright: Copyright (C) 2023 Texas Instruments Incorporated -
//!	All rights reserved not granted herein.
//!	Limited License.
//!
//! Texas Instruments Incorporated grants a world-wide, royalty-free,
//! non-exclusive license under copyrights and patents it now or hereafter
//! owns or controls to make, have made, use, import, offer to sell and sell
//! ("Utilize") this software subject to the terms herein. With respect to the
//! foregoing patent license, such license is granted solely to the extent that
//! any such patent is necessary to Utilize the software alone. The patent
//! license shall not apply to any combinations which include this software,
//! other than combinations with devices manufactured by or for TI 
//! ("TI Devices").
//! No hardware patent is licensed hereunder.
//!
//! Redistributions must preserve existing copyright notices and reproduce this
//! license (including the above copyright notice and the disclaimer and
//! (if applicable) source code license limitations below) in the documentation
//!  and/or other materials provided with the distribution.
//!
//! Redistribution and use in binary form, without modification, are permitted
//! provided that the following conditions are met:
//!
//! * No reverse engineering, decompilation, or disassembly of this software is 
//! permitted with respect to any software provided in binary form.
//! * Any redistribution and use are licensed by TI for use only 
//!   with TI Devices.
//! * Nothing shall obligate TI to provide you with source code for the 
//!   software licensed and provided to you in object code.
//!
//! If software source code is provided to you, modification and redistribution
//! of the source code are permitted provided that the following conditions 
//! are met:
//!
//! * any redistribution and use of the source code, including any resulting
//!   derivative works, are licensed by TI for use only with TI Devices.
//! * any redistribution and use of any object code compiled from the source
//!   code and any resulting derivative works, are licensed by TI for use 
//!   only with TI Devices.
//!
//! Neither the name of Texas Instruments Incorporated nor the names of its
//! suppliers may be used to endorse or promote products derived from this 
//! software without specific prior written permission.
//#############################################################################



//*****************************************************************************
// the includes
//*****************************************************************************
#include "vector.h"
#include <math.h>

//*****************************************************************************
// defines
//*****************************************************************************
DSP_FILENUM(8)

//*****************************************************************************
// VECTOR_meanCV
//*****************************************************************************
complex_t VECTOR_meanCV(const complex_t *x, const uint16_t n)
{
    // Locals
    uint16_t i;
    complex_t m = {(fsize_t)0.0, (fsize_t)0.0};
    fsize_t ONE_O_N = 1/(fsize_t)n;
    
    for(i = 0U; i < n; i++)
    {
        m.r += x[i].r;
        m.i += x[i].i;
#ifdef _DEBUG
        // Debugging message
        printf("i=%4d, x=%10.7f+j%10.7f\n", i, x[i].r, x[i].i);
#endif    
    }
    m.r *= ONE_O_N;
    m.i *= ONE_O_N;
#ifdef _DEBUG
    // Debugging message
    printf("m=%10.7f+j%10.7f\n", m.r, m.i);
#endif  
    return(m);
}

// End of File