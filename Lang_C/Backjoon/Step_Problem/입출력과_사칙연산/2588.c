#include <stdio.h>

int main()
{
    int a=0,b=0;
    int third,fourth,fifth=0;
    scanf("%d",&a);
    scanf("%d",&b);
    
    third=a*(b%10);
    printf("%d\n",third);
    
    fourth=a*(b%100-b%10);
    printf("%d\n",fourth/10);

    fifth = a*(b-(b%100));
    printf("%d\n",fifth/100);
    
    printf("%d",third+fourth+fifth);
}