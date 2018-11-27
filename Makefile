CC := gcc
CFLAGS := -Wall -std=c99
DEL := rm -rf


all : bar

bar: bar.o foo.o
	${CC} ${CFLAGS} -o $@ $^
	

%.o: %.c
	${CC} -c ${CFLAGS} $< -o $@

check:
	./bar

.PHONY: clean	
clean:
	${DEL} bar bar.o foo.o
	${DEL} *~ *.swp
