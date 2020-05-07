#ifndef MATRIX_H_
#define MATRIX_H_

int matrix_new(int num_rows, int num_cols);
void matrix_delete(float **matrix_vect_ptr);
void matrix_print(float **matrix, int num_rows, int num_cols);
void matrix_fill(float **matrix, int num_rows, int num_cols, float value);
void **matrix_mul(float **matrixA, float **matrixB, int a_row, int b_col, int a_col);

#endif