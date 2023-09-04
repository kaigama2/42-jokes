#include "../../includes/piscine.h"
void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putnbr(int nbr)
{
    if (nbr < 0)
    {
        ft_putchar('-');
        ft_putnbr (-nbr);
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
int ft_atoi(char *str)
{
    int neg;
    int result;
    neg = 1;
    result = 0;
    while (*str == '\t' || *str == '\f' || *str == ' ')
        str++;
    while (*str == 43 || *str == 45)
    {
        if (*str == 45)
            neg *= -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result * neg);
}
int main(int argc, char **argv)
{
    int print;
    if (argc == 2)
    {
        print = ft_atoi(argv[1]);
        ft_putnbr(print);
        ft_putchar('\n');
    }
    return (0);
}