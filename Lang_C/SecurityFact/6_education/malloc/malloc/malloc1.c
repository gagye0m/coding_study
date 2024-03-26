#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr_arr;
    int arr_len = 10;
    ptr_arr = (int*)malloc(arr_len * sizeof(int));

    if (ptr_arr == NULL)
    {
        printf("메모리의 동적할당에 실패했습니다.\n");
        exit(1);
    }

    printf("동적으로 할당받은 메모리의 초깃값은 다음과 같습니다.\n");

    for (int i = 0; i <= arr_len; i++)
    {
        printf("%d", ptr_arr[i]);
    }
    free(ptr_arr);
}