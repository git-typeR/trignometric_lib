/**
 * @brief 
 * 
 * @file data_control.c
 * @author typeR
 * @date 2018-07-29
 */

#include "data_control.h"
#include <stdio.h>
#include <string.h>
#include <math.h>


/**********************************************************************//**
 * @brief write_data - 
 * @fn    void write_data(char* file_name, float* psave_data, int data_size)
 * @param[in] psave_data
 * @param[in] data_size
 * @param[out] psave_data
 * @details
 * @return none
**************************************************************************/
void write_data(char* file_name, float* psave_data, int data_size)
{

    int   num;

    FILE* fpOutput = (FILE*)NULL;

    if ((fpOutput = fopen(file_name, "w")) == (FILE*) NULL){
        fprintf(stderr, "Can't open OUTPUT_FILENAME\n");
//        return (-1);
    }
       

    for (num = 0; num < data_size; num++) {
        fprintf(fpOutput, "%f,\n", psave_data[num]);
    }
    
    if (fpOutput){
        fclose(fpOutput);
    }


}

/**********************************************************************//**
 * @brief read_data - 
 * @fn    void read_data(char* file_name, float* pread_data, int data_size)
 * @param[in] psave_data
 * @param[in] data_size
 * @param[out] psave_data
 * @details
 * @return none
**************************************************************************/
void read_data(char* file_name, float* pread_data, int data_size)
{

    int i = 0;
#ifdef SUPPORT_DEBUG
    int num = 0;
#endif //SUPPORT_DEBUG
    float* input_data_buf = {0};
    
    FILE* fpInput = (FILE*)NULL;

    if ((fpInput = fopen(file_name, "r")) == (FILE*) NULL){
        fprintf(stderr, "Can't open OUTPUT_FILENAME\n");
//        return (-1);
    }
    
    while ((fscanf(fpInput, "%f", &input_data_buf[i])) != EOF) {
        i++;
    }
    
    memcpy(pread_data, input_data_buf, data_size * sizeof(pread_data));

#ifdef SUPPORT_DEBUG    
    for (num = 0; num < data_size; num++) {
        printf("%f\n",pread_data[num]);
    }
#endif //SUPPORT_DEBUG

    if (fpInput){
        fclose(fpInput);
    }


}



/**********************************************************************//**
 * @brief add_data - 
 * @fn    void add_data(float* pdst, int pdst_size, float* psrc, int psrc_size)
 * @param[in] pdst
 * @param[in] pdst_size 
 * @param[in] psrc_size
 * @param[in] psrc_size
 * @param[out] pdst
 * @details
 * @return none
**************************************************************************/
void add_data(float* pdst, int pdst_size, float* psrc, int psrc_size)
{
    int i;
    int max_index;
    
    max_index =(int)fminf((float)pdst_size, (float)psrc_size);

    for (i = 0; i < max_index; i++){
        pdst[i] += psrc[i];
    }
}

/**********************************************************************//**
 * @brief sub_data - 
 * @fn    void sub_data(float* pdst, int pdst_size, float* psrc, int psrc_size)
 * @param[in] pdst
 * @param[in] pdst_size 
 * @param[in] psrc_size
 * @param[in] psrc_size
 * @param[out] pdst
 * @details
 * @return none
**************************************************************************/
void sub_data(float* pdst, int pdst_size, float* psrc, int psrc_size)
{
    int i;
    int max_index;
    
    max_index =(int)fminf((float)pdst_size, (float)psrc_size);

    for (i = 0; i < max_index; i++){
        pdst[i] -= psrc[i];
    } 
}

/**********************************************************************//**
 * @brief mul_data - 
 * @fn    void mul_data(float* pdst, int pdst_size, float* psrc, int psrc_size)
 * @param[in] pdst
 * @param[in] pdst_size 
 * @param[in] psrc_size
 * @param[in] psrc_size
 * @param[out] pdst
 * @details
 * @return none
**************************************************************************/
void mul_data(float* pdst, int pdst_size, float* psrc, int psrc_size)
{
    int i;
    int max_index;
    
    max_index =(int)fminf((float)pdst_size, (float)psrc_size);

    for (i = 0; i < max_index; i++){
        pdst[i] *= psrc[i];
    } 
}

/**********************************************************************//**
 * @brief div_data - 
 * @fn    void div_data(float* pdst, int pdst_size, float* psrc, int psrc_size)
 * @param[in] pdst
 * @param[in] pdst_size 
 * @param[in] psrc_size
 * @param[in] psrc_size
 * @param[out] pdst
 * @details
 * @return none
**************************************************************************/
void div_data(float* pdst, int pdst_size, float* psrc, int psrc_size)
{
    int i;
    int max_index;
    
    max_index =(int)fminf((float)pdst_size, (float)psrc_size);

    for (i = 0; i < max_index; i++){
        pdst[i] /= psrc[i];
    } 
}

