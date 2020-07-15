/*************************************************************************
	> File Name: tmult_ok_2_36.c
	> Author: jia
	> Mail: linjinjia047@163.com 
	> Created Time: Wed 15 Jul 2020 11:14:18 PM CST
  > Description: 
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

/* 判断x*y会不会溢出 */
int tmult_ok_32(int x, int y)
{
	int p = x * y;

	return !x || p/x == y;
}

/* 使用 int64_t 来判断乘法溢出，不能使用除法 */
int tmult_ok_64(int x, int y)
{
	// 如果不强转为 int64_t 有可能会得到x*y溢出的结果
	int64_t p = (int64_t)x * y;
	return p == (int)p;
}

int main(int args, char *argc[])
{
	int a = 2;
	int b = 2;
	int c = 1 << 20;
	int d = 1 << 20;
	int e = 0;

	printf("2 * 2 = %d\n", tmult_ok_32(a,b));
	printf("2^20 * 2^20 = %d\n", tmult_ok_32(c,d));
	printf("0 * 2^20 =%d\n", tmult_ok_32(e,d));

	printf("2 * 2 = %d\n", tmult_ok_64(a,b));
	printf("2^20 * 2^20 = %d\n", tmult_ok_64(c,d));
	printf("0 * 2^20 =%d\n", tmult_ok_64(e,d));

}

