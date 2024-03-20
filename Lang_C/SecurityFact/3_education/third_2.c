#include <stdio.h>

int main()
{
    int num =0;
    int sum =0;
    while(num<=10)
    {
        num++;
        sum +=num;
        printf("%3d %3d\n",num,sum); //%3d는 칸수를 띄는 거임.
    }
}