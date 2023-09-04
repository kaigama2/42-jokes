#include "./includes/piscine.h"
#include "./srcs/C06/ft_print_program_name.c"
#include "./srcs/C02/ft_putstr_non_printable.c"

int main(int argc, char **argv)
{
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    ft_putchar('\n');
    if (0 < argc)
    {
        ft_putstr(argv[0]);
    }
    ft_putstr("\nKaigama");
    ft_putchar('\n'); 
    return (0);
}
