/*************************************************************************
	> File Name: bis_bic.c
	> Author: jia
	> Mail: linjinjia047@163.com 
	> Created Time: Thu 25 Jun 2020 02:56:09 PM CST
	> Description: using functions bis and bic compute x^y, x|y
 ************************************************************************/

#include<stdio.h>

int bis(int x, int m)
{
	return x|m;
}

int bic(int x, int m)
{
	return x & ~m;
}

/* Compute x|y using only class to functions bis and bic */
int bool_or(int x, int y)
{
	return bis(x, y);
}

/* Compute x^y using only class to functions bis and bic */
/* x^y = (x & ~y) | (~x & y)  */
int bool_xor(int x, int y)
{
	return bis(bic(x, y), bic(y, x));
}

int main(int argc, char *args[])
{

	short x = 9;
	short y = 5;

	// printf("%d\n", sizeof(short));

	printf("x|y %d\n", bool_or(x, y));
	
	printf("x^y %d\n", bool_xor(x, y));

	return 0;
}
