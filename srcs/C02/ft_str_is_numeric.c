#include "../../includes/piscine.h"
int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    // check the string
    while (str[i])
    {
        // here evaluate true to show that we have numbers only
        if (!((str[i] >= '0' && str[i] <= '9')))
            return (0);
        i++;
    }
    return (1);
}
int main()
{
    printf("%d\n", ft_str_is_numeric("12345"));
    return (0);
}