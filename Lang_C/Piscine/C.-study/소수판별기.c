#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	while (1)
	{
		int n1 = 0, dev = 1;
		printf("input = ");
		scanf("%d", &n1);

		if (n1 == 0 || n1==1) 
		{
			return 0;
		}


		while (dev < n1)
		{
			dev++;

			if (n1 % dev == 0 && n1 % 1 == 0)
			{
				if (dev != n1)
				{
					printf("\n### Output ###\n");
					printf("%d is not prime!\n", n1);
					break;
				}

				else
					printf("\n### Output ###\n");
					printf("%d is prime!\n", n1);
			}
		}
	}

}