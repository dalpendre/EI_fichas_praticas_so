# Compiler flags
CFLAGS=-Wall -Wextra -ggdb -std=c11 -pedantic-errors #-pg

# Name of the executable
PROGRAM=conta_letra

# Object files required to build the executable
PROGRAM_OBJS=main.o conta_letra.o

# Clean and all are not files
.PHONY: clean all  

all: $(PROGRAM)

$(PROGRAM): $(PROGRAM_OBJS)
	$(CC) -o $@ $(PROGRAM_OBJS)

# Dependencies
main.o: main.c conta_letra.h
conta_letra.o: conta_letra.c conta_letra.h

#how to create an object file (.o) from C file (.c)
.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o core.* *~ $(PROGRAM) *.bak