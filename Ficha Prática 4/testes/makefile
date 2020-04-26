# flags para o compilador
CFLAGS = -std=c11 -Wall -Wextra

# ficheiros objecto
OBJS = main.o args.o
PROGRAM = program
PROGRAM_OPTS = args

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) -o $@ $(OBJS)

#Fazer gengetopt gerar os ficheiros .c e .h
$(PROGRAM_OPTS).c $(PROGRAM_OPTS).h: $(PROGRAM_OPTS).ggo
	gengetopt --file-name=$(PROGRAM_OPTS) < $(PROGRAM_OPTS).ggo

# Lista de dependências dos ficheiros código fonte
main.o: main.c $(PROGRAM_OPTS).h
$(PROGRAM_OPTS).o: $(PROGRAM_OPTS).c $(PROGRAM_OPTS).h

# Indica como transformar um ficheiro .c num ficheiro .o
.c.o:
	$(CC) $(CFLAGS) -c $<

# remove ficheiros sem interesse
clean:
	rm -f *.o core.* *~ $(PROGRAM)