#ifndef EX_2LAYER_H_
#define EX_2LAYER_H_

#include <complex>
#include "ap_int.h"
#include "ap_fixed.h"

typedef ap_fixed<32,10> accum_t;
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<16,6> coeff_t;
typedef ap_fixed<16,6> bias_t;
typedef ap_fixed<16,8> layer1_t;
typedef ap_fixed<16,8> result_t;

//typedef float accum_t;
//typedef float input_t;
//typedef float coeff_t;
//typedef float bias_t;
//typedef float layer1_t;
//typedef float result_t;

#define N_LAYER_IN      784
#define N_LAYER1        256
#define N_LAYER_OUT     10


// Prototype of top level function for C-synthesis
void ex_2layer(
      input_t   data[N_LAYER_IN],
      coeff_t   weights1[N_LAYER_IN][N_LAYER1],
      bias_t    biases1[N_LAYER1],
      coeff_t   weights2[N_LAYER1][N_LAYER_OUT],
      bias_t    biases2[N_LAYER_OUT],
      result_t  res[N_LAYER_OUT]);

#endif