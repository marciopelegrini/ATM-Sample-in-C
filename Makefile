
CC=clang
CFLAGS=-Wall -g

all: mainapp

mainapp: main.o tools.o
	$(CC) $(CFLAGS) main.o tools.o -o mainapp

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

tools.o: tools.c
	$(CC) $(CFLAGS) -c tools.c

clean:
	rm a.out *.o mainapp