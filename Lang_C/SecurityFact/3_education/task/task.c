#include <stdio.h>

int menu_1() //마름모 출력
{
    int size = 0; 
    printf("마름모의 크기를 입력하세요 : ");
    scanf("%d",&size);

    for(int idx = 1; idx<=size ; idx++) // 1번째 줄 ~ 별 개수 최대 지점까지 반복하는 코드
    {
        for(int i1 = 1; i1<=size-idx; i1++)//공백코드
        {
            printf(" ");
        }

        for(int i2 = 1; i2<=(idx*2)-1;i2++) //별개수 코드
        {
            printf("*");
        }
        
        printf("\n");
    }

    for(int idx2=size-1; idx2>0 ; idx2--) //2번째줄로 바로 받음
    {
        for(int i1=1; i1<=size-idx2; i1++)//공백 코드, 공백은 증가하면서, 별개수는 감소하는 코드가 필요했음. idx2의 값이 점점 줄어들기에, i1의 값을 1부터 증가시켜주면 됨.
        {
            printf(" ");
        }
        
        for(int i2=1; i2<=idx2*2-1; i2++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

int menu_2() //숫자 거꾸로 출력하기
{
    int len=0, temp = 0;
    char num[10000]={0,};
    printf("세자리 이상의 정수를 입력하세요: ");
    scanf("%s",num);

    for(int idx1 = 0; num[idx1]!=0;idx1++) //단, 여기서 num[idx1]은 아스키코드값임, 숫자 0과의 차이 존재. 받은 문자열 길이 구하는 코드
    {
        len++;
    }

    for(int idx2=0; idx2<len-idx2; idx2++)
    {
        temp = num[idx2]; //temp를 통해서 따로 저장을 해주어야 함
        num[idx2] = num[len-idx2-1];
        num[len-idx2-1] = temp;
    }

    for(int idx3 = 0; num[idx3]!=0; idx3++)
    {
        printf(" %c",num[idx3]);
    }
    printf("\n");
}

int menu_3() //소수 판별. 소수를 찾는 가장 빠른 방법은 (받은 숫자 - 1)까지 모두 나누어보는 것
{
    int num=0, check= 0;
    printf("2이상의 정수를 입력하세요 : ");
    scanf("%d",&num);

    for(int idx = 2; idx<num; idx++) // 소수는 1이랑 자기 자신만을 약수로 가짐
    {
        if(num%idx == 0 && num%1==0)
        {
            check++;
        }
    }
    
    if(check==0)
    {
        printf("%d는 소수입니다.",num);
    }

    else
    {
        printf("%d는 소수가 아닙니다.",num);
    }
    printf("\n");
}


int main()
{
    while(1)
    {
        int select=0, finish=0;
        printf("-----------\n1. 마름모 출력\n2.숫자 거꾸로 출력하기 \n3.소수 판별\n4.종료\n-----------\n");
        printf("메뉴를 선택해주세요 : ");
        scanf("%d",&select);
        switch(select)
        {
            case 1 :
                menu_1();
                break;
            case 2 :
                menu_2();
                break;
            case 3 :
                menu_3();
                break;
            case 4 :
                finish++;
                printf("종료합니다.");
                break;                  
        }
        if(finish!=0)
        {
            break;
        }
    }
    return 0;
}