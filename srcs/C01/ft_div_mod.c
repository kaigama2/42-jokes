#include "../../includes/piscine.h"
void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putnbr(int nbr)
{
    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
    }
    ft_putchar(48 + nbr % 10);
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
int main()
{
    int a;
    int b;
    int div;
    int mod;
    a = 9;
    b = 2;
    ft_putnbr(a);
    ft_putchar('/');
    ft_putnbr(b);
    ft_div_mod(a, b, &div, &mod);
    ft_putchar('\n');
    ft_putnbr(div);
    ft_putchar(' ');
    ft_putnbr(mod);
    ft_putchar('\n');
    return (0);
}