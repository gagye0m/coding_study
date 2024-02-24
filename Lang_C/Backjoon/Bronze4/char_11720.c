#include <stdio.h>
//문자열로 받아서 처리하기. 공백문자를 빼는건 어떨까? //이거 성진쌤한테 여쭤보기.

int main ()
{
    int length = 0, sum=0;
    char arr[100]={0,};
    scanf("%d",&length);
    
    for(int idx=0; idx<length; idx++)
    {
        scanf("%c",&arr[idx]); 
        sum = sum + arr[idx];
    }

    printf("%c",sum);
}