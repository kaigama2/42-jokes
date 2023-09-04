#include "../../includes/piscine.h"
#include "ft_stock_str.h"
// segmentation fault is caused when a pointer is
// properly initialize, used after initializing 
// & when d index of d array is more than d array

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
struct s_point *ft_str_in_tab(int argc, char **argv)
{
    int i;
    int x;
    t_point *dest;
    i = 0;
    dest = (t_point *)malloc(sizeof(t_point) * (argc + 1));
    if (!dest)
    {
        return (NULL);
    }
    while (i < argc)
    {
        x = 0;
        while (argv[i][x])
            x++;
        dest[i].size = x;
        dest[i].str = argv[i];
        dest[i].copy = (char *)malloc(sizeof(char ) * (dest[i].size));
// here the logical not ! represent an inverse return of expression
        if (!dest[i].copy)
        {
            return (NULL);
        }
        x = 0;
        while (x < dest[i].size)
        {
            dest[i].copy[x] = argv[i][x];
            x++;
        }
        dest[i].copy[x] = '\0';
        i++;
    }
    return (dest);
}
int main()
{
    t_point *p;
    char *argv[2] = {"Small", "Boy"};
    p = ft_str_in_tab(2, argv);
    ft_printout(p);
    return (0);
}