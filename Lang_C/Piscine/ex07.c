#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int n)
{
    char s = 'n';

    if(sizeof(n) == 4)
    {
        write(1,&s,1);
    }

    else
    {
        return;
    }
}

int main()
{
    ft_putnbr(42);
} 