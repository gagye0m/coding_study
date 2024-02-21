#include <unistd.h>
#include <stdio.h>

void ft_print_alphabet(void)
{
    char c = 'a';
    while(c <= 'z')
    {
        write(1,&c,1);
        c++;
    }


}

int main()
{
    ft_print_alphabet();
}