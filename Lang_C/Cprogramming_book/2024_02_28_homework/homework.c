#include <stdio.h>
#include <stdlib.h> //exit() 쓰기 위해서 불러옴
//배열길이 26으로 설정한 코드

void func_find_len(char * pstr1, int * len) // 받은 문자열 길이 구하는 함수
{
    for(int i1=0; pstr1[i1]!=0; i1++)
    {
        *len+=1; // 포인터가 가리키는 변수의 값을 1씩 증가
        //*len++; // 포인터가 가리키는 위치가 변경되지만 해당 위치의 값을 변경하지는 않음. 그래서 *len이 가리키는 값은 변경되지 않고, 포인터의 위치만 변경
    }
}

void func_find_wrong_and_well(char *pstr2, int * parr, int len)//함수를 통과시켜서 오류인지 아닌지 확인하는 코드
{
    int distinguish=0; // 구별 변수

    for(int i1=0;i1<26;i1++)
    {
        for(int i2=0;i2<len;i2++)
        {
            if(pstr2[i2]-65 == i1 || pstr2[i2]-65-32 == i1) //arr 안의 수. 즉, 알파벳인지를 구별해야함
            {
                distinguish++; // 만약 abc 받음. 모두 알파벳이다? -> 모두 arr안의 인덱스숫자로 존재한다 -> distingusih = len(3개) 만큼 될거임.
            }
        }
    }

    if(distinguish!=len) // 적다면? 알파벳이 아닌 것이 섞여있다는 얘기
    {
        printf("wrong");
        exit(0); //이거 써도 되나..?
    }
}

void func_investigate_sum(char * pstr, int * parr, int len,int * sum) // 총합 구하는 코드
{
    for(int i1=0; i1<26; i1++)
    {
        for(int i2=0;i2<len;i2++)
        {
            if(pstr[i2]-65 == i1 || pstr[i2]-65-32 == i1)  //ABC~ 이거나 abc~이면 arr리스트의 인덱스를 0으로 저장해줌.
            {
                parr[i1]=0;
            }
        }
    }

    for(int idx1=0; idx1<26;idx1++)
    {
        *sum+=parr[idx1]; //총합만 구하면 됨.
    }
    
    printf("sum : %d\n",*sum);
}

void func_print_str(char * pstr2, int * parr2)
{
    int check = 0; //부족한 알파벳 없는지 체크하는 거
    printf("alpha : ");
    for(int i1 = 0 ; i1<26; i1++)
    {
        if (parr2[i1] == 0) // 값이 0이다? -> 받은 문자이다
        {
            continue;
        }
        
        else
        {
            printf("%c",i1+97); //소문자로 출력하는거같음. 따라서 아스키코드로 치환해줌.
            check++; //부족한 알파벳이 있네? -> check 늘림
        }
    }

    if(check == 0) // 따라서 check가 없다면? -> 부족한 알파벳 없음
    {
        printf("O");
    }

}

int main()
{
    int length = 0, sum=0;
    char str[100]={0,};
    int arr[26]={65,49,67,51,69,53,71,55,73,57,75,79,77,48,66,50,68,52,70,54,72,56,74,78,76,80};
            //   a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
    scanf("%s",str);
    
    func_find_len(str, &length); //길이코드
    func_find_wrong_and_well(str,arr,length);//알파벳말고 다른거 있으면 종료하는 코드
    func_investigate_sum(str,arr,length,&sum); // 없는 알파벳 총합 출력하기
    func_print_str(str,arr); // 없는 알파벳 출력
}
