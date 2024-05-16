#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int X=0;
    scanf("%d %d",&N,&X);
    int* A=(int*)malloc(N*sizeof(int));

    for(int i = 0; i<N; i++)
    {
        scanf("%d",&A[i]); //배열에 정수를 담을땐 &붙여줘야함.
        if(A[i]<X)
        {
            printf("%d ",A[i]);
        }
    }
}