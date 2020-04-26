#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "debug.h"

int main(void)
{
    char *nome = "Diogo";
    char *clone = NULL;

    clone = malloc(strlen(nome) + 1);

    if(clone == NULL)
        ERROR(1, "Não foipossível alocar a memória para a string\n");

    strncpy(clone, nome, strlen(nome) + 1);
    printf("Clone=%s\n", clone);
    
    free(clone);
    clone = NULL;

    return 0;
}