#include <string.h>

#include "conta_letra.h"

int conta_letra(char *str, char c)
{
    int max = strlen(str);
    int count = 0;

    for(int i = 0; i < max; i++)
    {
        if(str[i] == c)
            count++;
    }

    return count;
}