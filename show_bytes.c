/*************************************************************************
	> File Name: show_bytes.c
	> Author: jia
	> Mail: linjinjia047@163.com 
	> Created Time: Wed 24 Jun 2020 11:35:10 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
	size_t i;
	for(i = 0; i < len; i++)
	{
		printf("%.2x", start[i]);
	}
	printf("\n");
}

void show_int(int x)
{
	show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x)
{
	show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void * x)
{
	// 指针值是与机器相关的
	show_bytes((byte_pointer)&x, sizeof(void *));
}

void test_show_bytes(int val)
{
	int ival = val;
	float fval = (float)val;
	int *pval = &val;

	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

void test_show_bytes_2()
{
	int val = 0x87654321;
	byte_pointer valp = (byte_pointer) &val;

	show_bytes(valp, 1);
	show_bytes(valp, 2);
	show_bytes(valp, 3);

	show_pointer(valp);
}

void test_show_bytes_3()
{
	char *str = "abcdef";
	show_bytes("12345", 6);
	show_bytes((byte_pointer)str, strlen(str)); 
}

void test_show_bytes_4()
{
	short x = 12345;
	short mx = -x;

	show_bytes((byte_pointer) &x, sizeof(short));
	show_bytes((byte_pointer) &mx, sizeof(short));
}

int main(int argc, char * args[])
{
	// test_show_bytes(12345);
	// test_show_bytes_2();
	// test_show_bytes_3();
	test_show_bytes_4();

	return 0;
}

