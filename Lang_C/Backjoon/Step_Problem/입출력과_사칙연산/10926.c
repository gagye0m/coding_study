#include <stdio.h>

int main()
{
    char a[50]={0,};
    char b[4]="??!"; //char는 단일문자만 저장함. 문자열을 저장하려면 string변수를 선언해도 되긴함. 근데 이러면 라이브러리써야됨.
                    //그냥 앞으로 문자열은 주로 배열에다가 할당하기.
    scanf("%s",a);
    printf("%s%s",a,b);
}