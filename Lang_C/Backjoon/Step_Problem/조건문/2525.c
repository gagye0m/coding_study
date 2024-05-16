#include <stdio.h>

int main()
{
    int A=0,B=0,C=0;
    scanf("%d %d",&A,&B);
    scanf("%d",&C);

    int Min = B +C;
    if(Min<60)
    {
        printf("%d %d",A,Min);
    }

    else if(Min>=60)
    {
        A += Min/60;
        Min %= 60;

        if(A>=24)
        {
            A%=24;
        }

        printf("%d %d",A,Min);
    }
}