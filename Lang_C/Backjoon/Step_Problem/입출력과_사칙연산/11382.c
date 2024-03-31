#include <stdio.h>

int main()
{
    long long A,B,C=0;
    scanf("%lld %lld %lld",&A,&B,&C); //int로는 표현 안되는 수들의 덧셈이었음. 자연수란 말 없으니 unsigned X
    printf("%lld",A+B+C);
}