#include <stdio.h>
#include <unistd.h>
/*write함수를 사용할거임. 아스키코드가 각 문자마다 존재하기 때문에 int형일때 코드와 크게 변화가 없음
값 자체를 비교하는 식으로 코드를 짰기 때문에 문자형태로만 바꿔주어도 0~9까지의 문자는 순차적인 아스키코드값을 가지고 있기에
손쉽게 비교가 가능할 것으로 보임*/

void ft_print_comb(void)
{
    char num1='0'; 
    char num2='1';
    char num3='2';
    char comma=',';
    char divide = ' ';//printf와 달리 공백을 바로 출력 못해줘서 공백 변수를 추가함

    while(num1<='7')//문제에 나온 3자리수는 마지막 첫째자리수가 7임, 따라서 num1이 7될때까지만 반복
    {
        while(num3<='9')//셋째자리 숫자가 9가 되기전까지 자리수 증가 필요
        {
    
            if(num1>=num2)//num1이 num2보다 크거나 같으면 num2올려줌(오름차순 조건!)
            {
                num2++;
                continue; //위로 올라가서 조건 만족때까지 무한반복
            }
            
            else if(num2>=num3)//num2가 num3보다 크거나 같으면 num3올려줌(오름차순 조건!)
            {
                num3++;
                continue;
            }

            write(1,&num1,1);
            write(1,&num2,1);
            write(1,&num3,1); //write를 써서 각 주소에 할당하는 숫자를 1바이트씩 출력함
            /*write(표준출력,할당된 변수주소,바이트값)*/
            
            if(num1=='7') 
            {
                return;
            }

            write(1,&comma,1);
            write(1,&divide,1);
            //마지막에도 공백이 추가되길래 어떻게 해결할지 고민하다가 공백전에 프로그램 종료시키는 걸로 해결

            if(num2=='8' && num3=='9') //두번째자리와 세번째 자리가 동시에 8,9로 끝났을때
            {
                num2 = '1';//사실 0으로 대입해도 되는데 헷갈리지 않게 맨 처음에 아스키코드값과 동일하게 해줌
                num3 = '2';//마찬가지
                num1++;//첫째자리수 하나 증가시켜서 0->1로 진행
                continue;
            }

            else if(num3=='9')//세번째자리 숫자가 9가 딱 됐을시(첫째자리 증가 X 식)
            { 
                num2++;//둘째자리숫자가 2로 증가
                num3 = '2';//맨 처음에 초기화한 값과 동일하게 해줌
            }
            num3++;
        }
        
    }
}

int main()
{
    ft_print_comb();
}