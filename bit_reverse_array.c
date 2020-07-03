/*************************************************************************
	> File Name: bit_reverse_array.c
	> Author: jia
	> Mail: linjinjia047@163.com 
	> Created Time: Thu 25 Jun 2020 02:07:17 AM CST
 ************************************************************************/

#include<stdio.h>


void inplace_swap(int *x, int *y)
{
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

void reverse_array_1(int a[], int cnt)
{
	int first, last;
	for(first = 0, last = cnt - 1;
		first <= last;
		first++, last--)
		inplace_swap(&a[first], &a[last]);
}

void reverse_array_2(int a[], int cnt)
{
	int first, last;
	for(first = 0, last = cnt - 1;
		first < last;
		first++, last--)
		inplace_swap(&a[first], &a[last]);
}

void print_arr(int *a, int cnt)
{	
	int i;
	for(i = 0; i < cnt; i++)
		printf("%d", a[i]);

	printf("\n");
}

int main(int argc, char * args[])
{
	int a1[] = {1, 2, 3, 4};
	int a2[] = {1, 2, 3, 4, 5};

	// reverse_array_1(a1, 4);
	// reverse_array_1(a2, 5);

	reverse_array_2(a1, 4);
	reverse_array_2(a2, 5);
	
	print_arr(a1, 4);
	print_arr(a2, 5);

	return 0;
}
