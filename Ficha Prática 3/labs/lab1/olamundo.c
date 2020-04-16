#include <stdio.h>

int main(int argc, char *argv[])
{
  /*printf("Olá mundo...\n");
  return 0;*/
  printf("\n\n");
  printf("Número de argumentos: %d\n", argc);

  printf("\n");

  printf("Listagem dos argumentos\n");
  for (int i = 0; i < argc; i++)
  {
    printf("\tArgumento[%d]= %s\n", i, argv[i]);
  }

  printf("\n");
  return 0;
}