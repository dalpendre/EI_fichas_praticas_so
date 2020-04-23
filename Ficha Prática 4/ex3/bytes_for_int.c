#include <stdio.h>
#include <math.h>

#include "bytes_for_int.h"

int bytes_for_int(unsigned int max_value)
{
    /*for(int n = 1; n <= 4; n++)
    {
        if(max_value <= pow(2, 8*n) - 1)
        {
            return n;
        }
    }

    return 0;*/
    return ceil(log2(max_value+1)/8);
}