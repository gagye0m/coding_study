#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[9] = { 0, };
	int max = 0 ,check = 0;
	for(int i = 0; i<9; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i2 = 0; i2 < 9; i2++)
	{
		if (max < arr[i2])
		{
			max = arr[i2];
			check = i2;
		}
	}
	printf("%d\n", max);
	printf("%d\n", check + 1);

	return 0;
}