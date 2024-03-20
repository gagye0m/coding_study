#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*fput으로 문자열 입력. 2. strlen으로 문자열 길이 입력, 3. 이후 fgets으로 문자열 불러오기 */

int main()
{

	char origin[100] = "Hello, ";
	char plus1[100] = {0, }; // 솔직히 배열 두개까지 필요 X 과제처럼 하려면 필요

	printf("추가할 문자열1을 입력하세요: ");
	fgets(plus1, sizeof(plus1), stdin);
	plus1[strlen(plus1) - 1] = '\0'; //fgets함수는 데이터 구별을 위한 개행문자도 입력받아서 마지막을 널문자로 바꿔 개행문자를 제거해줘야함.

	strcat(origin, plus1); //-> Hello, security\0까지 됨. dest 의 문자열 끝에 있는 '\0'에서 부터 붙여넣는다는 점을 꼭 기억해야함.

	printf("추가할 문자열2을 입력하세요: "); //fact\n이 입력될거임.
	fgets(plus1, sizeof(plus1), stdin);	//1. fact\nty형태로 저장이 될거임. <--이 가정은 틀렸다.
										//fgets 함수는 개행문자가 (\n) 나올 때까지 문자열을 받아준다.
										//그런데 중요한 것은 예를들어 Hi World 를 입력하고 엔터를 쳤다고 치면 Hi World\0 이아니라
										// Hi World\n\0 이 받아진다는 것이다. 이것을 잘 알아야 한다. 즉, plus1의 상황은 fact\n\0ty\n\0이 된다.

										//printf("%d", strlen(plus1)); -> 이것도 5가 나오는 이유가 fact'\n'까지만 해서 5가 나옴. 첫 '\0'에서 끊김. 배열 하나만 가져갈거면 필요 X

	strcat(origin, plus1); //->Hello, securityfact\n\0으로 됨.
	origin[strlen(origin) - 1] = '\0';
	printf("%s", origin); //->사실은 윗줄이 없으면 Hello, securityfact\n이 출력되는 거였음. 이걸 지울라면 윗줄로 개행문자 제거필요
}