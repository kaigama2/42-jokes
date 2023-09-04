#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_printhex(char c, int i, int size)
{
    char *hex;
    hex = "0123456789abcdef";
    if (i < size)
    {
        write (1, hex + c / 16, 1);
        write (1, hex + c % 16, 1);
    }
    else if ((i + 1) % 2 == 0)
        write (1, " ", 1);
}
void ft_print_add(int n, int i)
{
    const char *base;
    base = "0123456789abcdef";
    if (n / 16 > 0)
        ft_print_add(n / 16, i + 1);
    else if (i < 8)
    while (i++ <= 8)
        write (1, "0", 1);
    write (1, base + n % 16, 1);
}
int main()
{
    ft_print_add(0, 1);
    write (1, "\n", 1);
    ft_printhex('c', 0, 16);
    return (0);
}
