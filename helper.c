/*************************************************************************
	> File Name: helper.c
	> Author: jia
	> Mail: linjinjia047@163.com 
	> Created Time: Tue 30 Jun 2020 08:21:41 AM PDT
 ************************************************************************/

#include<stdio.h>

#include "helper.h"

void show_bytes(byte_pointer start, size_t len)
{
	size_t i;
	for(i = 0; i < len; i++)
	{
		printf("%.2x", start[i]);
	}
	printf("\n");
}

