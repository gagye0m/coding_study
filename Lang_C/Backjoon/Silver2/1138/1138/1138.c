#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*전체 다 채워졌을 때 끝내는거*/
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
	int N = 0; //사람수

	scanf("%d", &N);
	Line = (int*)calloc(N, sizeof(int));
	Assign = (int*)calloc(N, sizeof(int));

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &Line[i]); // 2 1 0 1 0
	}
	
	int Num = 1; //배치할 숫자.
	for (int j = 0; j < N; j++)  //받은 숫자 각각에 접근. 
	{
		int find = Line[j]; //2이라면 2저장
		int* test = (int*)calloc(N, sizeof(int));;
		int final_count = check(Assign,N);

		while (final_count>0) //0을 find를 옮길때마다 세줘야함. 배열 세개 만들어서 세주기. 6이랑 7이 작동안하는 조건임 이건
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
				if (Assign[i] == 0) // Assign이 0이 아닐대는 ++로 올려주기. 필요
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

	/*출력*/
	for (int i = 0; i < N; i++)
	{
		printf("%d ", Assign[i]);
	}

	free(Line);
	free(Assign);

	return 0;
}