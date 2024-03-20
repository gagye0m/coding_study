#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="    Hello, World!";
    printf("Original: '%s'\n",str);

    char * begin = str;
    char * dest = str;

    while(*begin != '\0' && (*begin == ' ' || *begin == '\t' ||*begin =='\n'))
    {
        begin ++;
    }

    if(begin != str)
    {
        while (*begin != '\0')
        {
            *dest++=*begin++;
        }
        *dest = '\0';
    }

    printf("trim: '%s'\n",str);
}
