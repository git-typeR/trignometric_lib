#include "trigonometric_func_curve.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.1415926
#endif  //M_PI

/**
 * @brief     trignometric function curve
 * @author    Type R
 * @version   1.0.0
 * @copyright Type R
 * @date      2018/06/25 new
 */
/** @file */

/**********************************************************************//**
 * @brief trignometric_data_set_create - 
 * @fn    void trignometric_data_set_create(TRIGNOMETRIC_T* trignometric)
 * @param[in] trignometric
 * @param[out] trignometric
 * @details
 * @return none
**************************************************************************/
void trignometric_data_set_create(TRIGNOMETRIC_T* trignometric)
{
    trignometric->data = (float*)malloc((trignometric->data_size + 1) * sizeof(float));
    
}

/**********************************************************************//**
 * @brief sin_curve_create - 
 * @fn    void sin_curve_create(TRIGNOMETRIC_T* trignometric)
 * @param[in] trignometric
 * @param[out] trignometric
 * @details
 * @return none
**************************************************************************/
void sin_curve_create(TRIGNOMETRIC_T* trignometric)
{
    int index;
    float smple_period = 1/trignometric->smpl_freq;
    for (index = 0; index < trignometric->data_size; index++) {
        trignometric->data[index] = trignometric->amp * sin(2 * M_PI * trignometric->freq * smple_period * index);

    }
}

/**********************************************************************//**
 * @brief cos_curve_create - 
 * @fn    void cos_curve_create(TRIGNOMETRIC_T* trignometric)
 * @param[in] trignometric
 * @param[out] trignometric
 * @details
 * @return none
**************************************************************************/
void cos_curve_create(TRIGNOMETRIC_T* trignometric)
{
    int index;
    float smple_period = 1/trignometric->smpl_freq;
    for (index = 0; index < trignometric->data_size; index++) {
        trignometric->data[index] = trignometric->amp * cos(2 * M_PI * trignometric->freq * smple_period * index);
//        printf("%f\n", pdata[index]);
    }
}

/**********************************************************************//**
 * @brief tan_curve_create - 
 * @fn    void tan_curve_create(TRIGNOMETRIC_T* trignometric)
 * @param[in] trignometric
 * @param[out] trignometric
 * @details
 * @return none
**************************************************************************/
void tan_curve_create(TRIGNOMETRIC_T* trignometric)
{
    int index;
    float smple_period = 1/trignometric->smpl_freq;
    for (index = 0; index < trignometric->data_size; index++) {
        trignometric->data[index] = trignometric->amp * tan(2 * M_PI * trignometric->freq * smple_period * index);
//        printf("%f\n", pdata[index]);
    }
}

void curve_clear(TRIGNOMETRIC_T* trigometric)
{
    free(trigometric->data);
}
