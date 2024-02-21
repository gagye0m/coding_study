#include <stdio.h>

int main()
{ 
    int a=0x40414243;
    char *b = &a;
    b = b+1;
    
    printf("%c",*b);
}