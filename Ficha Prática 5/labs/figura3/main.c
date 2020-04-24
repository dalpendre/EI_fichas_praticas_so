#include <stdio.h>

//Array elements sum using indexes (i)
int main(void)
{
    int n = 5;
    int i, soma = 0;
    int v[] = {1, 2, 3, 4, 5};

    for (i = 0; i < n; i++)
        soma += v[i];

    printf("%i\n", soma);

    return soma;
}