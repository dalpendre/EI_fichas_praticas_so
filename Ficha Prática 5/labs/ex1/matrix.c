#include <stdio.h>
#include <stdlib.h>

//Allocates dynamic matrix using argv
int matrix_new(int argc, char *argv[])
{
    if(argc != 3)
    {
        fprintf(stderr, "Expecting 3 arguments\n");
        fprintf(stderr, "%s <num_rows> <num_cols>\n", argv[0]);
        exit(1);
    }

    int num_rows = atoi(argv[1]);
    if( num_rows <= 0 )
    {
        fprintf(stderr, "Expecting a positive number for <num_rows>" "(got '%s')\n", argv[1]);
        exit(2);
    }

    int num_cols = atoi(argv[2]);
    if( num_cols <= 0 )
    {
        fprintf(stderr, "Expecting a positive number for <num_cols>" "(got '%s')\n", argv[2]);
        exit(3);
    }

    //Allocate the memory
    size_t mem_len = num_rows * num_cols * sizeof(int);
    int *matrix_ptr = malloc(mem_len);

    if(matrix_ptr == NULL)
    {
        fprintf(stderr, "Can't allocate %zu bytes for %d x %d matrix\n", mem_len, num_rows, num_cols);
        exit(4);
    }

    //Allocate the memory for the auxiliary pointers array
    size_t vect_len = sizeof(int*) * num_rows;
    int **matrix_vect_ptr = (int**) malloc(vect_len);

    if(matrix_vect_ptr == NULL)
    {
        fprintf(stderr, "Can't allocate %zu bytes for %d array\n", mem_len, num_rows);
        exit(5);
    }

    int row, col;

    for(row = 0; row < num_rows; row++)
    {
        matrix_vect_ptr[row] = &(matrix_ptr[row*num_cols]);
    }

    return 0;
}

//Fills matrix with value
int matrix_fill(int x)
{

}

//Prints to stdout the values of the matrix
matrix_print()
{

}

//Multiplies 2 matrixes passed by parameter
matrix_mul()
{
    
}