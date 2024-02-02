CC=gcc
CFLAGS := -Wall -Wfatal-errors

SRCS := sample-01.c \
				sample-02.c \
				sample-03.c \
				sample-complete-03.c \
				activity-01.c \
				exercise-01.c \
				exercise-02.c \
				activity-02.c \
				activity-03.c \
				activity-03-complete.c \

OBJS := ${SRCS:c=o} 
PROGS := ${SRCS:.c=}

.PHONY: all
all: ${PROGS}

${PROGS} : % : %.c # %.o Makefile
	${CC} $< -o $@

clean:
	rm -f ${PROGS} ${OBJS}

%.o: %.c Makefile
	${CC} ${CFLAGS} -c $<
