# This is a basic makefile to compile a program.

CC=gcc
CFLAGS=-Wall -Wfatal-errors -lm

SRC=main.c
PROGRAM=main

.PHONY: all
all: ${PROGRAM}

program: ${SRC}
	${CC} ${CFLAGS} -o ${PROGRAM}  ${SRC}

.PHONY: clean
clean:
	rm -rf *.o ${PROGRAM} 
