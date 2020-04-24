# Compiler flags
CFLAGS=-Wall -Wextra -ggdb -std=c11 -pedantic-errors #-pg

# Name of the executable
PROGRAM=calculator
PROGRAM_OPT = args

# Object files required to build the executable
PROGRAM_OBJS=main.o args.o calculator.o

# Clean and all are not files
.PHONY: clean all  

all: $(PROGRAM)

$(PROGRAM): $(PROGRAM_OBJS)
	$(CC) -o $@ $(PROGRAM_OBJS)

# Dependencies
main.o: main.c args.h calculator.h
calculadora.o: calculator.c calculator.h

$(PROGRAM_OPT).o: $(PROGRAM_OPT).c $(PROGRAM_OPT).h
#how to create an object file (.o) from C file (.c)
.c.o:
	$(CC) $(CFLAGS) -c $<

$(PROGRAM_OPT).o: $(PROGRAM_OPT).c $(PROGRAM_OPT).h
	$(CC) -ggdb -std=c11 -pedantic -c $<

$(PROGRAM_OPT).c $(PROGRAM_OPT).h: $(PROGRAM_OPT).ggo
	gengetopt < $(PROGRAM_OPT).ggo --file-name=$(PROGRAM_OPT)

clean:
	rm -f *.o core.* *~ $(PROGRAM) *.bak $(PROGRAM_OPT).h $(PROGRAM_OPT).c