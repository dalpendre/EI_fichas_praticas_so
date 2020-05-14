#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "debug.h"
#include "memory.h"

#define N 10
#define BUF_SIZE 1

ssize_t write_check(int fd, const void *buffer, size_t count, char *filename);

ssize_t write_check(int fd, const void *buffer, size_t count, char *filename)
{
    ssize_t res = write(fd, buffer, count);

    if((size_t) res != count)
    {
        ERROR(1, "Erro a escrever em ficheiro %s\n", filename);
    }
}

int main(int argc, char *argv[])
{
    int res;
    if(argc != 2)
    {
        fprintf(stderr, "expecting 1 argument, got %d\nSyntax: %s filename\n", argc-1, argv[0]);
        exit(1);
    }

    char *filename = argv[1];

    //READ
    int fd = open(filename, O_RDONLY);
    if(fd == -1)
        ERROR(1, "Erro a abrir o ficheiro %s\n", filename);

    char buf[BUF_SIZE];
    ssize_t read_res;

    size_t count = BUF_SIZE;
    
    do
    {
        read_res = read(fd, buf, count);

        if((size_t) read_res != count)
            ERROR(1, "Erro a ler do ficheiro %s", filename);

        printf("bytes lidos: %zd\n", read_res);

        if(read_res > 0)
            write_check(1, buf, read_res, "stdout");
    } while(read_res > 0);

    char *filename = argv[1];
    //FILE *fptr;
    int fd = open("write_file", O_WRONLY | O_CREAT | O_TRUNC /*Apaga ficheiro se o mesmo existir*/, S_IWUSR | S_IRGRP | S_IROTH);

    /*if(fd == -1)
        ERROR(1, "Erro a abrir em ficheiro %s\n", filename);

    int x = 45, y;
    // read devolve
    // -1 -> erro
    // 0 -> chegou ao fim do ficheiro
    // n > 0 -> num bytes lidos do ficheiro
    size_t count = sizeof(int);
    ssize_t read_res = read(fd, &y, count);

    if((size_t) read_res != count)
        ERROR(1, "Erro a ler do ficheiro %s", filename);

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    res = close(fd);
    if(res == -1)
        ERROR(1, "Erro a fechar ficheiro %s\n", filename);*/

    return 0;
}