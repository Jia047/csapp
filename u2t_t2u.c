/*************************************************************************
	> File Name: u2t_t2u.c
	> Author: jia
	> Mail: linjinjia047@163.com 
	> Created Time: Thu 25 Jun 2020 07:00:04 PM PDT
 ************************************************************************/

#include<stdio.h>

/* 强制类型转换可能会改变数值，但是不会改变底层的位模式 */
int main(int argc, char *args[])
{
	short int v = -12345;
	unsigned short uv = (unsigned short) v;
	printf("v = %d, uv = %u\n", v, uv);
	
	unsigned u = 4294967295u; /* UMax */
	int tu = (int) u;

	printf("u = %u, tu = %d\n", u, tu);

	// %u 可以用来输出 int 的数值
	// %d 也可以用来输出 unsigned 的数值
	int x = -1;
	unsigned u1 = 2147483648; // 2^31

	printf("x = %u = %d \n", x, x);
	printf("u1 = %u = %d \n", u1, u1);

	return 0;
}
