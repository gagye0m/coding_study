#include <stdio.h>

int main()
{
    int A=0,B=0,C=0;
    scanf("%d %d %d",&A,&B,&C);

    if(A==B && A==C)
    {
        printf("%d",10000+A*1000);
    }

    else if(A==B & A!=C)
    {
        printf("%d",1000+A*100);
    }

    else if(A!=B && A==C)
    {
        printf("%d",1000+A*100);
    }

    else if(A!=B && B==C)
    {
        printf("%d",1000+B*100);
    }

    else if(A!=B && A!=C && B!=C)
    {
        int max = A; //A부터 저장
        if(max<B) 
        {
            max = B;
        }

        if(max<C) // 이렇게 적어야 A,B,C 순서대로 훑을 수 있음
        {
            max = C;
        }
        printf("%d",max*100);
    }
}