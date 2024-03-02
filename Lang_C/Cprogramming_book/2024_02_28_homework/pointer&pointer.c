#include <stdio.h>

void Swap(int * sp1, int * sp2)
{
    int * temp = sp1; //p1 =&num1임.
    printf("%d\n",*temp);
    *sp1=*sp2;
    *sp2=*temp; //이건 왜 안되지? -> sp1이 가리키는 주소는 저장을 할 수 있음. 
                //단, 변수는 못바꿈. sp1의 변수를 윗줄에서 바꿔버렸기 때문에 바뀐 변수를 temp가 가리키는 꼴이 되어서 안됨
    /* 
    *sp2에 temp의 값을 할당하는 것은 실제로 sp1이 가리키는 변수의 값을 sp2가 가리키는 변수로 복사하는 것이 됩니다. 
    이로 인해 sp1이 가리키는 변수의 값이 sp2가 가리키는 변수로 변경되고, 이후에 *sp2에는 이 변경된 값이 할당되게 됩니다
    */
}

int main()
{
    int num1=10, num2=20;
    int *ptr1, *ptr2;
    ptr1=&num1,ptr2=&num2;
    Swap(ptr1,ptr2);
    printf("%d %d",*ptr1, *ptr2);
}