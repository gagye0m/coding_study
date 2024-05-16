#include <stdio.h>
/*입력과 출력 스트림은 별개이므로, 
*테스트케이스를 전부 입력받아서 저장한 뒤 전부 출력할 필요는 없다. 
*테스트케이스를 하나 받은 뒤 하나 출력해도 된다.*/

int main()
{
    int Test=0;
    scanf("%d", &Test);

    for(int i = 0; i<Test; i++)
    {
        int A, B = 0;
        scanf("%d %d",&A,&B); //scanf와 printf는 충분히 빠르다
        printf("%d\n",A+B);
    }
}