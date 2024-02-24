#include <stdio.h>

int main ()
{
    int length = 0, sum=0;
    int arr[100]={0,};
    scanf("%d",&length);
    
    for(int idx=0; idx<length; idx++)
    {
        scanf("%1d",&arr[idx]); //%1d씩하면 공백없어도 무조건 1칸씩 받아들임
        sum = sum + arr[idx];
    }

    printf("%d",sum);
}