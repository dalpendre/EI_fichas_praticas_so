#include <stdio.h>
#include <stdlib.h>

#include "debug.h"
#include "memory.h"

//Allocates dynamic matrix using argv
float **matrix_new(int num_rows, int num_cols)
{
    //Allocate the memory
    size_t mem_len = num_rows * num_cols * sizeof(int);
    float **matrix_ptr = MALLOC(mem_len);

    size_t vect_len = sizeof(float*) * num_rows;
    float **matrix_vect_ptr = MALLOC(vect_len);

    if(matrix_ptr == NULL || matrix_vect_ptr == NULL)
    {
        exit(1);
    }

    for(int row = 0; row < num_rows; row++)
    {
        matrix_vect_ptr[row] = &(matrix_ptr[row*num_cols]);
    }

    return matrix_vect_ptr;
}

void matrix_delete(float **matrix_vect_ptr)
{
    FREE(*matrix_vect_ptr);
    FREE(matrix_vect_ptr);        
}

void matrix_print(float **matrix, int num_rows, int num_cols)
{
    for(int row = 0; row < num_rows; row++)
    {
        for(int col = 0; col < num_cols; col++)
        {
            printf("%.2f ", matrix[row][col]);
        }
        putchar('\n');
    }
}

void matrix_fill(float **matrix, int num_rows, int num_cols, float value)
{
    for(int row = 0; row < num_rows; row++)
    {
        for(int col = 0; col < num_cols; col++)
        {
            matrix[row][col] = value;
        }
    }
}

void **matrix_mul(float **matrixA, float **matrixB, int a_row, int b_col, int a_col)
{
    float **matrixRes = matrix_new(a_row, a_col);

    float aux = 0;
    for(int row = 0; row < a_row; row++)
    {
        for(int col = 0; col < a_col; col++)
        {
            for(int j = 0; j < a_col; j++)
            {
                aux += matrixA[row][j] * matrixB[j][col];
            }

            matrixRes[row][col] = aux;
        }
    }

    return matrixRes;
}