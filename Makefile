CC = gcc
FLAG = -Wall -g
.PHONY: all clean
all: my_math.o main.o connections
connections: main.o my_math.o
	$(CC) $(FLAG) -o connections main.o my_math.o
main.o: main.c 
	$(CC) $(FLAG) -c main.c 
my_math.o: my_math.c
	$(CC) $(FLAG) -c my_math.c 
clean: 
	rm -f *.o *.out *.h.ghc connections
