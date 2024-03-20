#include <stdio.h> 
int main()
{
    int num01, num02;

    printf("두 정수를 입력하세요(띄어쓰기로 구분): ");
    scanf("%d %d",&num01,&num02);
    printf("입력하신 두 정수의 합은 %d입니다.\n",num01+num02);

    return 0;
}