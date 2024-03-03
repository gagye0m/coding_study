#include <stdio.h>

int length(char * pnumber) //배열의 길이 구하는 함수
{
    int length = 0;
    for(int i=0;pnumber[i]!=0;i++)
    {
        length++;
    }
    
    return length;
}

int parser_vertical(char * pnumber,int len)
{
    int check=0;
    for(int i=0;i<len;i++)
    {
        for(int j=i+1; j<len;j++)
        {
            if(pnumber[i]==pnumber[j]) // 03142에서 겹치는게 없나 확인하기 위해 하나씩 확인해줌
            {
                check++;   
            }
        }
    }
    return check; //check == 0이다? 겹치는게 없었다
}

int func_abs(int num1,int num2) //차이 구하고 절댓값으로 바꿔주는 함수
{
    int minus = num1-num2;

    if (minus<0)
    {
        minus=-minus;
    }

    return minus;
}


int parser_Daegak(char * pnumber, int len)//대각선에 퀸이 존재하는지 검토하는 함수
{
    int check=0;
    for(int i=0; i<len; i++)
    {
        if(check!=0)
        {
            break;
        }

        for(int j=i+1; j<len;j++)
        {
            if(pnumber[i]>=pnumber[j]) // 큰수, 작은수 구별해서 빼주고 변수의 차이는 함수에 넣어서 계산해버릴거임
            {
                if(pnumber[i]-pnumber[j] == func_abs(i,j))
                {
                    check++;
                }  
            }

            else
            {
                if(pnumber[j]-pnumber[i] == func_abs(i,j))
                {
                    check++;
                }                
            }
        }

    }

    return check; // 이러면 함수에 check값이 반환됨. check가 0이다? -> 대각이 없었다 / 0이 아니다? -> 대각이 있었다
}

int main()
{
    int len = 0, check_vertical=0, check_Daegak=0; // 길이, 세로, 대각 변수 선언
    char number[100]={0,}; 
    scanf("%s",number); // 03142 - > number[0],[1]...이 그냥 행(가로번호)이됨.
    
    len = length(number); //길이구하는 코드


//##출력부분##
    if(parser_vertical(number,len) != 0) //만약에 입력받은 숫자가 겹치면(=같은 세로줄에 존재) 종료.
    {
        printf("wrong");
        return 0;
    }
    
    if (parser_Daegak(number,len) != 0) // 이 값이 0 이 아니면 ? -> 대각에 퀸이 존재
    {
        printf("검증 결과 실패");
        return 0;
    }

    else
    {
        printf("검증 결과 성공");
        return 0;
    }
}