#include <stdio.h>

int main()
{
    char str1[100]={0,};
    int i=0;

    scanf("%s",str1);
    char big=str1[0];

    while(str1[i]!=0)
    {
        if(big<str1[i+1])
        {
            big = str1[i+1];
            i++;
        }

        else
        {
            i++;
        }
    }
    printf("%c",big);
}