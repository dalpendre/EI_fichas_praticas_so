#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 4
#define NUM_COLS 3

int main(int argc, char* argv[]) 
{
    int *matrix;
    matrix = malloc(sizeof(int) * (NUM_ROWS*NUM_COLS));

    if(matrix == NULL)
    {
        exit(1);
    }

    for(int i = 0; i < NUM_ROWS; i++)
    {
        for(int j = 0; j < NUM_COLS; j++)
        {
            int k = (i * NUM_COLS) + j;
            matrix[k] = i + j;
            printf("matrix[%d][%d]=%3d | ", i, j, matrix[k]);
        }
        
        printf("\n");
    }

    free(matrix);
    
    return 0;
}