#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculadora.c"

typedef struct alunos
{
    int id;
} Aluno;

int main(void)
{
    double num1, num2 = 0;

    printf("\n\tNúmero 1: ");
    fscanf(stdin, "%lf", &num1);

    printf("\n\tNúmero 2: ");
    fscanf(stdin, "%lf", &num2);

    printf("\n\tSoma: %.2lf + %.2lf = %.2lf\n", num1, num2, soma(num1, num2));
    printf("\n\tSubtração: %.2lf - %.2lf = %.2lf\n", num1, num2, subtracao(num1, num2));
    printf("\n\tMultiplicação: %.2lf * %.2lf = %.2lf\n", num1, num2, multiplicacao(num1, num2));
    printf("\n\tDivisao: %.2lf / %.2lf = %.2lf\n", num1, num2, divisao(num1, num2));
    printf("\n\tPotencia de base %.2lf e expoente %.2lf = %.2lf\n", num1, num2, potencia(num1, num2));

    Aluno alunos[5];

    for(int i = 0; i < 5; i++)
    {
        alunos[i].id = 10;
    }
}