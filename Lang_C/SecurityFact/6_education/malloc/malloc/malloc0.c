#include <stdio.h>

int main()
{
    char* double_array[3] = { "pwn","rev","web" };
    char** double_array_ad = double_array;
    printf("%p\n", double_array_ad); //double_array�� �ּ�
    printf("%p\n", *double_array_ad); //double array�� ù���� ����� �ּ�
    printf("%c\n", **double_array_ad);
    printf("%c\n", *(*double_array_ad + 1)); //double array�� ù��° ��ҿ� �����ؼ� �ּҸ� 1��ŭ �ø�
    printf("%c\n", *(*double_array_ad + 2));

    printf("%c\n", *(*double_array_ad + 4));
    printf("%c\n", *(*(double_array_ad+1) + 1)); //�ּҸ� 1�ø��� ����
    return 0;
}