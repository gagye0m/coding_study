#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*fput���� ���ڿ� �Է�. 2. strlen���� ���ڿ� ���� �Է�, 3. ���� fgets���� ���ڿ� �ҷ����� */

void menu_1(char* porigin, char* pplus1, char* pplus2,int len1, int len2)
{
	printf("�߰��� ���ڿ�1�� �Է��ϼ���: "); //ó���� sizeof(pplus)�ϸ� securit������ �Էµ�. ��? sizeof(pplus1)�� ������ ���� pplus1�̶�� ���� ũ�⸦ �д� ������, �迭�� ũ���� 100�� �о���� ���� �ƴ�. �׷��� security�� �� ���о���°���.
	fgets(pplus1, len1, stdin);
	pplus1[strlen(pplus1) - 1] = '\0';

	printf("�߰��� ���ڿ�2�� �Է��ϼ���: "); 
	fgets(pplus2, len2, stdin);
	strcat(pplus1, pplus2); 

	printf("���� ��: %s\n", porigin); 
	strcat(porigin, pplus1);
	porigin[strlen(porigin) - 1] = '\0';
	printf("���� ��: %s\n", porigin); 
}

void menu_2(char* porigin2, char* pcopy, int len_o, int len_c)
{
	printf("������ ���ڿ��� �Է��ϼ��� : ");
	fgets(pcopy, len_c, stdin);
	pcopy[strlen(pcopy) - 1] = '\0'; //���� �ڿ� ���๮�ڸ� /0���� �ٲ���

	printf("���� �� : %s\n", porigin2);
	strncpy(porigin2, pcopy, strlen(pcopy)+1); //�ι��� �����ؼ� �о�� ���ϴ� ���ڿ����� ����. strlen()�� �ϸ� �ι��� ������.

												//strncpy(porigin2, pcopy,len_o);�ε� ������. 
									
												//len_o���ϸ� �� aftere�� �������� �̷��� �Ǵ°���?-> ����: after+���๮�ڱ��� �����ϴ°� �´µ� �̹� ���� ���๮�ڸ� \0���� �ٲ���Ƽ� �׷�.
												/*len_o�� len_c��� �� ����->pcopy �迭�� ����� ���ڿ� ������ �޸� ������ ������ porigin2�� ����Ǿ� ���� �˴ϴ�.�̴� ����ġ ���� ������ �ʷ��� �� ������, ���α׷��� �������� ��ġ�� �˴ϴ�.
												*���� strncpy �Լ��� �� ��° ���ڴ� �ݵ�� ������ �ִ� ���̸� ��Ÿ���� ���̾�� �մϴ�.���� len_c�� pcopy �迭�� ����� ���ڿ��� ���̺��� ũ�ٸ�, 
												*len_c ���� �����Ͽ� pcopy �迭�� ���� ���̿� �°� ����ؾ� �մϴ�.�̷��� �ϸ� �޸𸮸� �Ѿ�� ���簡 �����ǰ�, �������� ������ ������ �� �ֽ��ϴ�.*/

												//������ len_o�� �Ѿ�� ���ڿ��� �� ���ޱ� ������ len_o��ŭ�� �о�鿩�� �����.
	printf("���� �� : %s", porigin2);
}

int main()
{
	char origin[100] = "Hello, ";
	char plus1[100] = { 0, }; 
	char plus2[100] = { 0, };

	char origin2[] = "before";
	char copy[100] = { 0, };

	menu_1(origin, plus1, plus2,sizeof(plus1),sizeof(plus2)); //�迭�� ũ�⵵ ���� ���ڷ� �����������. �ȱ׷��� �߻��ϴ� ���� menu1�ּ�����
	menu_2(origin2, copy, strlen(origin2), sizeof(copy));
}
