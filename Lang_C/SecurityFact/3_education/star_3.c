#include <stdio.h>

int main()
{
    for(int i = 1; i<=6;i++)
    {
        for(int k=5-i;k>=0;k--)
        {
            printf(" ");
        }

        for(int j = 1; j<=(2*i)-1; j++) //홀수로 증가
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(int i2=5;i2>=1;i2--)
    {
        for(int k2=1;k2<=5-i2+1;k2++) // 첫번째 칸부터 바로 띄어쓰기 해야되서 +1해줌.
        {
            printf(" ");
        }

        for(int j = (2*i2)-1; j>=1; j--) //홀수로 증가
        {
            printf("*");
        }
        printf("\n");        
    }
    return 0;
}