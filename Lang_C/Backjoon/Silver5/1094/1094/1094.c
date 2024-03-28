#include <stdio.h>
int Half_Divide(int stick)
{
    int Half = stick / 2;
    return Half;
}
int main()
{
    int Stick=64;
    int X = 0, Sum=0, left=0,count=0; //left변수가 중요. 자르고 안버린 것들의 합
    scanf_s("%d", &X);

    while (Stick>0)
    {
        Sum = Stick + left;
        if (Sum > X)
        {
            int HalfMin = Half_Divide(Stick);

            if (left+HalfMin>=X)
            {
                Stick = HalfMin; //하나가 될때까지 담기
                continue;
            }

            else
            {
                count++;
                left = left + HalfMin; //나머지의 값을 저장해줌. 16 16이면 16하나 저장.
                Stick = HalfMin;
            }
        }
        else if (Sum == X)
        {
            count++;
            break;
        }
    }
    printf("%d", count);
    return 0;
}