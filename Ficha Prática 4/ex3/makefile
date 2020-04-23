# Compiler flags
CFLAGS=-Wall -Wextra -ggdb -std=c11 -pedantic-errors #-pg

# Name of the executable
PROGRAM=conta_letra_v2

# Object files required to build the executable
PROGRAM_OBJS=main.o conta_letra_v2.o

# Clean and all are not files
.PHONY: clean all  

all: $(PROGRAM)

$(PROGRAM): $(PROGRAM_OBJS)
	$(CC) -o $@ $(PROGRAM_OBJS)

# Dependencies
main.o: main.c conta_letra_v2.h
conta_letra_v2.o: conta_letra_v2.c conta_letra_v2.h

#how to create an object file (.o) from C file (.c)
.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o core.* *~ $(PROGRAM) *.bak