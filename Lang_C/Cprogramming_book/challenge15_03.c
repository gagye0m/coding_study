#include <stdio.h>

void odd_number(int *parr,int odd_carried_num,int n) //홀수
{
    parr[n]=odd_carried_num;
}

void even_number(int *parr,int even_carried_num, int n) //짝수
{
    parr[9-n]= even_carried_num;
}

int main()
{
    int arr[10];
    int odd_num=0;
    int even_num=0;

    printf("총 10개의 숫자 입력\n");
    
    for(int i=0;i<10;i++) //10번 입력
    {
        int num=0;
        printf("입력 : ");
        scanf("%d",&num);
        
        if(num%2!=0)
        {
            odd_number(arr,num,odd_num); //1
            odd_num++;
        }

        else
        
        {
            even_number(arr,num,even_num);//2
            even_num++;
        }
    }

    printf("배열 요소의 출력: ");
    for(int idx=0; idx<10; idx++)
    {
        printf("%d ",arr[idx]);
    }
}