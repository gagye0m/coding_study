#include <stdio.h>

int main()
{
    int A,B;
    
    while(scanf("%d %d",&A,&B)!=EOF) //EOF == end of file. scanf는 오류가 나면 EOF의 값, -1을 반환함. 조건이 참일때 반복하므로, scanf를 밑에 따로 안써줘도 괜찮음.
    {
        printf("%d\n",A+B);
    }
}