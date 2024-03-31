#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int Num[10] = { 0, };
	int Left[10] = { 0, }; //하나씩 돌아가면서 개수 세보면됨. for문 쓰기
	int check[42] = { 0, };
	int print = 0;

	for (int idx = 0; idx < 10; idx++)
	{
		scanf("%d", &Num[idx]);
	}

	for (int idx = 0; idx < 10; idx++)
	{
		Left[idx] = Num[idx]%42;
	}

	for (int i = 0; i < 10; i++) //중복 제거해야됨. -> 생각해보니까 필요 X 0~41까지 존재할것이니 check리스트를 만들어서 값이 1일때만 count해주면 됨.
	{
		for (int j = 0; j < 42; j++) // 0~41까지 나머지 체크.
		{
			if (Left[i]==j) // 39, 40, 41, 0, 1, 2, 40, 41, 0, 1. if 39다? 39번째자리에 +1
			{
				check[j]++;
			}
		}
	}

	for (int idx = 0; idx < 42; idx++)
	{
		if (check[idx] != 0) // 체크가 0번이다? -> 안나왔다. 체크가 0번 이상이다? -> 나온 나머지이다. 어차피 index가 다르니 중복 생각 안해도됨.
		{
			print++;
		}
	}
	printf("%d", print);
	return 0;
}