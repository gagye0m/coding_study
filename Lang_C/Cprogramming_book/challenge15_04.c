#include <stdio.h>

void sort_function(char * pstr1, char * pstr2, int len)
{
    int count=0;//세는거 필요함. 배열 요소끼리 비교했을때, 요소가 다르면 count++; if count가 0이면 printf("회문입니다");
    for(int i=0;i<len;i++)
    {
        pstr2[i]=pstr1[len-1-i];
    }

    for(int i2=0; i2<len ; i2++)
    {
        if(pstr1[i2]!=pstr2[i2])
        {
            count++;
        }
    }

    if(count==0)
    {
        printf("회문입니다.");
    }

    else
    {
        printf("회문이 아닙니다.");
    }
}

int main()
{
    int idx=0;
    char str[100]={0,};
    char str2[100]={0,};

    printf("문자열입력: ");
    scanf("%s",str); 

    while(str[idx] != 0)
    {
        idx++;
    }

    sort_function(str,str2,idx);
}