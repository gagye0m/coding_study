#include <stdio.h>
//배열은 동일한 타입의 데이터만 저장할 수 있다.

int main()
{
    int arr[3]={1,2,3};
    
    for(int i = 0; i<3; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}