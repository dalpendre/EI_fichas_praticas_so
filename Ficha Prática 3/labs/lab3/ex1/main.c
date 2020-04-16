#include <stdio.h>
#include <string.h>

#define NUM_PALAVRAS 3

int main(int argc, char *argv[])
{
    char *palavras[NUM_PALAVRAS] = {"big", "tall", "high"};
    char *palavras_contrarias[NUM_PALAVRAS] = {"small", "short", "low"};

    if(argc != 2)
    {
        printf("\n\tnumero de parametros errado!\n");
        return 1;   //Devolve erro!
    }

    char *palavra = argv[1];
    printf("\n\tstring parâmetro: %s\n", palavra);

    for(int i = 0; i < NUM_PALAVRAS; i++)
    {
        if(strcmp(palavra, palavras[i]) == 0)
        {
            printf("\n\t%s\n", palavras_contrarias[i]);
            return 0;
        }

        if(strcmp(palavra, palavras_contrarias[i]) == 0)
        {
            printf("\n\t%s\n", palavras[i]);
            return 0;
        }        
    }

   printf("\n\tword not found!\n");
   return 1;
}

