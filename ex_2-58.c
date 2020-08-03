/*************************************************************************
	> File Name: ex_2-58.c
	> Author: jia
	> Mail: linjinjia047@163.com 
	> Created Time: Mon 03 Aug 2020 04:39:41 AM PDT
 ************************************************************************/

#include<stdio.h>
#include "helper.h"

/* 
 * 如果是小端法机器则返回 1， 大端法则返回 0  
 * 小端法：最低有效字节在前面
 * 大端法：最高有效字节在前面
 * */
int is_little_endian()
{
	// 右移，直到剩下最左边的 8 个位
	// 右移 w - 8 位
	int shift_val = (sizeof(int) - 1) << 3;
	int xright = 1 >> shift_val;

	// printf("shift_val = %d, a >> shift_val = %d\n", shift_val, xright);

	return xright && 0xFF;

}

int main(int argc, char *args [])
{
	int a = 1;
	printf("* 小端法：最低有效字节在前面\n* 大端法：最高有效字节在前面\n");
	show_bytes((byte_pointer)&a, sizeof(int));
	printf("%d\n", is_little_endian());

	return 0;
}
