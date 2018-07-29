#include "noise_gen.h"
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


/**********************************************************************//**
 * @brief rand_noise_create - 
 * @fn    void rand_noise_create(int* pdata, int size, int range)
 * @param[in] pdata
 * @param[in] size
 * @param[in] range
 * @param[out] pdata
 * @details
 * @return none
**************************************************************************/
void rand_noise_create(int* pdata, int size, int range)
{
    int i;
    
    // create the sead from the current time    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < size; i++) {
        pdata[i] = (int)pow(-1,i) * (rand() / (range + 1)) * range;
    }
}    

