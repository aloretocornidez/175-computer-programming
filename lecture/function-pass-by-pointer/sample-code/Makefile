CC=gcc
CFLAGS := -Wall -Wfatal-errors

SRCS := 01-sample.c \
				02-sample.c \
				03-sample.c \
				03-sample-complete.c \
				activity-01.c \
				exercise-01.c \
				exercise-02.c \

OBJS := ${SRCS:c=o} 
PROGS := ${SRCS:.c=}

.PHONY: all
all: ${PROGS}

${PROGS} : % : %.o Makefile
	${CC} $< -o $@

clean:
	rm -f ${PROGS} ${OBJS}

%.o: %.c Makefile
	${CC} ${CFLAGS} -c $<
