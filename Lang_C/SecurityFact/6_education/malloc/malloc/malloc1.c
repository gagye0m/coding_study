#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr_arr;
    int arr_len = 10;
    ptr_arr = (int*)malloc(arr_len * sizeof(int));

    if (ptr_arr == NULL)
    {
        printf("�޸��� �����Ҵ翡 �����߽��ϴ�.\n");
        exit(1);
    }

    printf("�������� �Ҵ���� �޸��� �ʱ갪�� ������ �����ϴ�.\n");

    for (int i = 0; i <= arr_len; i++)
    {
        printf("%d", ptr_arr[i]);
    }
    free(ptr_arr);
}