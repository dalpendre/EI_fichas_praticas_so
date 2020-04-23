#include <stdio.h>

typedef struct nota
{
    float teorica;
    float pratica;
} NOTA_T;

int main(void)
{
    NOTA_T nota_so;
    NOTA_T *ptr = NULL;

    ptr = &nota_so;
    nota_so.teorica = 10;
    ptr->pratica = 15; //o mesmo que: (*ptr).pratica = 15;

    printf("Teorica: %.3f\n", ptr->teorica);
    printf("Teorica: %.3f\n", ptr->pratica);

    return 0;
}
