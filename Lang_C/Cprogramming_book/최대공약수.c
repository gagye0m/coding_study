#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0, choose = 0, Lpick = 0, gcd = 0, lcm = 0; //gcd =최대공약수, lcm=최소공배수
	while (1)
	{	
		printf("Input\n");
		scanf("%d\n", &num1);
		scanf("%d", &num2);
		if (num1 == 0 || num2 == 0)
		{
			return 0;
		}

		if (num1 > num2) {
			choose = num2;
			Lpick = num1;
		}
		

		else if (num1 <= num2)
		{
			choose = num1;
			Lpick = num2;
		}

		while (choose > 0 )
		{
			if (num1 % choose == 0 && num2 % choose == 0)
			{
				gcd = choose;
				break;
			}
			else
				choose--;
		}
		while (1)
		{
			if (Lpick % num1 == 0 && Lpick % num2 == 0)
			{
				lcm = Lpick;
				break;
			}
			else
				Lpick++;
		}
		printf("\n###Output\n");
		printf("gcd = %d\n", gcd);
		printf("lcm = %d", Lpick);
		printf("\n\n");

	}
}