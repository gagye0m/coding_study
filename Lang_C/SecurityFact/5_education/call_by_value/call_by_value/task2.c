#include <stdio.h>

void reverse(char * pa) //1. 배열 선언 아예 안하고 하기. 맨 마지막으로 a의 주소를 올린 뒤 올린만큼 세줌. 
							//이후 올렸던 수만큼 i씩빼면서 출력하면 될듯.
						//2. 맨 앞과 맨뒤자리를 바꾸고, 점점 좁혀온다. -> 이럼 각 주소파악필수. -> 이게 맞음. strlen사용.
{
	int len = 0;
	for (int i = 0; *(pa+i) != '\0'; i++)
	{
		len++;
	}

	for (int i2 = 0; i2<=len/2; i2++) 
	{ 
		char temp = *(pa+i2);
		*(pa + i2) = *(pa + (len - 1 - i2));//배열 요소는 0부터 시작. 그냥 길이를 받아버리면 널문자랑 첫문자를 교환해서 출력못함. 따라서 len - 1을 해준상태로 해야 !위치임.
		*(pa + (len - 1- i2)) = temp;
	}

	return;
}

int main()
{
	char a[100] = "helloworld!";
	reverse(a);
	printf("%s", a); // %s는 널문자 전까지 출력함.

	return 0;
}