#include <stdio.h>

int main()
{
    int num1=2;
    long num2=1;

    int * pnum1 = &num1;
    long * pnum2 = &num2;

    if(num1>num2)
    {
        printf("1");
    }
    
    if(*pnum1 > *pnum2)
    {
        printf("2");
    }

    if(sizeof(*pnum1)<sizeof(*pnum2))
    {
        printf("3");
    }   

}