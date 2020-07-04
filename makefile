CC = gcc
CFLAGS = -m32
OUT = $(shell pwd)/out/

prepare: all
	$(if $(wildcard $(OUT)),,mkdir -p $(OUT))

all: u_and_t

u_and_t: u_and_t.c
	$(CC) u_and_t.c -o $(OUT)u_and_t

clean:
	rm -rf $(OUT) *.o *.i
