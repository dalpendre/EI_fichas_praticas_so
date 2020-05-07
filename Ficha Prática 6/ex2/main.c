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
od --> shows file content in octal and other formats

O_CREAT --> ficheiro não existe, então criar
O_TRUNC --> se já existe, apaga
read
write
*/

#define N 5

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        ERROR(1, "expecting 1 argument , got %d\nSysntax: %s filename", argc-1, argv[0]);
        exit(1);
    }

    char *filename = argv[1];
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR | S_IRGRP | S_IROTH);   //equivalente a 0644

    if(fd == -1)
    {
        ERROR(1, "Erro a abrir ficheiro %s\n", filename);
    }

    /*int v[N] = {1,2,3,4,5};
    size_t count = N * sizeof(int);
    ssize_t res = write(fd, v, count);
    int res = write(fd, v, count);*/

    char *s = "Ola mundo\n";
    size_t count = strlen(s);
    ssize_t res = write(fd, s, count);

    if((size_t) res != count)
    {
        ERROR(1, "Erro a escrever o ficheiro %s\n", filename);
    }

    res = close(fd);
    if(res == -1)
    {
        ERROR(1, "Erro a fechar ficheiro %s\n", filename);
    }

    return 0;
}