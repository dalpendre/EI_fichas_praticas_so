#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "conta_letra.h"

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        fprintf(stderr, "Error: 2 arguments expected!\n");
        return 1;
    }

    char *text = argv[1];
    char *letterString = argv[2];

    if(strlen(letterString) != 1)
    {
        fprintf(stderr, "Error: second argument should be letter!\n");
        return 1;
    }

    char letter = letterString[0];

    int count = conta_letra(text, letter);
    printf("Letter '%c' occurs %d times in the text!\n", letter, count);

    return 0;
}