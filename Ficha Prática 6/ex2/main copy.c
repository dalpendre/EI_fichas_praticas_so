#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

#include "debug.h"

/*
O_CREAT --> ficheiro não existe, então criar
*/

int main(void)
{
    char *filename = "data.txt";
    int fd = open(filename, O_WRONLY | O_CREAT, S_IWUSR | S_IRGRP | S_IROTH);   //equvalente  a 0644

    if(fd == -1)
    {
        ERROR(1, "Erro a abrir o ficheiro %s\n", filename);
    }

    printf("fd = %d\n", fd);

    int res = close(fd);
    if(res == -1)
    {
        ERROR(1, "Erro a fechar ficheiro %s\n", filename);
    }

    return 0;
}