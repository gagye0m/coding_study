#include <stdio.h>

int main()
{
    char* double_array[3] = { "pwn","rev","web" };
    char** double_array_ad = double_array;
    printf("%p\n", double_array_ad); //double_array의 주소
    printf("%p\n", *double_array_ad); //double array의 첫번쨰 요소의 주소
    printf("%c\n", **double_array_ad);
    printf("%c\n", *(*double_array_ad + 1)); //double array의 첫번째 요소에 접근해서 주소를 1만큼 올림
    printf("%c\n", *(*double_array_ad + 2));

    printf("%c\n", *(*double_array_ad + 4));
    printf("%c\n", *(*(double_array_ad+1) + 1)); //주소를 1올리고 접근
    return 0;
}