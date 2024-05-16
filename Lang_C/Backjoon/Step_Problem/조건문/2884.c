#include <stdio.h>

int main()
{
    int H, M;
    scanf("%d %d",&H,&M);

    if(H!=0)
    {
        if(M<45)
        {
            printf("%d %d",H-1,60-(45-M));
        }
        else
        {
            printf("%d %d",H,M-45);
        }
    }
    
    else
    {
        if(M<45)
        {
            printf("23 %d",60-(45-M));
        }

        else
        {
            printf("%d %d",H,M-45); //M이 45보다 클때는 시간숫자 안바껴도 괜찮음.
        }
    }
}