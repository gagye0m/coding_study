#include <stdio.h>

//변수나 수식에 (double)i/2 과 같이쓰면 타입캐스팅으로 형변환이 가능.
//*ptr++ => 주소를 올린뒤 그 주소를 참조함.
//(*ptr)++ => 접근을 한뒤에 1더함.

int main()
{
    int elm0 = 523;
    int elm1 = 2354;
    int *pelm0 =&elm0;
    int *pelm1 =&elm1;
    
    printf("pelm0의 값 : %p\n",pelm0);
    printf("pelm1의 값 : %p\n",pelm1);

    pelm0++;
    pelm1++;

    printf("pelm0의 값: %p\n",pelm0);
    printf("pelm1의 값: %p\n",pelm1);

    return 0;
}
