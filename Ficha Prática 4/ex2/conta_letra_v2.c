#include <string.h>
#include <stdio.h>

#include "args.h"

int conta_letra(char *str, char *c)
{
    int max = strlen(str);
    int ocurrence_count = 0;

    for(int i = 0; i < max; i++)
    {
        struct gengetopt_args_info args_info;

        printf("\n\t%s\n", args_info.string_arg);
        printf("\n\t%s\n", args_info.letter_arg);
    }

    return ocurrence_count;
}