#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_print_comb(void)
{
    char array[3];
    array[0] = '0';
    while (array[0] <= '9')
    {
        array[1] = '0';
        while (array[1] <= '9')
        {
            array[2] = '0';
            while (array[2] <= '9')
            {
// make the array look like one is greater than the other as in 7 < 8 < 9
                if (array[0] < array[1] && array[1] < array[2])
                {
                    ft_putchar(array[0]);
                    ft_putchar(array[1]);
                    ft_putchar(array[2]);
                    ft_putchar(',');
                    ft_putchar(' ');
                }    
                array[2]++;
            }
            array[1]++;
        }
        array[0]++;
    }
}

int main()
{
    ft_print_comb();
    ft_putchar('\n');
    return (0);
}
