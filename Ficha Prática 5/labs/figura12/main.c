#include <stdio.h>

int main(int argc, char* argv[]) 
{
    int matrix[10][5];
    int i, j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            matrix[i][j] = i * 5 + j;
            printf("matrix[%d][%d]=%d | ", i, j, matrix[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}