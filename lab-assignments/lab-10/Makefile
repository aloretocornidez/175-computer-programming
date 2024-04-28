# This is a basic makefile to compile a program.

CC=gcc
CFLAGS=-Wall -Wfatal-errors -lm

SRC=main.c
PROGRAM=main


OFILES = $(SRC:.c=.o)

.c.o :
	$(CC) $(CFLAGS) -c $<

.PHONY: all
all: ${PROGRAM}

${PROGRAM}: ${SRC}
	${CC} ${CFLAGS} -o ${PROGRAM} ${SRC} && clear
	@echo && echo && echo && ./${PROGRAM}

.PHONY: clean
clean:
	rm -rf *.o ${PROGRAM} 


