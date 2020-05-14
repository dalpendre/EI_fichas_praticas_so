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
    if(argc != 3)
    {
        fprintf(stderr, "expecting 1 argument, got %d\nSyntax: %s filename\n", argc-1, argv[0]);
        exit(1);
    }

    //./prog 10 /etc/paswd
    int n = atoi(argv[1]);
    char *filename = argv[2];

    int fd = open(filename, O_RDONLY);
    if(fd == -1)
        ERROR(1, "Erro a abrir o ficheiro %s", filename);

    char buf;
    ssize_t read_res;

    for(int i = 0; i < n; i++)
    {
        read_res = read(fd, &buf, 1);

        if(read_res == -1)
            ERROR(1, "Erro a ler do ficheiro %s", filename);

        if(read_res == 0)
            ERROR(1, "Ficheiro %s não stem byts suficientes", filename);

        printf("[#%03d] %x\n", i+1, buf);
    }

    res = close(fd);

    return 0;
}