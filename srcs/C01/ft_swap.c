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
void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a;
    int b;
    a = 4;
    b = 2;
    ft_putnbr(a);
    ft_putnbr(b);
    ft_putchar('\n');
    ft_swap(&a, &b);
    ft_putnbr(a);
    ft_putnbr(b);
    ft_putchar('\n');
    return (0);
}
