CC=gcc

CFLAGS=-c -Wall

all: n_queens

n_queens: main.o place.o print.o queen.o
	$(CC) main.o place.o print.o queen.o -o n_queens

main.o: main.c
	$(CC) $(CFLAGS) main.c

place.o: place.c
	$(CC) $(CFLAGS) place.c

print.o: print.c
	$(CC) $(CFLAGS) print.c
	
queen.o: queen.c
	$(CC) $(CFLAGS) queen.c

clean:
	rm *o n_queens