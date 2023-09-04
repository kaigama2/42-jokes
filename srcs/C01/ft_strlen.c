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
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}
int main()
{
    int n;
    char str[] = "kaigama";
    n = ft_strlen(str);
    ft_putnbr(n);
    ft_putchar('\n');
    return (0);
}
