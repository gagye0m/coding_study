#include <stdio.h> 
int main()
{
    int num;
    printf("정수를 입력해주세요:");
    scanf("%d",&num);

    if(num<5)
    {
        printf("입력하신 수는 5보다 작습니다.\n");
    }
    
    else if(num==5)
    {
        printf("입력하신 수는 5입니다.\n");
    }

    else
    {
        printf("입력하신 수는 5보다 큽니다.\n");
    }        
}