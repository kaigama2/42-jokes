#include <piscine.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_print_alphabet(void)
{
    char alpha;
    alpha = 'a';
    while (alpha <= 'z')
    {
        write (1, &alpha, 1);
        write (1, "\n", 1);
        alpha++;
    }
}

int main()
{
    ft_print_alphabet();
    return (0);
}
