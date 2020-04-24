# Flags para o compilador
CFLAGS=-Wall -Wextra -ggdb -std=c11 -pedantic

# nome do executavel
PROGRAM=figura1

# Lista de objectos necessarios para criar o executavel
PROGRAM_OBJS=main.o

.PHONY: clean

all: ${PROGRAM}

${PROGRAM}: ${PROGRAM_OBJS}
	${CC} -o $@ ${PROGRAM_OBJS}

# Dependencias
main.o: main.c

#como compilar .o a partir de .c
.c.o:
	${CC} ${CFLAGS} -c $<

clean:
	rm -f *.o core.* *~ ${PROGRAM} *.bak
