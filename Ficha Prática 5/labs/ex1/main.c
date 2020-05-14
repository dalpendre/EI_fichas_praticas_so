#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"
#include "memory.h"

#define NUM_ARGS 4

#define ERR_ARGS 1
#define ERR_ALOC 2

int main(int argc, char *argv[])
{
    if(argc != NUM_ARGS + 1)
    {
        fprintf(stderr, "The program receives 4 arguments\n");
        fprintf(stderr, "matrix a_row a_col b_row b_col\n");
    }

    int a_row = atoi(argv[1]);
    int a_col = atoi(argv[2]);
    int b_row = atoi(argv[3]);
    int b_col = atoi(argv[4]);

    float **matrixA = matrix_new(a_row, a_col);
    float **matrixB = matrix_new(a_row, a_col);

    matrix_fill(matrixA, a_row, a_col, 2.0f);
    matrix_fill(matrixB, a_row, a_col, 2.0f);

    matrix_print(matrixA, a_row, a_col);
    matrix_print(matrixB, b_row, b_col);

    float **matrixC = matrix_mul(matrixA, matrixB, a_row, b_col, a_col);
    matrix_print(matrixC, a_row, b_col);
}