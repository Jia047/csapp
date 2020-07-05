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
	int a = (1 << 31) - 1;
	int b = 1 << 20;
	int c = 1 << 31;
	int d = -(1 << 20);

	printf("%d\t%d\t%d\t%d\t\n", a, b, c, d);

	printf("a + b : %d\n", tadd_ok_1(a, b));
	printf("c + d : %d\n", tadd_ok_1(c, d));
	printf("1 + 1 : %d\n", tadd_ok_1(1, 1));
	printf("-1 - 2 : %d\n", tadd_ok_1(-1, -2));

	return 0;
}
