/*************************************************************************
	> File Name: bit_truncate.c
	> Author: jia
	> Mail: linjinjia047@163.com 
	> Created Time: Wed 01 Jul 2020 08:25:03 AM PDT
 ************************************************************************/

#include<stdio.h>

float sum_elements(float a[], unsigned length)
{
	int i;
	float result = 0;

	for(i = 0; i <= length-1; i++)
	{
		result += a[i];
	}

	return result;
}

int main(int argc, char *args[])
{

	float a[3] = {1, 2, 3};
	int len = 0;
	
	sum_elements(a, len);

    return 0;
}
