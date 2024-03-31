#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR 10
void count(char* pstr, int* Count)
{
    for (int i = 0; i < strlen(pstr); i++)
    {
        switch (pstr[i])
        {
        case '0':
            Count[0]++;
            break;
        case '1':
            Count[1]++;
            break;
        case '2':
            Count[2]++;
            break;
        case '3':
            Count[3]++;
            break;
        case '4':
            Count[4]++;
            break;
        case '5':
            Count[5]++;
            break;
        case '6':
            Count[6]++;
            break;
        case '7':
            Count[7]++;
            break;
        case '8':
            Count[8]++;
            break;
        case '9':
            Count[9]++;
            break;
        }
    }
    return;
}

int main(void)
{
    char* str = (char*)calloc(MAX_STR, sizeof(char));
    int Count[10] = { 0, }; //0~9까지의 카운트는 배열 index값으로 접근
    int A = 0, B = 0, C = 0;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    int Multiply = A * B * C;

    sprintf(str, "%d", Multiply);
    count(str, Count);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", Count[i]);
    }

    free(str);
    return 0;
}