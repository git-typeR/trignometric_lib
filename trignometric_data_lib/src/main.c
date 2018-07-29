/**
* \brief 
* \author Ryota Nakao
* \version 1.0.0
* \date 2018-
* \warning As this program is being developed, the specification may change.
*/

/**********************************************************************//**
*                         INCLUDE
**************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include "trigonometric_func_curve.h"
#include "noise_gen.h"
#include "data_control.h"
#include "waveform_lib.h"

/**********************************************************************//**
*                         MACRO
**************************************************************************/
#define MAX_FREQ_INDEX 10
 
/**********************************************************************//**
*                         GLOBAL VARIABLE
**************************************************************************/

/**********************************************************************//**
*                         STATIC VARIABLE
**************************************************************************/

/**********************************************************************//**
*                         PROTOTYPE
**************************************************************************/

/**********************************************************************//**
*                         MAIN
**************************************************************************/

int main(void)
{
    int i                   = 0;
//    int freq_index          = 0;
    int noise_range         = 10000;    
    int noise_data[MAX_LEN] = {0};
    float amplitude         = 1.0;
    float wave_freq         = 1.0;
    float sampling_freq     = 100.0;
    float start_freq        = 1.0;
    float end_freq          = 3.0;
    float freq_width        = 1.0;
    float fnoise_data[MAX_LEN]   = {0};
    TRIGNOMETRIC_T sin_data;


    sin_data.amp  = amplitude;
    sin_data.freq = wave_freq;
    sin_data.smpl_freq = sampling_freq;
    sin_data.data_size = MAX_LEN;

    //create trignometric data set
    trignometric_data_set_create(&sin_data);
    
    // create additive sin curve with different frequency
    mixed_sin_curve_create(&sin_data, start_freq, end_freq, freq_width);


    for (i = 0; i < 10; i++) {
        printf("%f\n", sin_data.data[i]);
    }
    

    rand_noise_create(noise_data, sin_data.data_size, noise_range);

    for (i = 0; i < MAX_LEN; i++) {
        fnoise_data[i] = noise_data[i] / 1000000000;
    }
    
    add_data(sin_data.data, sin_data.data_size, fnoise_data, MAX_LEN);    

    for (i = 0; i < 10; i++) {
//        printf("%f\n", sum_wave_data[i]);
        printf("%f\n", sin_data.data[i]);
      }

//    write_data(sum_wave_data, MAX_LEN);
    write_data(sin_data.data, sin_data.data_size);

    curve_clear(&sin_data);  
    
    return (0);
}

