#include <stdio.h>

int main()
{
    int idx=0, i=0;
    char str1[100]={0,};
    char str2[100]={0,};
    scanf("%s",str1);

    while(str1[idx] != 0)
    {
        idx++; // 단어의 개수 나옴
    }

    //printf("%d",idx);
    while(str1[i] != 0)
    {
        str2[i]=str1[idx-1];
        i++;
        idx--;
        
    }
    printf("%s",str2);
    
}