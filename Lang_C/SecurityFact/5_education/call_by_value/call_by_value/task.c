#include <stdio.h>

void swap_1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	return;
}

void swap_2(int * pa, int * pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
	return;
}

int main()
{
	int a = 2523, b = 9999;
	printf("BEFORE swap_1 : a = %d, b = %d\n", a, b);
	swap_1(a,b);
	printf("AFTER swap_1 : a = %d, b = %d\n", a, b);

	printf("---------------------\n");

	printf("BEFORE swap_2 : a = %d, b = %d\n", a, b);
	swap_2(&a, &b);
	printf("AFTER swap_2 : a = %d, b = %d\n", a, b);
}