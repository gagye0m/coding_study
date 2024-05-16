#include <stdio.h>

int main()
{
    int Test=0;
    scanf("%d", &Test);

    for(int i = 0; i<Test; i++) //백준은 출력받고 바로 출력하면 됨.
    {
        int A, B = 0;
        scanf("%d %d",&A,&B);
        printf("%d\n",A+B);
    }
}