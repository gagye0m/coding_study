#include <stdio.h>

//블랙잭. 첫줄에 카드개수 N과 넘으면 안되는 수 M
int main()
{
    int N=0, M=0;
    int arr[100]={0,};
    int max=0;

    scanf("%d %d",&N,&M);

    for(int index=0; index<N; index++)
    {
        scanf("%d",&arr[index]);
    }

    /*맨 앞부터,작은수 3개 더해버림
    if 5 6 7 8 9를 받았다고 가정
    맨 앞자리 수 = 5,6,7까지만 가면 됨. N-3까지 ++하며 반복
        두번째 자리 수 -> 6,8,9가 가능 맨 앞자리보다 1큰상태로 똑같이 ++하며 반복
            세번째자리수 ->7 8 9가 가능, 두번째자리수보다 1큰 상태로 똑같이 ++하며 반복.
    */
    for(int idx=0; idx<N-2; idx++)
    {
        for(int idx2=idx+1;idx2<N-1 ; idx2++) 
        {
            for(int idx3=idx2+1; idx3<N; idx3++)
            {
                int sum = arr[idx]+arr[idx2]+arr[idx3];
                if(sum<=M && max<sum) // max가 아무거나 저장되지 않게, 저장되었던 값보다 크면 새롭게 저장.
                {
                    max = sum;
                }
            }
        }
    }
    printf("%d",max);
}