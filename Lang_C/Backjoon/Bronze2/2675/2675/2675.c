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
	
	/*���*/
	for (int i = 0; i < testcase; i++) //testcase��ŭ �ݺ�
	{
		for (int j = 0; Str_Case[i][j] != 0; j++) //�� ���ڿ� ��ҿ� �����ϴ� �ڵ�
		{
			for (int j2 = 0; j2<Test[i]; j2++) //�ݺ����ڸ�ŭ �ݺ��ؼ� ����ϴ� �ڵ�
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