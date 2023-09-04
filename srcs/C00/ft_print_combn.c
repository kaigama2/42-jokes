#include <piscine.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar(48 + nb % 10);
}

void ft_calculate_down(int max)
{
    int i;
    i = 1;
    while (i <= max)
    {
            ft_putnbr(i);
            ft_putchar(' ');
        i++;
    }
}
void ft_print_combn(int n)
{
    int max;
    while (n)
    {
        max = 10 * 10;
        n--;
    }
    ft_calculate_down(max - 1);
}
int main()
{
    ft_print_combn(2);
    ft_putchar('\n');
    return (0);
}