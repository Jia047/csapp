/*************************************************************************
	> File Name: tadd.c
	> Author: jia
	> Mail: linjinjia047@163.com 
	> Created Time: Sat 04 Jul 2020 11:21:06 PM PDT
 ************************************************************************/

#include<stdio.h>

/* 判断 x+y 有没有溢出*/
int tadd_ok_1(int x, int y)
{
	int s = x + y;

	// 判断正溢出
	if(x > 0 && y > 0 && s <= 0)
	{
		return 0;
	}

	// 判断负溢出
	if(x < 0 && y < 0 && s >= 0)
	{
		return 0;
	}

	return 1;
}

int main(int args, char *argc[])
{

	// 1 << 31 是int的复数的最小值，再 -1 导致负溢出，
	// 相当于 (1 << 31) - 1 + (1 << 32) 结果等于 int 的最大值
	// 也就是说这个最大值是通过负溢出得到的，所以编译器会产生警告
	// int a = (1 << 31) - 1;
	int b = 1 << 20;
	int c = 1 << 31;
	int d = -(1 << 20);

	// 这种方式也可以得到 int 的最大值
	int e = 0x7fffffff;
	
	printf("%d\t%d\t%d\t%d\t\n", b, c, d, e);

	printf("e + b : %d\n", tadd_ok_1(e, b));
	printf("c + d : %d\n", tadd_ok_1(c, d));
	printf("1 + 1 : %d\n", tadd_ok_1(1, 1));
	printf("-1 - 2 : %d\n", tadd_ok_1(-1, -2));

	return 0;
}
