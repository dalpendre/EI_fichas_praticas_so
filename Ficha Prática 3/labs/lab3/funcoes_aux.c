#include "funcoes_aux.h"
#include "funcoes.h"
#include <math.h>

float div_e_soma(float dividendo, float divisor)
{
   if (divisor == 0)
     return soma(dividendo, divisor);

   return (dividendo / divisor) + soma(dividendo, divisor);
}

float raiz(float dividendo, float divisor)
{
  float resultado = sqrtf(div_e_soma(dividendo, divisor));

  return resultado;
}