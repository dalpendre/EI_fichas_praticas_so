#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int n = 0, *vetor = NULL, i;
    
    printf("Indique o número de elementos pretendido?");
    scanf("%d", &n);
    
    if (n <= 0)
    {
        return 1;
    }

    vetor = malloc(sizeof(int)*n);
    if (vetor == NULL) 
    {
        ERROR(1, "malloc() failed");
    }

    for (i = 0; i < n; i++)
    {
        vetor[i] = 0;
    }

    /* código que use o vetor */
    free(vetor);
    vetor = NULL;

    return 0;
}