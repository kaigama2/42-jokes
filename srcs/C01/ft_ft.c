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
void ft_ft(int *nbr)
{
// here the pointer's address where our 22 is stored is dereferenced
    *nbr = 42;
}
int main()
{
    int x;
    x = 22;
    // here means take a pointer & (int *) to a memory address (int *ptr) or 
    // *nbr (this means pointer's address or dereference operator (*)) used
    // in getting the value stored in the memory location
    ft_ft(&x);
    ft_putnbr(x);
    ft_putchar('\n');
    return (0);
}

