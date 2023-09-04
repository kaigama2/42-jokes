#include "../../includes/piscine.h"

// Create a function that displays a number in a base system in the terminal.
void ft_putchar(char c)
{
    write (1, &c, 1);
}
int ft_strlen(char *radix)
{
    int i;
    i = 0;
    while (radix[i])
        i++;
    return (i);
}
int ft_arguments(char *radix)
{
    int i;
    int x;
// no variable is assign inside the loop of the other variable
// showing it is a separate array for each variable
    i = 0;
    x = 1;
// taking a pointer to the second array element
    if (!radix[1])
        return (0);
    while (radix[i] != '\0')
    {
// pause and test for the presence of -, +, 1, and space
        if (radix[i] == '+' || radix[i] == '-' || radix[i] == ' ')
            return (0);
        while (radix[x])
        {
// pause and test for the presence of equal number in both arrays
            if (radix[i] == radix[x])
                return (0);
            x++;
        }
        i++;
    }
// in the absence of invalid arguments return true or 1
    return (1);
}
void ft_putnbr_base(int nbr, char *radix)
{
    char array[16];
    int len;
    int i;
    i = 0;
// Test for the presence of invalid arguments
    if (ft_arguments(radix))
    {
// handling a negative number will be like
        if (nbr < 0)
        {
            write (1, "-", 1);
            nbr *= -1;
        }
        len = ft_strlen(radix);
        while (nbr > 0)
        {
// put the symbol in the array
            array[i] = nbr % len;
// get the total length of the symbol
            nbr = nbr / len;
            i++;
        }
// count down the bytes while writing it from behind till we encounter 0
        while (--i >= 0)
            ft_putchar(radix[array[i]]);
    }
}
int main()
{
    int nbr;
    char radix[] = "PONEYVIF";
    nbr = 28;
    ft_putnbr_base(nbr, radix);
    ft_putchar('\n');
    return (0);
}