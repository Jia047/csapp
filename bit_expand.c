/*************************************************************************
	> File Name: bit_expand.c
	> Author: jia
	> Mail: linjinjia047@163.com 
	> Created Time: Wed 01 Jul 2020 07:20:48 AM PDT
 ************************************************************************/

#include<stdio.h>
#include "helper.h"

int func1(unsigned word)
{
	int ret = (int)((word << 24) >> 24);
	show_bytes((byte_pointer)&ret, sizeof(int));
	return ret;
}

int func2(unsigned word)
{
	int ret = ((int)word << 24) >> 24;
	show_bytes((byte_pointer)&ret, sizeof(int));
	return ret;
}

int main(int argc, char *args[])
{
	func2(func1(0x00000076));
	func2(func1(0x87654321));
	func2(func1(0x000000C9));
	func2(func1(0xEDCBA987));

	return 0;
}
