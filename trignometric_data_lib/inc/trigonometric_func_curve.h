#ifndef TRIGOMTRC_FUNC_CURVE_H
#define TRIGOMTRC_FUNC_CURVE_H


#define MAX_LEN 1000

typedef struct {
    float* data;
    int   data_size;
    float amp;
    float freq;
    float smpl_freq;
} TRIGNOMETRIC_T;


extern void trignometric_data_set_create(TRIGNOMETRIC_T* trignometric);
extern void sin_curve_create(TRIGNOMETRIC_T* trignometric);
extern void cos_curve_create(TRIGNOMETRIC_T* trignometric);
extern void tan_curve_create(TRIGNOMETRIC_T* trignometric);
extern void curve_clear(TRIGNOMETRIC_T* trigometric);
#if 0
extern void asin_curve_create(float *pdata, int size, float freq, float sample_freq);
extern void acos_curve_create(float *pdata, int size, float freq, float sample_freq);
extern void atan_curve_create(float *pdata, int size, float freq, float sample_freq);
#endif


#endif //TRIGOMTRC_FUNC_CURVE_H
