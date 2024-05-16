#include <stdio.h>

int main()
{
    int N=0;
    scanf("%d", &N);

    for(int i = 1; i<=N; i++)
    {
        for(int k=N-i;k>=1;k--) // 공백이 줄에 맞춰서 점점 줄어들어야함.
        {
            printf(" ");
        }
        for(int j = 1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}