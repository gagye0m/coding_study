#include <stdio.h>

int main()
{
    int X;
    int n;
    int sum = 0;

    scanf("%d",&X);
    scanf("%d",&n);
    for(int i = 0; i<n; i++)
    {
        int cost = 0,num = 0;
        scanf("%d %d",&cost,&num);
        sum+=cost*num;
    }
    if(sum == X)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}