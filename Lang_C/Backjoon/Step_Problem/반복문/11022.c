#include <stdio.h>

int main()
{
    int Test=0;
    scanf("%d", &Test);

    for(int i = 1; i<=Test; i++)
    {
        int A, B = 0;
        scanf("%d %d",&A,&B); //scanf와 printf는 충분히 빠르다
        printf("Case #%d: %d + %d = %d\n",i,A,B,A+B);
    }
}