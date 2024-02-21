#include <stdio.h>

int main()
{
    int i=0;
    char word[100]={0,};
    scanf("%s",word);

    while(word[i] != 0)
    {
        i++;
    }

    printf("단어의 개수 : %d",i);
    
}