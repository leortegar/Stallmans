<<<<<<< HEAD
CC = gcc

all:
	$(CC) calcMain.c operaciones.c -lm -o calc

=======
OUT = calcMain
SRCS = calcMain.c operaciones.c
CFLAGS = -Wall
LDFLAGS = -lm

all: compilar

compilar: $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(OUT) $(LDFLAGS)

.PHONY: clean

clean:
	rm $(OUT)

>>>>>>> 29df4e9e1ab6bc499ca6c2347387c05f2ebcb933
