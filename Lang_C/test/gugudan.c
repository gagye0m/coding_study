#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i = 0;
    int input = 0;
    int loop = 0;

    printf("Input : ");
    scanf("%d", &input);

    while (loop < input)
    {
        printf("\n");
        loop++;
        printf("%d ´Ü\n", loop);
        i = 1;
        while (i <= loop)
        {
            printf("%d X %d = %d\n", loop, i, loop * i);
            i++;
            if (i > loop)
                break;
        }
    }


}