#include "trigonometric_func_curve.h"
#include "waveform_lib.h"
#include "data_control.h"

#include <stdio.h>

/**********************************************************************//**
 * @brief mixed_sin_curve_create - 
 * @fn    void mixed_sin_curve_create(TRIGNOMETRIC_T* trignometric, float start_freq, float end_freq, float freq_width)
 * @param[in] trignometric
 * @param[in] start_freq
 * @param[in] end_freq
 * @param[in] freq_width
 * @param[out] trignometric
 * @details
 * @return none
**************************************************************************/
void mixed_sin_curve_create(TRIGNOMETRIC_T* trignometric, float start_freq, float end_freq, float freq_width)
{
    float freq_index;

    for (freq_index = start_freq; freq_index <= end_freq; freq_index += freq_width) {
        trignometric->freq = trignometric->freq * freq_index;
        sin_curve_create(trignometric);
        add_data(trignometric->data, trignometric->data_size, trignometric->data, trignometric->data_size);
    }
}



/**********************************************************************//**
 * @brief mixed_cos_curve_create - 
 * @fn    void mixed_cos_curve_create(TRIGNOMETRIC_T* trignometric, float start_freq, float end_freq, float freq_width)
 * @param[in] trignometric
 * @param[in] start_freq
 * @param[in] end_freq
 * @param[in] freq_width
 * @param[out] trignometric
 * @details
 * @return none
**************************************************************************/
void mixed_cos_curve_create(TRIGNOMETRIC_T* trignometric, float start_freq, float end_freq, float freq_width)
{
    float freq_index;

    for (freq_index = start_freq; freq_index <= end_freq; freq_index += freq_width) {
        trignometric->freq = trignometric->freq * freq_index;
        cos_curve_create(trignometric);
        add_data(trignometric->data, trignometric->data_size, trignometric->data, trignometric->data_size);
    }
}


/**********************************************************************//**
 * @brief mixed_tan_curve_create - 
 * @fn    void mixed_tan_curve_create(TRIGNOMETRIC_T* trignometric, float start_freq, float end_freq, float freq_width)
 * @param[in] trignometric
 * @param[in] start_freq
 * @param[in] end_freq
 * @param[in] freq_width
 * @param[out] trignometric
 * @details
 * @return none
**************************************************************************/
void mixed_tan_curve_create(TRIGNOMETRIC_T* trignometric, float start_freq, float end_freq, float freq_width)
{
    float freq_index;

    for (freq_index = start_freq; freq_index <= end_freq; freq_index += freq_width) {
        trignometric->freq = trignometric->freq * freq_index;
        tan_curve_create(trignometric);
        add_data(trignometric->data, trignometric->data_size, trignometric->data, trignometric->data_size);
    }
}

