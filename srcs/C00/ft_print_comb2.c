#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_print_comb2(void)
{
    int num[2];
    num[0] = 0;
    while (num[0] <= 98)
    {
        num[1] = 1;
        while (num[1] <= 99)
        {
        if (num[0] < num[1])
        {
            ft_putchar(48 + num[0] / 10);
            ft_putchar(48 + num[0] % 10);
            ft_putchar(' ');
            ft_putchar(48 + num[1] / 10);
            ft_putchar(48 + num[1] % 10);
            ft_putchar(',');
            ft_putchar(' ');
            
        }
        num[1]++;
        }
    num[0]++;
    }
}
int main()
{
    ft_print_comb2();
    return (0);
}
// ============================================================================
// void ft_putchar(char c)
// {
//     write (1, &c, 1);
// }

// void ft_printout(char a, char b, bool yes)
// {
//     ft_putchar(48 + a / 10);
//     ft_putchar(48 + a % 10);
//     ft_putchar(' ');
//     ft_putchar(48 + b / 10);
//     ft_putchar(48 + b % 10);
//     if (yes)
//     {
//         ft_putchar(',');
//         ft_putchar(' ');
//     }
// }
// void ft_print_comb2(void)
// {
//     int a;
//     int b;
//     bool yes;
//     a = 0;
//     while (a <= 98)
//     {
//         b = a + 1;
//         while (b <= 99)
//         {
//             yes = !(a == 98 && b == 99);
//             ft_printout(a, b, yes);
//             b++;
//         }
//         a++;
//     }
// }
// int main()
// {
//     ft_print_comb2();
//     return (0);
// }