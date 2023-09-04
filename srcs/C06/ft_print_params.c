#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
    {
        write (1, str++, 1);
    }
}
int main(int argc, char **argv)
{
    int i;
// here we pass in 1 string after the program name to the function ft_putstr
    i = 1;
// here we pass in another string after printing the first
// string printed if we wish to print more string
    while (i < argc)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i++;
    }
    return (0);
}
