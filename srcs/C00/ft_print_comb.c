#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void printout(char a, char b, char c, bool com_space)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    if (com_space)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}
void ft_print_comb(void)
{
    char a;
    char b;
    char c;
    bool com_space;
    a = '0';
    while (a <= '7')
    {
// assign 1 to b from a line (0 < 7)
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
// let's store true or false here
                com_space = true;
                printout(a, b, c, com_space);
                c++;
            }
        b++;
        }
    a++;
    }
}
int main()
{
    ft_print_comb();
    ft_putchar('\n');
    return (0);
}
