#include <stdio.h> 
int main()
{
    int choice = 0;
    float temperature_sup=0, temperature_hwa=0;
    printf("온도변환기\n");
    printf("1.섭씨를 화씨로 변환\n2.화씨를 섭씨로 변환\n");
    printf("선택하세요 : ");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("섭씨 온도를 입력하세요 : ");
        scanf("%f",&temperature_sup);
        printf("화씨온도 : %.2f",(temperature_sup*9/5)+32);
    }

    else if(choice==2)
    {
        printf("화씨 온도를 입력하세요 : ");                                                                               
        scanf("%f",&temperature_hwa);
        printf("섭씨온도 : %.2f",(temperature_hwa-32)*5/9);
    }

    else
    {
        printf("올바른 옵션을 선택하세요");
        return 0;
    }
}