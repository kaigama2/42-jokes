#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}
void ft_rev_params(int argc, char **argv)
{
    int size;
    int a;
    int i;
// when (argc - 1) stand alone it's program name without arguments but
// when assigned to a variable is the total number of arguments
// including the program name 
    size = argc - 1;
    i = 0;
// here lets start from our first argument and not program name (a.out)
    a = 1;
// checking each provided arguments one at a time
    while (a < argc)
    {
// writing each bytes on the standard output
        while (i < size)
        {
// passing char **argv to a function with char * arguments
            ft_putstr(argv[size]);
            ft_putstr("\n");
            size--;
        }
        a++;
    }
}
int main(int argc, char **argv)
{
// passing this argument to the above function
    ft_rev_params(argc, argv);
    return (0);
}