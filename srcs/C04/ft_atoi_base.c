#include "../../includes/piscine.h"
// a function that converts the initial
// portion of the string pointed by str to int representation.

int ft_strlen(char *base)
{
    int i;
    i = 0;
    while (base[i])
        i++;
    return (i);
}
int ft_search(char present, char *base)
{
    int i;
    i = 0;
    while (base[i])
    {
// pause to test for the presence of present content in the string
        if (base[i] == present)
// terminate the found string in base[i] and return it
            return (i + 1);
        i++;
    }
// if the string in present is not found in base[i] let us return NULL
    return (0);
}
int ft_check_arguments(char *base)
{
    int i;
    int x;
    i = 0;
    x = 1;
    if (!base[1])
        return (0);
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
            return (0);
        while (base[x])
        {
            if (base[i] == base[x])
                return (0);
            x++;
        }
        i++;
    }
    return (1);
}

int ft_atoi_printout(char *atoi, char *base, int test, int size)
{
    int temp;
    int len;
    int dest;
    temp = 1;
// getting the total number of bytes in base
    len = ft_strlen(base);
    while (size >= test)
    {
// put the found number in the string (base) in dest
        dest += (ft_search(atoi[size], base) - 1) * temp;
        temp = temp * len;
        size--;
    }
    return (dest);
}
int ft_atoi_base(char *str, char *base)
{
    int neg;
    int i;
    int test;
    i = 0;
    neg = 1;
// here check for invalid base
    if (ft_check_arguments(base))
    {
// here Test for space, tab, newline, or \f in the string
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f')
            i++;
// Testing for the presence of + or - in the string
        while (str[i] == '+' || str[i] == '-')
        {
// pause to do the calculation in the presence of - in the string
            if (str[i] == '-')
                neg *= -1;
            i++;
        }
// Storing our test result in a variable
        test = i;
        while (ft_search(str[i], base) > 0)
            i++;
        i--;
    return (ft_atoi_printout(str, base, test, i) * neg);
    }
    return (0);
}
int main()
{
    char atoi[] = " --+-+1234ab56";
    char radix[] = "0123456789";
    printf("%d\n", ft_atoi_base(atoi, radix));
    return (0);
}
