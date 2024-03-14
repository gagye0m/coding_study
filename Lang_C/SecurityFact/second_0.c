#include <stdio.h> 
int main()
{
    int input;

    printf("숫자를 입력해주세요:");
    scanf("%d",&input); //scanf_s는 scanf의 취약점을 해결하기 위해서 새롭게 나온것. 기능은 같음. wsl에서는 안되는듯
    printf("입력한 숫자는 %d입니다\n",input);

    return 0;      
}