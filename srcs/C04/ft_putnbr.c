#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putnbr(nb / 10);
        ft_putchar('8');
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else
    {
        if (nb > 9)
        {
            // decrease the number from behind
            ft_putnbr(nb / 10);
        }
        // increase the number from the start
        ft_putchar(48 + nb % 10);
    }
}
int main()
{
    ft_putnbr(42);
    ft_putchar('\n');
    return (0);
}
