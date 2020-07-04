CC = gcc
CFLAGS = -m32
OUT = $(shell pwd)/out/

ifeq ("$(wildcard $(OUT))", "")
$(shell mkdir -p $(OUT))
endif

all: u_and_t bit_expand

u_and_t: u_and_t.c
	$(CC) u_and_t.c -o $(OUT)u_and_t

bit_expand: bit_expand.c helper.o
	$(CC) $(CFLAGS) $(OUT)helper.o bit_expand.c -o $(OUT)bit_expand

helper.o:
	$(CC) $(CFLAGS) -c helper.c -o $(OUT)helper.o

clean:
	rm -rf $(OUT) *.o *.i
