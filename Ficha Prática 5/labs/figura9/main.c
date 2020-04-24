#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
    char str_estatica[] = "ola mundo";
    char *clone = NULL;

    clone = malloc(strlen(str_estatica) + 1);
    
    if (clone == NULL)
        ERROR(1, "Nao foi possivel alocar a memoria para a string");
    
    strncpy(clone, str_estatica, strlen(str_estatica) + 1);
    printf("Clone=%s\n", clone);
    
    free(clone);
    clone = NULL;
    
    return 0;
}