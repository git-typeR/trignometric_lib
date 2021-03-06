#ifndef DATA_CONTROL_H
#define DATA_CONTROL_H


extern void write_data(char* file_name, float* psave_data, int data_size);
extern void read_data(char* file_name, float* pread_data, int data_size);
extern void add_data(float* pdst, int pdst_size, float* psrc, int psrc_size);
extern void sub_data(float* pdst, int pdst_size, float* psrc, int psrc_size);
extern void mul_data(float* pdst, int pdst_size, float* psrc, int psrc_size);
extern void div_data(float* pdst, int pdst_size, float* psrc, int psrc_size);



#endif //DATA_CONTROL_H

