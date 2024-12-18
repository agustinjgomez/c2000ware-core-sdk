//#############################################################################
//
//! \file   dsp_abs_DP_CV.c
//!
//! \brief  Finds the magnitude of each entry of a complex vector
//! \author Vishal Coelho
//! \date   Jul 20, 2016
//
//  Group:          C2000
//  Target Device:  TMS320f2838x
//
// The input and golden files were obtained by running the MATLAB script, 
// FPU_DSP_runVectorRoutines.m (under reference/MATLAB), at the MATLAB command 
// line as follows
// "
//   FPU_DSP_runVectorRoutines('absCV', 64, 'TYPE_DOUBLE', 'FTYPE_C');
// "
// Please note that this script generates the input data using random values 
// ranging from -pi to pi so it may not be possible to generate the exact 
// same set of inputs and outputs given in this example.
//
//#############################################################################
//
//
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
//#############################################################################


//*****************************************************************************
// the includes
//*****************************************************************************
#include "fpu.h"
#include "dsp.h"
#include "dsp_examples_setup.h"
#include "fpu64/vector.h"
#include <string.h>

//*****************************************************************************
// the defines
//*****************************************************************************
#define TEST_SIZE       (64U)

//*****************************************************************************
// the globals
//*****************************************************************************
// The global pass, fail values
uint16_t pass = 0U, fail = 0U;
// The absolute error between the result and expected values
float64_t tolerance = 1.0e-10;
float64_t test_output[TEST_SIZE];
float64_t test_error[TEST_SIZE];
//*****************************************************************************
// the function definitions
//*****************************************************************************
void DSP_runTest(void)
{
    // Locals
	uint16_t i;
    float64u_t out, gold, errld;


    //Clear out the output and error arrays
    memset(test_output, 0U, TEST_SIZE*sizeof(float64_t));
    memset(test_error, 0U, TEST_SIZE*sizeof(float64_t));

    // Call the calculation routine
    abs_DP_CV(test_output, (const complexf64_t *)test_input, TEST_SIZE);

    for(i = 0U; i < TEST_SIZE; i++)
    {
        out.f64  = test_output[i];
        gold.f64 = test_golden[i];

        // Calculation of error and comparison with tolerance
                errld.f64 = fabsf(out.f64 - gold.f64);
                       if(errld.f64 < tolerance)
                               {
                                   pass++;
                               }
                               else
                               {
                                   fail++;
                               }
                test_error[i] = errld.f64;
      }


    //Clear out the output and error arrays
    memset(test_output, 0U, TEST_SIZE*sizeof(float64_t));
    memset(test_error, 0U, TEST_SIZE*sizeof(float64_t));

    // Call the more efficient calculation routine for even sized inputs
    abs_DP_CV_2(test_output, (const complexf64_t *)test_input, TEST_SIZE);

    for(i = 0U; i < TEST_SIZE; i++)
    {
    	out.f64  = test_output[i];
    	gold.f64 = test_golden[i];

    	// Calculation of error and comparison with tolerance
    	        errld.f64 = fabsf(out.f64 - gold.f64);
    	               if(errld.f64 < tolerance)
    	                       {
    	                           pass++;
    	                       }
    	                       else
    	                       {
    	                           fail++;
    	                       }
    	        test_error[i] = errld.f64;
      }

}

// End of File
