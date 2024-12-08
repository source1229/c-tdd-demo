CC = gcc
CFLAGS = -I./include

all: test

test: cal.c test.c
	$(CC) $(CFLAGS) -o test test.c cal.c
	./test
