/*************************************************************************
	> File Name: ex_2-57.c
	> Author: jia
	> Mail: linjinjia047@163.com 
	> Created Time: Sun 02 Aug 2020 09:23:01 AM PDT
 ************************************************************************/

#include<stdio.h>
#include "helper.h"

void show_short(short x)
{
	show_bytes((byte_pointer)&x, sizeof(short));
}

void show_long(long x)
{
	show_bytes((byte_pointer)&x, sizeof(long));
}

void show_double(double x)
{
	show_bytes((byte_pointer)&x, sizeof(double));
}

int main(int argc, char *args [])
{
	// short, double, long
	short s = 0xac;
	long l = 0xabcdef1234567890;
	double d = 0xabcd;
	
	show_short(s);
	show_long(l);
	show_double(d);
	
	return 1;
}
