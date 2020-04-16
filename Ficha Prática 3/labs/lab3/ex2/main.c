#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    unsigned int contador_vogais = 0;

    if(argc < 2)
        printf("\n\tNúmero inválido de argumentos\n");

    for(int i = 1; i < argc; i++)
    {
        if(strchr(argv[i], 'A') != NULL)
            contador_vogais += 1;

        if(strchr(argv[i], 'a') != NULL)
            contador_vogais += 1;
        
        if(strchr(argv[i], 'E') != NULL)
            contador_vogais += 1;

        if(strchr(argv[i], 'e') != NULL)
            contador_vogais += 1;

        if(strchr(argv[i], 'I') != NULL)
            contador_vogais += 1;

        if(strchr(argv[i], 'i') != NULL)
            contador_vogais += 1;

        if(strchr(argv[i], 'O') != NULL)
            contador_vogais += 1;

        if(strchr(argv[i], 'o') != NULL)
            contador_vogais += 1;

        if(strchr(argv[i], 'U') != NULL)
            contador_vogais += 1;

        if(strchr(argv[i], 'u') != NULL)
            contador_vogais += 1;

        printf("\n\t%s: %i vogais\n", argv[i], contador_vogais);

        contador_vogais = 0;
    }

    return 0;
}