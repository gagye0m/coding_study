#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*시간 초과 문제 해결필요*/

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
	scanf("%s", Binary); // 길이 잡기 위해 초기화

	/*길이구하기*/
	int len = strlen(Binary); //len = 8진수 길이
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

	/*문자수 3의배수로 맞춰주기. 빈칸 0으로 채우기*/
	if (strlen(Binary) % 3 == 1)
	{
		Binary[strlen(Binary)] = '0';
		Binary[strlen(Binary) + 1] = '0';
	}
	
	else if (strlen(Binary) % 3 == 2)
	{
		Binary[strlen(Binary)] = '0';
	}

	/*2진수->8진수 변환. 단, 받은 문자열 reverse한후 나중에 다시 뒤집기*/
	for (int idx = 0, i = 0; len > 0; idx+=3)//횟수
	{
		Octa[i] = (Binary[idx]-48) + (2*(Binary[idx+1]-48)) + (2*2*(Binary[idx+2]-48)); //아스키코드로 접근하려면 원래 숫자로 변형 시켜줘야함. -48해주기
		len--;
		i++;
	}
	
	int_reverse(Octa, Remain_len);

	for (int idx3 = 0; idx3<Remain_len; idx3++) //len으로 하면 안됨. len이 0이 되버리기 때문에..
	{
		printf("%d", Octa[idx3]);
	}

	free(Binary);
	free(Octa);
}