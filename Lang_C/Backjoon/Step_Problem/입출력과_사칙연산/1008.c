#include <stdio.h>

int main()
{
    int a,b=0;
    scanf("%d %d",&a,&b);
    printf("%.9lf", (double)a/(double)b); //double형으로 강제형변환. 변수앞에 자료형써주기
    return 0;
}