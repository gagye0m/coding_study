#include <stdio.h>

int main()
{
    int a=12;
    int * pa = &a;

    printf("%d\n",a);
    printf("%#x\n",&a); //#은 0x가 뜨게 하기 위해서 붙여줌. 주소는 거의 16진수로 저장됨.
    printf("%#x\n",pa);
    printf("%d\n",*pa);

}