#include <stdio.h> 
int main()
{
    int num = 2;
    switch(num)
    {
        case 1:
            printf("입력하신 수는 1입니다.\n");
            break;
        case 2:
            printf("입력하신 수는 2입니다.\n");
            break;
        case 3:
            printf("입력하신 수는 3입니다.\n");
            break;
        case 4:
            printf("입력하신 수는 4입니다.\n");
            break;
        case 5:
            printf("입력하신 수는 5입니다.\n");
            break;
        default:
            printf("1부터 5까지의 수만 입력해주세요!");
            break;
    }
}