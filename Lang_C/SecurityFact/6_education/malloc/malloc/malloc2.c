#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr_arr;
    int arr_len = 10, add_len = 5, total_len;
    ptr_arr = (int*)calloc(arr_len, sizeof(int));

    if (ptr_arr == NULL)
    {
        printf("�޸��� �����Ҵ翡 �����߽��ϴ�.\n");
        exit(1);
    }

    printf("�������� �Ҵ���� �޸��� �ʱ갪�� ������ �����ϴ�.\n");

    for (int i = 0; i < arr_len; i++)
    {
        printf("%d", ptr_arr[i]);
    }
    total_len = arr_len + add_len;
    ptr_arr = (int*)realloc(ptr_arr, (total_len * sizeof(int)));

    if (ptr_arr == NULL)
    {
        printf("�޸��� �����Ҵ翡 �����߽��ϴ�.\n");
        exit(1);
    }
    printf("\n �߰��� �Ҵ���� �޸��� �ʱ갪�� ������ �����ϴ�.\n");

    for (int i = 0; i < total_len; i++)
    {
        printf("%d", ptr_arr[i]);
    }
    free(ptr_arr);
}