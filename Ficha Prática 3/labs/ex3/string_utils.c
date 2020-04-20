#include <stdio.h>
#include <string.h>

int countVogals(int argc, char *argv[]);
int countConsonants(int argc, char *argv[]);

int countVogals(int argc, char *argv[])
{
    int i, j, vowel_counter = 0;

    for(i = 1; i < argc; i++)
    {
        char *arg = argv[i];
        int arg_length = strlen(argv[i]);

        if(strchr(argv[i], 'A') != NULL)
            vowel_counter += 1;

        printf("\n\t%s: %i vogais\n", arg, arg_length);

        vowel_counter = 0;
    }

    return 0;
}