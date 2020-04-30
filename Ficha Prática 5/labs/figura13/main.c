#include <stdio.h>
#include <stdlib.h>
/**
 * allocates a matrix num_rows and num_cols and treats it as
 * a one dimension structure
 */
int main(int argc, char* argv[]) 
{
    if( argc != 3 )
    {
        fprintf(stderr, "expecting two arguments\n");
        fprintf(stderr, "%s <num_rows> <num_cols>\n", argv[0]);
        exit(1);
    }
 
    int num_rows = atoi(argv[1]);
    if( num_rows <= 0 )
    {
        fprintf(stderr, "Expecting a positive number for <num_rows>"
                " (got '%s')\n", argv[1]);
        exit(2);
    }

    int num_cols = atoi(argv[2]);
    if( num_cols <= 0 )
    {
        fprintf(stderr, "Expecting a positive number for <num_cols>"
                " (got '%s')\n", argv[2]);
        exit(3);
    }
 
    /* Allocate the memory */
    size_t mem_len = num_rows * num_cols * sizeof(int);
    int *matrix_ptr = malloc(mem_len);
    if( matrix_ptr == NULL )
    {
        fprintf(stderr, "Can't allocate %zu bytes for %d x %d matrix\n", mem_len, num_rows, num_cols);
        exit(4);
    }
 
    /* Iterate over the matrix */
    int row, col;
    int idx_row_col;
    for(row = 0; row < num_rows; row++)
    {
        for(col = 0; col < num_cols; col++)
        {
            idx_row_col = row * num_cols + col;
            matrix_ptr[idx_row_col] = row;
        }
    }

    /* Show the matrix */
    for(row=0; row < num_rows; row++)
    {
        for(col = 0; col < num_cols; col++)
        {
            idx_row_col = row * num_cols + col;
            printf("[%d][%d]=%d | ", row, col, matrix_ptr[idx_row_col]);
        }

        printf("\n");
    }
 
   return 0;
}