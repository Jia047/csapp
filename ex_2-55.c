/*************************************************************************
	> File Name: ex_2-55.c
	> Author: jia
	> Mail: linjinjia047@163.com 
	> Created Time: Sun 02 Aug 2020 09:13:39 AM PDT
 ************************************************************************/

#include<stdio.h>

typedef char *byte_pointer;

void show_bytes(byte_pointer p, int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		printf("%.2x", p[i]);
	}

	printf("\n");

}

int main(int argc, char *args [])
{
	int a = 1;
	show_bytes((byte_pointer)&a, sizeof(int));

	return 1;
}
