#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*�ð� �ʰ� ���� �ذ��ʿ�*/

void char_reverse(char* pBinary,int len)
{
	for (int i = 0; i < strlen(pBinary) / 2; i++)
	{
		char temp = pBinary[i];
		pBinary[i] = pBinary[strlen(pBinary) - 1-i];
		pBinary[strlen(pBinary) - 1-i] = temp;
	}
}

void int_reverse(int* pOcta, int len)
{
	for (int i = 0; i < len / 2; i++)
	{
		int temp = pOcta[i];
		pOcta[i] = pOcta[len - 1 - i];
		pOcta[len - 1 - i] = temp;
	}
}

int main()
{
	char* Binary=(char*)calloc(1000003,sizeof(char*));
	scanf("%s", Binary); // ���� ��� ���� �ʱ�ȭ

	/*���̱��ϱ�*/
	int len = strlen(Binary); //len = 8���� ����
	if (len % 3 != 0)
	{
		len = (len / 3) + 1;
	}
	else
	{
		len /= 3;
	}

	int Remain_len = len;
	int* Octa = (int*)calloc(len, sizeof(int));

	char_reverse(Binary,len);

	/*���ڼ� 3�ǹ���� �����ֱ�. ��ĭ 0���� ä���*/
	if (strlen(Binary) % 3 == 1)
	{
		Binary[strlen(Binary)] = '0';
		Binary[strlen(Binary) + 1] = '0';
	}
	
	else if (strlen(Binary) % 3 == 2)
	{
		Binary[strlen(Binary)] = '0';
	}

	/*2����->8���� ��ȯ. ��, ���� ���ڿ� reverse���� ���߿� �ٽ� ������*/
	for (int idx = 0, i = 0; len > 0; idx+=3)//Ƚ��
	{
		Octa[i] = (Binary[idx]-48) + (2*(Binary[idx+1]-48)) + (2*2*(Binary[idx+2]-48)); //�ƽ�Ű�ڵ�� �����Ϸ��� ���� ���ڷ� ���� ���������. -48���ֱ�
		len--;
		i++;
	}
	
	int_reverse(Octa, Remain_len);

	for (int idx3 = 0; idx3<Remain_len; idx3++) //len���� �ϸ� �ȵ�. len�� 0�� �ǹ����� ������..
	{
		printf("%d", Octa[idx3]);
	}

	free(Binary);
	free(Octa);
}