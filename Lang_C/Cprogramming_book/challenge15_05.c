#include <stdio.h>

void Bubble_1(int * arr1, int num1)
{
    int temp1=0;

    for(int i=1; i<=num1;i++)
    {
        for(int j=0;j<num1-i;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp1 = arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp1;                
            }
        }
    }
    
    for(int idx2=0; idx2<num1; idx2++)
    {
        printf("%d ",arr1[idx2]);
    }
}

void Bubble_2(int * arr2, int num2)
{
    int temp2=0;

    for(int i=1; i<=num2;i++)
    {
        for(int j=0;j<num2-i;j++)
        {
            if(arr2[j]<arr2[j+1])
            {
                temp2 = arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp2;                
            }
        }
    }
    
    for(int idx2=0; idx2<num2; idx2++)
    {
        printf("%d ",arr2[idx2]);
    }
}

int main()
{
    int num=0, choice=0;
    int arr[100]={0,};

    printf("숫자개수:");
    scanf("%d",&num); //4
    
    printf("입력: \n");
    for(int idx=0; idx<num; idx++)
    {
        scanf("%d",&arr[idx]);
    }

    printf("오름차순이면 1, 내림차순이면 2번을 누르시오: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        Bubble_1(arr,num);
    }

    else if(choice == 2)
    {
        Bubble_2(arr,num);
    }
    
    else
    {
        return 0;
    }
}