#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int Num[10] = { 0, };
	int Left[10] = { 0, }; //�ϳ��� ���ư��鼭 ���� �������. for�� ����
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

	for (int i = 0; i < 10; i++) //�ߺ� �����ؾߵ�. -> �����غ��ϱ� �ʿ� X 0~41���� �����Ұ��̴� check����Ʈ�� ���� ���� 1�϶��� count���ָ� ��.
	{
		for (int j = 0; j < 42; j++) // 0~41���� ������ üũ.
		{
			if (Left[i]==j) // 39, 40, 41, 0, 1, 2, 40, 41, 0, 1. if 39��? 39��°�ڸ��� +1
			{
				check[j]++;
			}
		}
	}

	for (int idx = 0; idx < 42; idx++)
	{
		if (check[idx] != 0) // üũ�� 0���̴�? -> �ȳ��Դ�. üũ�� 0�� �̻��̴�? -> ���� �������̴�. ������ index�� �ٸ��� �ߺ� ���� ���ص���.
		{
			print++;
		}
	}
	printf("%d", print);
	return 0;
}