#include "ft_stock_str.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putstr(char *str)
{
    while (*str)
        write (1, str++, 1);
}
void ft_putnbr(int nbr)
{
    if (nbr == -123456789)
    {
        ft_putnbr(nbr % 10);
        ft_putchar('9');
    }
    else if (nbr < 0)
    {
        ft_putchar('-');
        nbr *= -1;
    }
    else
    {
        if (nbr > 9)
        {
            ft_putnbr(nbr / 10);
        }
        ft_putchar(48 + nbr % 10);
    }
}
void ft_printout(t_point *s_picker)
{
    int i;
    i = 0;
    while (s_picker[i].copy)
    {
        ft_putnbr(s_picker[i].size);
        ft_putchar('\n');
        ft_putstr(s_picker[i].str);
        ft_putstr("\n");
        ft_putstr(s_picker[i].copy);
        ft_putchar('\n');
        i++;
    }
}