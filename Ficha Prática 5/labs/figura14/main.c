#include <stdio.h>
#include <stdlib.h>

//Allocates a matrix num_rows and num_cols and treats it as a two dimension structure
int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        fprintf(stderr, "expecting two arguments\n");
        fprintf(stderr, "%s <num_rows> <num_cols>\n", argv[0]);
        exit(1);
    }

    int num_rows = atoi(argv[1]);
    if(num_rows <= 0)
    {
        fprintf(stderr, "Expecting a positive number for <num_rows> (got '%s'\n", argv[1]);
        exit(2);
    }

    int num_cols = atoi(argv[2]);
    if(num_rows <= 0)
    {
        fprintf(stderr, "Expecting a positive number for <num_rows> (got '%s'\n", argv[1]);
        exit(3);
    }

    //Allocate the memory
    size_t mem_len =  num_rows * num_cols * sizeof(int);
    int *matrix_ptr = malloc(mem_len);

    if(matrix_ptr == NULL)
    {
        fprintf(stderr, "Can't allocate %zu bytes for %d x %d matrix\n", mem_len, num_rows, num_cols);
        exit(4);
    }

    //Alocate the memory for the auxiliary vector of pointers
    size_t vect_len = sizeof(int *) * num_rows;
    int **matrix_vect_ptr = (int**) malloc(vect_len);

    /*Dúvida nas linhas acima ver na aula de 30 abril*/

    if(matrix_vect_ptr == NULL)
    {
        fprintf(stderr, "Can't allocate %zu bytes for %d vector\n", mem_len, num_rows);
        exit(5);
    }

    int row, col;
    
    //Create the connection from the vector to the main block
    for(row = 0; row < num_rows; row++)
    {
        matrix_vect_ptr[row] = &(matrix_vect_ptr[row*num_cols]);
    }

    //Iterate over the matrix, with the [row] [col] notation
    for(row = 0; row < num_cols; row++)
    {
        for(col = 0; col < num_cols; col++)
        {
            matrix_vect_ptr[row][col] = row * num_cols + col;
        }
    }

    //Show the matrix
    for(row = 0; row < num_cols; row++)
    {
        for(col = 0; col < num_cols; col++)
        {
            printf("[%d][%d]=%d | ", row, col, matrix_vect_ptr[row][col]);
        }

        printf("\n");
    }

    free(matrix_vect_ptr);
    free(matrix_ptr);

    return 0;
}