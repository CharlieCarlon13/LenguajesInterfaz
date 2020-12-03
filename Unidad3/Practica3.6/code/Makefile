#Makefile
all: holamundo
holamundo:
	as -o hola.o hola.s
	ld hola.o -o hola
	gcc -o holamundo holamundo.c

clean:
	rm *.o
