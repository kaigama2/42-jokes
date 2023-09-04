#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putstr_non_printable(char *str)
{
    int i;
    char *hex = "0123456789abcdef";
    i = 0;
    while (str[i] != '\0')
    {
// test for the number of non printable characters
        if (str[i] >= 0 && str[i] <= 32)
        {
            ft_putchar(' ');
// < 16 is used to provide us with non printable characters
            if (str[i] < 16)
            {
                ft_putchar('\\');
                ft_putchar('0');
// here putting the found hex in the string character
                ft_putchar(hex[str[i]]);
            }
        }
        else
            ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
}
int main()
{
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    return (0);
}
