#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *str2 = "Goodbye";

    printf("%p %p %s\n", (void*)&str2, (void*)str2, str2);
}