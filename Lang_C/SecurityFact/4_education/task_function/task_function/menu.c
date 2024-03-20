#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*fput으로 문자열 입력. 2. strlen으로 문자열 길이 입력, 3. 이후 fgets으로 문자열 불러오기 */

void menu_1(char* porigin, char* pplus1, char* pplus2,int len1, int len2)
{
	printf("추가할 문자열1을 입력하세요: "); //처음에 sizeof(pplus)하면 securit까지만 입력됨. 왜? sizeof(pplus1)은 포인터 변수 pplus1이라는 것의 크기를 읽는 것이지, 배열의 크기인 100을 읽어오는 것이 아님. 그래서 security를 다 못읽어오는거임.
	fgets(pplus1, len1, stdin);
	pplus1[strlen(pplus1) - 1] = '\0';

	printf("추가할 문자열2을 입력하세요: "); 
	fgets(pplus2, len2, stdin);
	strcat(pplus1, pplus2); 

	printf("연결 전: %s\n", porigin); 
	strcat(porigin, pplus1);
	porigin[strlen(porigin) - 1] = '\0';
	printf("연결 후: %s\n", porigin); 
}

void menu_2(char* porigin2, char* pcopy, int len_o, int len_c)
{
	printf("복사할 문자열을 입력하세요 : ");
	fgets(pcopy, len_c, stdin);
	pcopy[strlen(pcopy) - 1] = '\0'; //내가 뒤에 개행문자를 /0으로 바꿔줌

	printf("복사 전 : %s\n", porigin2);
	strncpy(porigin2, pcopy, strlen(pcopy)+1); //널문자 포함해서 읽어야 원하는 문자열에서 끝남. strlen()만 하면 널문자 못읽음.

												//strncpy(porigin2, pcopy,len_o);로도 가능함. 
									
												//len_o로하면 왜 aftere로 안찍히고 이렇게 되는거지?-> 이유: after+개행문자까지 복사하는게 맞는데 이미 내가 개행문자를 \0으로 바꿔놓아서 그럼.
												/*len_o를 len_c대신 준 이유->pcopy 배열에 저장된 문자열 이후의 메모리 영역의 내용이 porigin2에 복사되어 들어가게 됩니다.이는 예기치 않은 동작을 초래할 수 있으며, 프로그램의 안정성을 해치게 됩니다.
												*따라서 strncpy 함수의 세 번째 인자는 반드시 복사할 최대 길이를 나타내는 것이어야 합니다.만약 len_c가 pcopy 배열에 저장된 문자열의 길이보다 크다면, 
												*len_c 값을 조절하여 pcopy 배열의 실제 길이에 맞게 사용해야 합니다.이렇게 하면 메모리를 넘어서는 복사가 방지되고, 안정적인 동작을 보장할 수 있습니다.*/

												//어차피 len_o를 넘어가는 문자열은 다 못받기 때문에 len_o만큼만 읽어들여도 충분함.
	printf("복사 후 : %s", porigin2);
}

int main()
{
	char origin[100] = "Hello, ";
	char plus1[100] = { 0, }; 
	char plus2[100] = { 0, };

	char origin2[] = "before";
	char copy[100] = { 0, };

	menu_1(origin, plus1, plus2,sizeof(plus1),sizeof(plus2)); //배열의 크기도 같이 인자로 전달해줘야함. 안그러면 발생하는 일은 menu1주석보기
	menu_2(origin2, copy, strlen(origin2), sizeof(copy));
}
