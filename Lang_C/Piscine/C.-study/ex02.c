#include <unistd.h>
#include <stdio.h>

void ft_print_reverse_alphabet(void)

{
    char c = 'z';
    while(c >= 'a')
    {
        write(1,&c,1);
        c--;
    }


}

int main()
{
    ft_print_reverse_alphabet();
}