#include <stdio.h>
#include <stdlib.h>

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
        fprintf(stderr, "Expecting a positive number for <num_rows> (got '%s')\n", argv[1]);
        exit(2);
    }

    int num_cols = atoi(argv[2]);

    if(num_cols <= 0)
    {
        fprintf(stderr, "Expecting a positive number for <num_cols> (got '%s')\n", argv[2]);
        exit(2);
    }

    //Alocates the memory
    size_t mem_len = num_rows * num_rows * sizeof(int);

    int *matrix_ptr = malloc(mem_len);
    if(matrix_ptr == NULL)
    {
        fprintf(stderr, "Can't allocate %zu bytes for %d x %d matrix\n");
    }
}