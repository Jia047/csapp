CC = gcc
CFLAGS = -m32
OUT = $(shell pwd)/out/

ifeq ("$(wildcard $(OUT))", "")
$(shell mkdir -p $(OUT))
endif

all: u_and_t bit_expand tadd tmult_ok

u_and_t: u_and_t.c
	$(CC) u_and_t.c -o $(OUT)u_and_t

bit_expand: bit_expand.c helper.o
	$(CC) $(CFLAGS) $(OUT)helper.o bit_expand.c -o $(OUT)bit_expand

helper.o:
	$(CC) $(CFLAGS) -c helper.c -o $(OUT)helper.o

tadd: tadd.c
	$(CC) tadd.c -o $(OUT)tadd

tmult_ok: tmult_ok_2_36.c
	$(CC) tmult_ok_2_36.c -o $(OUT)tmult_ok

clean:
	rm -rf $(OUT) *.o *.i
