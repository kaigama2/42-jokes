#include "../../includes/piscine.h"
int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    // check the string
    while (str[i])
    {
        // here evaluate true to show that we have numbers only
        if (!((str[i] >= '!' && str[i] <= '~')))
            return (0);
        i++;
    }
    return (1);
}
int main()
{
    printf("%d\n", ft_str_is_printable("$sA"));
    return (0);
}