#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int v=0,count = 0;
    scanf("%d",&N);
    int* arr=(int*)malloc(N*sizeof(int));

    for(int i = 0; i<N; i++)
    {
        scanf("%d",&arr[i]); //배열에 정수를 담을땐 &붙여줘야함.
    }
    scanf("%d",&v);
    for(int i = 0; i<N; i++)
    {
        if(arr[i]==v)
        {
            count++;
        }
    }
    printf("%d",count);
}