#include <stdio.h>
#define N 5

int main(void)
{
    int i, soma = 0, *ptr;
    int v[N] = {1,2,3,4,5};

    ptr = v;

    for (i = 0; i < N; i++) 
    {
        soma += *ptr;
        ptr++;
    }

    printf("%i\n", soma);

    return soma;
}