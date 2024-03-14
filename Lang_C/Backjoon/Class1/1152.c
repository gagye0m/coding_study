#include <stdio.h>

//알고리즘 틀린거같음. 다시풀어보기
int find_word(char* pword)
{
    int i=0, Big = 0, check_null = 0;
    
    while(1)
    {
        if(check_null>Big+1) //만약 null이 대문자 개수보다 2개이상이 된다? 더이상 단어가 없다는 뜻
        {
            break;
        }
                
        if(pword[i]==0 || pword[i]==32) //공백이 껴져있을때
        {
            check_null++;
        }

        if(65<=pword[i] && pword[i]<=90)//대문자 체크
        {
            Big++;
        }

        i++;
    }

    return Big;
}

void scanf_str(char * pword)
{
    int i=0, Big = 0, check_null = 0;
    while(1)
    {
        if(check_null>Big+1) //만약 null이 대문자 개수보다 2개이상이 된다? 더이상 단어가 없다는 뜻
        {
            break;
        }

        scanf("%s",pword);
                
        if(pword[i]==0 || pword[i]==32) //공백이 껴져있을때
        {
            check_null++;
        }

        if(65<=pword[i] && pword[i]<=90)//대문자 체크
        {
            Big++;
        }

        i++;
    }    
}

int main()
{
    int number = 0;
    char word[100] = {0,};
    /*공백문자 나올때까지 for문으로 돌리면 될거같음*/

    scanf_str(word);
    printf("%s",word);
    //number = find_word(word);
    //printf("%d",number);
    

}