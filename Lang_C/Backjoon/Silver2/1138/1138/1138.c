#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*��ü �� ä������ �� �����°�*/
int check(int* Assign, int N)
{
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if (Assign[i] == 0)
		{
			count++;
		}
	}
	return count;
}
int main(void)
{
	int* Line;
	int* Assign;
	int N = 0; //�����

	scanf("%d", &N);
	Line = (int*)calloc(N, sizeof(int));
	Assign = (int*)calloc(N, sizeof(int));

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &Line[i]); // 2 1 0 1 0
	}
	
	int Num = 1; //��ġ�� ����.
	for (int j = 0; j < N; j++)  //���� ���� ������ ����. 
	{
		int find = Line[j]; //2�̶�� 2����
		int* test = (int*)calloc(N, sizeof(int));;
		int final_count = check(Assign,N);

		while (final_count>0) //0�� find�� �ű涧���� �������. �迭 ���� ���� ���ֱ�. 6�̶� 7�� �۵����ϴ� ������ �̰�
		{
			int count = 0;
			while (1)
			{
				test[find] = Num;
				if (Assign[find] != 0)
				{
					test[find] = 0;
					find++;
					continue;
				}

				else
				{
					break;
				}
			}

			for (int i = 0; i < find; i++)
			{
				if (Assign[i] == 0) // Assign�� 0�� �ƴҴ�� ++�� �÷��ֱ�. �ʿ�
				{
					count++;
				} 
			}

			if (count < Line[j])
			{
				test[find] = 0;
				find++;
				continue;
			}
			
			else
			{
				break;
			}
		}
		Assign[find]=test[find];
		Num++;
		free(test);
	}

	/*���*/
	for (int i = 0; i < N; i++)
	{
		printf("%d ", Assign[i]);
	}

	free(Line);
	free(Assign);

	return 0;
}