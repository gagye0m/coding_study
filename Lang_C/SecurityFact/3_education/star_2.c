#include <stdio.h>

int main()
{
    for(int i = 1; i<=5;i++)
    {
        for(int k = 5-i; k>0 ; k--)
        {
            printf(" ");
        }
  
        for(int j = 1; j<=i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}