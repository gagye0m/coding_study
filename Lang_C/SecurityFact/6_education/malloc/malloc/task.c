#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr_arr = 0;
    int arr_len = 0, add_len = 0, total_len = 0;
    printf("�迭�� ���̸� �����ּ���: ");
    scanf_s("%d", &arr_len);
    ptr_arr = (int*)calloc(arr_len, sizeof(int)); //���� 0���� �ʱ�ȭ�ؼ� �Ҵ�

    if (ptr_arr == NULL)
    {
        printf("�޸��� �����Ҵ翡 �����߽��ϴ�.\n");
        exit(1);
    }

    printf("�þ �迭�� ���̸� �����ּ���: ");
    scanf_s("%d", &add_len);

    total_len = arr_len + add_len;
    ptr_arr = (int*)realloc(ptr_arr, (total_len * sizeof(int))); //�̹� �Ҵ�� �ָ� �Ҵ�� ũ�⸦ �ٲ��ٶ� ���

    if (ptr_arr == NULL)
    {
        printf("�޸��� �����Ҵ翡 �����߽��ϴ�.\n");
        exit(1);
    }

    for (int i = 0; i < total_len; i++)
    {
        printf("%d ", ptr_arr[i]);
    }

    free(ptr_arr);
}