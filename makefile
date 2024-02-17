CC = gcc
CFLAGS = -std=c17 -Wall -Werror -pedantic -g 

main.o: main.c
	gcc -c main.c
helpers.o: helpers.c 
	gcc -c helpers.c
life.o: life.c 
	gcc -c life.c
Life: main.o helpers.o life.o clean
	gcc main.o helpers.o life.o -o Life
clean: 
	rm -r -f Life