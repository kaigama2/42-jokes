#include "ft_point.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        ft_putnbr(nbr / 10);
        ft_putchar('8');
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
void set_point(t_point *point)
{
// . and -> is used to get variable stored under struct variable
    point -> x = 42;
    point -> y = 21;
}

int main(void)
{
    t_point point;
    set_point(&point);
    ft_putnbr(point.x);
    ft_putchar('\n');
    ft_putnbr(point.y);
    ft_putchar('\n');
    return (0);
}
