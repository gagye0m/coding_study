#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int testcase = 0;
	scanf("%d", &testcase);

	int* Test = (int*)calloc(testcase, sizeof(int));
	char** Str_Case = (char**)calloc(testcase, sizeof(char*));
	for (int idx = 0; idx < testcase; idx++)
	{
		Str_Case[idx] = (char*)calloc(160, sizeof(char));
	}

	for (int idx = 0; idx < testcase; idx++)
	{
		scanf("%d", &Test[idx]);
		scanf("%s", Str_Case[idx]);
	}
	
	/*출력*/
	for (int i = 0; i < testcase; i++) //testcase만큼 반복
	{
		for (int j = 0; Str_Case[i][j] != 0; j++) //각 문자열 요소에 접근하는 코드
		{
			for (int j2 = 0; j2<Test[i]; j2++) //반복숫자만큼 반복해서 출력하는 코드
			{
				printf("%c", Str_Case[i][j]);
			}
		}
		printf("\n");
	}

	for (int idx = 0; idx < testcase; idx++)
	{
		free(Str_Case[idx]);
	}

	free(Str_Case);
	free(Test);


	return 0;
}