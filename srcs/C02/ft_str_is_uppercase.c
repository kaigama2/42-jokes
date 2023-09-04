#include "../../includes/piscine.h"

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    // check the string
    while (str[i])
    {
        // here evaluate true to show that we have Capital letters only
        if (!((str[i] >= 'A' && str[i] <= 'Z')))
            return (0);
        i++;
    }
    return (1);
}
int main()
{
    char str[] = "KAIGAMA";
    printf("%d\n", ft_str_is_uppercase(str));
    return (0);
}