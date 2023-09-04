#include "../../includes/piscine.h"

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
void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main()
{
    int x;
    int *p1;
    int **p2;
    int ***p3;
    int ****p4;
    int *****p5;
    int ******p6;
    int *******p7;
    int ********p8;
    int *********p9;
    x = 22;
    p1 = &x;
// here means take the address of each pointer to the next pointer
    p2 = &p1;
    p3 = &p2;
    p4 = &p3;
    p5 = &p4;
    p6 = &p5;
    p7 = &p6;
    p8 = &p7;
    p9 = &p8;
    ft_ultimate_ft(p9);
    ft_putnbr(x);
    ft_putchar('\n');
    return (0);
}