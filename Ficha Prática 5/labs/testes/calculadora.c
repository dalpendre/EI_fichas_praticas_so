#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calculadora.h"

double soma(double x, double y)
{
    double resultado = x + y;

    return resultado; 
}

double subtracao(double x, double y)
{
    double resultado = x - y;

    return resultado;
}

double multiplicacao(double x, double y)
{
    double resultado = x * y;

    return resultado;
}

double divisao(double x, double y)
{
    double resultado = x / y;

    return resultado;
}

double potencia(double x, double y)
{
    double resultado = pow(x, y);

    return resultado;
}