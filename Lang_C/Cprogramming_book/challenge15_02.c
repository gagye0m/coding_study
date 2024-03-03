#include <stdio.h>
//shift연산자를 이용해서 생각해보기

void divide (int n) //12
{
    int arr[100]={0,};
    int arr2[100]={0,};
    int count = 0;
    for(int idx=0;n>0;idx++)
    {
        arr[idx]=n%2;
        n=n/2;
        count++; //몫의 횟수
    }
    
    for(int idx2=0;count>=1;idx2++,count--) //몫의 횟수만큼 반복시킴
    {
        arr2[idx2]=arr[count-1];
        printf("%d",arr2[idx2]);
    }

}

int main()
{
    int num=0; //12
    scanf("%d",&num);
    divide(num);
}