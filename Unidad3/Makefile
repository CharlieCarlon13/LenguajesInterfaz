#Makefile

all: teclado

teclado: teclado.o
	ld teclado.o -o teclado

teclado.o: teclado.s
	as -o teclado.o teclado.s

clean:
	rem -vf teclado *.o
