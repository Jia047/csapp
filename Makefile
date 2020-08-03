CC = gcc
CFLAGS = -m32
OUT = $(shell pwd)/out/

ifeq ("$(wildcard $(OUT))", "")
$(shell mkdir -p $(OUT))
endif

#all: u_and_t bit_expand tadd tmult_ok
all: ex

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

ex: helper64.o  ex_2-55 ex_2-57 ex_2-58

helper64.o:
	$(CC) -c helper.c -o $(OUT)helper64.o

ex_2-55: ex_2-55.c
	$(CC) ex_2-55.c -o $(OUT)ex_2-55

ex_2-57: ex_2-57.c
	$(CC) $(OUT)helper64.o  ex_2-57.c -o $(OUT)ex_2-57

ex_2-58: ex_2-58.c
	$(CC) $(OUT)helper64.o ex_2-58.c -o $(OUT)ex_2-58

clean:
	rm -rf $(OUT) *.o *.i
