#include <stdio.h> 
int main()
{
    char ch = 'a';
    switch(ch)
    {
        case 'a':
        case 'A':
            printf("이 학생의 학점은 A입니다.\n");
            break;
            
        case 'b':
        case 'B':
            printf("이 학생의 학점은 B입니다.\n");
            break;

        case 'c':
        case 'C':
            printf("이 학생의 학점은 C입니다.\n");
            break;

        case 'd':
        case 'D':
            printf("이 학생의 학점은 D입니다.\n");
            break;

        case 'e':
        case 'E':
            printf("이 학생의 학점은 E입니다.\n");
            break;
            
        default:
            printf("학점을 정확히 입력해주세요!(A,B,C,D,E,F)");
            break;

    }
}