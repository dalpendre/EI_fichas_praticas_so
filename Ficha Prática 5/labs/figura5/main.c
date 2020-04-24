#include <stdio.h>
#include <string.h>

int main(void) 
{
    char s1[] = "Ola", s2[] = "Ola";

    //Strings have different addresses (so == is not valid to validate if strings are equal)
    if (s1 == s2)
        printf("ponteiros apontam para o mesmo sitio\n");
    else
        printf("Ponteiros diferentes\n");
        
    if (strcmp(s1, s2) == 0)
        printf("As strings sao iguais\n");

    return 0;
}