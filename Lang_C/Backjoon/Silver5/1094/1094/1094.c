#include <stdio.h>
int Half_Divide(int stick)
{
    int Half = stick / 2;
    return Half;
}
int main()
{
    int Stick=64;
    int X = 0, Sum=0, left=0,count=0; //left������ �߿�. �ڸ��� �ȹ��� �͵��� ��
    scanf_s("%d", &X);

    while (Stick>0)
    {
        Sum = Stick + left;
        if (Sum > X)
        {
            int HalfMin = Half_Divide(Stick);

            if (left+HalfMin>=X)
            {
                Stick = HalfMin; //�ϳ��� �ɶ����� ���
                continue;
            }

            else
            {
                count++;
                left = left + HalfMin; //�������� ���� ��������. 16 16�̸� 16�ϳ� ����.
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