#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string_utils.h"

int main(int argc, char *argv[])
{
    if(argc < 2)
        printf("\tNúmero inválido de argumentos\n");

    int vowel_counter = countVogals(argc, argv);

    return 0;
}