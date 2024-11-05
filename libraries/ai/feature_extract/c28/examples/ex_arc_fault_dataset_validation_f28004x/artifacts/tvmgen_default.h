#ifndef TVMGEN_DEFAULT_H_
#define TVMGEN_DEFAULT_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* The generated model library expects the following inputs/outputs:
 * Inputs:
 *    Tensor[(1, 1, 256, 1), int8]
 * Outputs:
 *    Tensor[(1, 2), int8]
 */

/* Input feature normalization parameters:
 *   input_int = clip(((int32_t)((input_float + bias) * scale)) >> shift, min, max)
 *   where (min, max) = (-128, 127) if int8 type, (0, 255) if uint8 type
 */
  #define TVMGEN_DEFAULT_NUM_CHANNELS 1
  #define TVMGEN_DEFAULT_INPUT_NORMALIZATION_IS_CHANNELWISE 0
  extern const int32_t tvmgen_default_bias_data[] __attribute__((weak)) = {21};
  extern const int32_t tvmgen_default_scale_data[] __attribute__((weak)) = {185};
  extern const int32_t tvmgen_default_shift_data[] __attribute__((weak)) = {7};


/*!
 * \brief Input tensor pointers for TVM module "default" 
 */
struct tvmgen_default_inputs {
  void* onnx__Add_0;
};

/*!
 * \brief Output tensor pointers for TVM module "default" 
 */
struct tvmgen_default_outputs {
  void* output;
};

/*!
 * \brief entrypoint function for TVM module "default"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_default_run(
  struct tvmgen_default_inputs* inputs,
  struct tvmgen_default_outputs* outputs
);

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_DEFAULT_H_
