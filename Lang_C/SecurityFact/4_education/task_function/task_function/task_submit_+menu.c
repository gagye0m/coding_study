#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*fput���� ���ڿ� �Է�. 2. strlen���� ���ڿ� ���� �Է�, 3. ���� fgets���� ���ڿ� �ҷ����� */



int main()
{
	char origin[100] = "Hello, ";
	char plus1[100] = { 0, }; //
	char plus2[100] = { 0, };  // ������ �迭 �ΰ����� �ʿ� X ����ó�� �Ϸ��� �ʿ�

	char origin2[] = "before";
	char copy[100] = {0, };

	printf("�߰��� ���ڿ�1�� �Է��ϼ���: "); //security\n\0�� �Էµɰ���.
	fgets(plus1, sizeof(plus1), stdin);
	plus1[strlen(plus1) - 1] = '\0'; //security\0���� ����. �ֳ�? ��ĥ�� \0���� ��ġ�⿡.

	printf("�߰��� ���ڿ�2�� �Է��ϼ���: "); //fact\n\0�� �Էµɰ���.
	fgets(plus2, sizeof(plus2), stdin);	
	strcat(plus1, plus2); //securityfact\n\0�� �ɰ���.

	printf("���� ��: %s\n", origin); // ��� �׳� "Hello, "
	strcat(origin, plus1); //->Hello, securityfact\n\0���� ��. origin �� ���ڿ� ���� �ִ� '\0'���� ���� �ٿ��ִ´ٴ� ���� �� ����ؾ���.
	origin[strlen(origin) - 1] = '\0';
	printf("���� ��: %s\n", origin); //->����� ������ ������ Hello, securityfact\n�� ��µ�. �̰� ������ ���ٷ� ���๮�� �����ʿ�

	printf("������ ���ڿ��� �Է��ϼ��� : ");
	fgets(copy, sizeof(copy), stdin);
	copy[strlen(copy) - 1] = '\0';	//strcpy�� ���縦 �ϸ� ���ڿ��� ���� �˸��� '\0'���� ���簡 �ȴ�. ���� \0���� �ִ� ���๮�� �����ʿ�
	printf("���� �� : %s\n", origin2);
	strncpy(origin2, copy, strlen(copy)+1); //�׳� strlen�� �����ϸ� after������ ������ ����. +1���༭ \0���� ������Ѿߵ�.
	printf("���� �� : %s", origin2);
}
//������ �������� ���� �Լ��� ¥�� ������
