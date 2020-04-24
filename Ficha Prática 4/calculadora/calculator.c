#include <string.h>
#include <stdio.h>

#include "args.h"

float sum(float *x, float *y)
{
    float *result = *x + *y;

    return *result;
}

float subtract(float x, float y)
{
    float result = x - y;

    return result;
}

