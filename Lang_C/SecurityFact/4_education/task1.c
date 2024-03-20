#include <stdio.h>

int swap(int a, int b) //인자전달의 기본 원리는 복사다
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x =1, y=2;
    
    printf("%d %d\n",x,y);
    swap(x,y);
    printf("%d %d\n",x,y);
    
    return 0;
}