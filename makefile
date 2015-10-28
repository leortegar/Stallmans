CC = gcc

all:
	$(CC) calcMain.c operaciones.c -lm -o calc

