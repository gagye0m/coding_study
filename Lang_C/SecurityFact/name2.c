#include <stdio.h>

int main()
{
    int num1 = 1, num2= 2, num3 =3, num4=4, num5=5;
    int add = num1 + num2 + num3 + num4+ num5;
    //double quentient = num5 / num1; 이렇게 선언해서 해도 됨
    //double remainder = num5 % num1; 이렇게 선언해서 해도 됨
    printf("add is %d\n",add);
    printf("minus is %d\n",num5-num1);
    printf("quentient is %lf\n",num5/num1);
    printf("remainder is %lf\n",num5%num1); //경고가 뜨는거지 되긴함. 강제형변환이라 그런듯
    printf("char is %c",97);
}
