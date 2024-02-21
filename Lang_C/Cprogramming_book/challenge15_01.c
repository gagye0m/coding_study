#include <stdio.h>

void odd_number(int *parr, int len)//홀수
{
    printf("짝수출력: ");
    for(int i=0 ; i<len ; i++)
    {
        if(parr[i] %2 == 0)
        {
            printf("%d,",parr[i]);
        }
    }
}

void even_number(int *parr, int len)//짝수
{
    printf("홀수출력: ");
    for(int i2=0 ; i2<len ; i2++)
    {
        if(parr[i2] % 2 != 0)
        {
            printf("%d,",parr[i2]);
        }
    }
}


int main()
{
    int arr[10]={0,};

    printf("총 10개의 숫자 입력\n");
    
    for(int i=0;i<10;i++)
    {
        printf("입력 : ");
        scanf("%d",&arr[i]);
    }

    even_number(arr, sizeof(arr)/sizeof(int));
    printf("\n");
    odd_number(arr, sizeof(arr)/sizeof(int));

}