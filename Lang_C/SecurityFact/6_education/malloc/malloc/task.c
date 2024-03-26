#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr_arr = 0;
    int arr_len = 0, add_len = 0, total_len = 0;
    printf("배열의 길이를 정해주세요: ");
    scanf_s("%d", &arr_len);
    ptr_arr = (int*)calloc(arr_len, sizeof(int)); //값을 0으로 초기화해서 할당

    if (ptr_arr == NULL)
    {
        printf("메모리의 동적할당에 실패했습니다.\n");
        exit(1);
    }

    printf("늘어날 배열의 길이를 정해주세요: ");
    scanf_s("%d", &add_len);

    total_len = arr_len + add_len;
    ptr_arr = (int*)realloc(ptr_arr, (total_len * sizeof(int))); //이미 할당된 애를 할당된 크기를 바꿔줄때 사용

    if (ptr_arr == NULL)
    {
        printf("메모리의 동적할당에 실패했습니다.\n");
        exit(1);
    }

    for (int i = 0; i < total_len; i++)
    {
        printf("%d ", ptr_arr[i]);
    }

    free(ptr_arr);
}