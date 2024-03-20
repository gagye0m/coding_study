#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*fput으로 문자열 입력. 2. strlen으로 문자열 길이 입력, 3. 이후 fgets으로 문자열 불러오기 */



int main()
{
	char origin[100] = "Hello, ";
	char plus1[100] = { 0, }; //
	char plus2[100] = { 0, };  // 솔직히 배열 두개까지 필요 X 과제처럼 하려면 필요

	char origin2[] = "before";
	char copy[100] = {0, };

	printf("추가할 문자열1을 입력하세요: "); //security\n\0이 입력될거임.
	fgets(plus1, sizeof(plus1), stdin);
	plus1[strlen(plus1) - 1] = '\0'; //security\0으로 수정. 왜냐? 합칠때 \0부터 합치기에.

	printf("추가할 문자열2을 입력하세요: "); //fact\n\0이 입력될거임.
	fgets(plus2, sizeof(plus2), stdin);	
	strcat(plus1, plus2); //securityfact\n\0이 될거임.

	printf("연결 전: %s\n", origin); // 요건 그냥 "Hello, "
	strcat(origin, plus1); //->Hello, securityfact\n\0으로 됨. origin 의 문자열 끝에 있는 '\0'에서 부터 붙여넣는다는 점을 꼭 기억해야함.
	origin[strlen(origin) - 1] = '\0';
	printf("연결 후: %s\n", origin); //->사실은 윗줄이 없으면 Hello, securityfact\n이 출력됨. 이걸 지울라면 윗줄로 개행문자 제거필요

	printf("복사할 문자열을 입력하세요 : ");
	fgets(copy, sizeof(copy), stdin);
	copy[strlen(copy) - 1] = '\0';	//strcpy로 복사를 하면 문자열의 끝을 알리는 '\0'까지 복사가 된다. 따라서 \0전에 있는 개행문자 삭제필요
	printf("복사 전 : %s\n", origin2);
	strncpy(origin2, copy, strlen(copy)+1); //그냥 strlen만 복사하면 after에서만 끝나지 않음. +1해줘서 \0까지 복사시켜야됨.
	printf("복사 후 : %s", origin2);
}
//과제는 다했으니 내일 함수로 짜서 보내기
