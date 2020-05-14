#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "debug.h"
#include "memory.h"

#define N 10

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
    FILE *fptr;
    int fd = open("write_file", O_WRONLY | O_CREAT | O_TRUNC /*Apaga ficheiro se o mesmo existir*/, S_IWUSR | S_IRGRP | S_IROTH);
    //Ex4 - int fd = open("write_file", O_WRONLY | O_CREAT | O_APPEND, S_IWUSR | S_IRGRP | S_IROTH);

    if(fd == -1)
        ERROR(1, "Erro a abrir em ficheiro %s\n", filename);

    /*char *ola = "ola mundo\n";
    write_check(fd, ola, strlen(ola), filename);    Ex4
*/
    int v[N];

    for(int i = 1; i <= N; i++)
    {
        v[i-1] = i;
    }

    write_check(fd, v, sizeof(v), filename);

    char numero_string[4];

    for(int i = 1; i <= N; i++)
    {
        snprintf(numero_string, sizeof(char), "%d\n", i);   // numero 1 -> string "10\n"
        write_check(fd, numero_string, strlen(numero_string), filename);
    }

    /*for(int i = 1; i <= 10; i++)
    {
        write_check(fd, &i, sizeof(i), filename);
    }*/

    res = close(fd);
    if(res == -1)
        ERROR(1, "Erro a fechar ficheiro %s\n", filename);

    return 0;
}