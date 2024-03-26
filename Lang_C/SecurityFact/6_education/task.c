#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * ptr_arr=0;
    int arr_len = 0, add_len = 0, total_len=0;
    printf("배열의 길이를 정해주세요: ");
    scanf("%d",&arr_len);
    ptr_arr = (int*)calloc(arr_len,sizeof(int)); //calloc은 값을 0으로 초기화해서 할당시킨다.

    if(ptr_arr == NULL)
    {
        printf("메모리의 동적할당에 실패했습니다.\n");
        exit(1);
    }

    printf("늘어날 배열의 길이를 정해주세요: ");
    scanf("%d",&add_len);

    total_len = arr_len+add_len;
    ptr_arr = (int*)realloc(ptr_arr,(total_len*sizeof(int))); //이미 할당된 애를 할당된 크기를 바꿔줄때 사용
                                                              //뒤의 인자만큼 기존의 칸에서 더하는게 아니라 malloc이나 calloc의 두번째 인자를 realloc의 두번째 인자로 변경한다고 생각하자.

    if(ptr_arr == NULL)
    {
        printf("메모리의 동적할당에 실패했습니다.\n");
        exit(1);
    }

    for(int i =0; i<total_len; i++)
    {
        printf("%d ",ptr_arr[i]);
    }

    free(ptr_arr);
}