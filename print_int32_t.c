/*************************************************************************
	> File Name: print_int32_t.c
	> Author: jia
	> Mail: linjinjia047@163.com 
	> Created Time: Thu 25 Jun 2020 06:26:41 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>


int main(int argc, char *args[])
{
	int32_t x = 10;
	uint64_t y = 20;

	printf("x = %" PRId32 ", y = %" PRIu64 "\n", x, y);

	return 0;
}
