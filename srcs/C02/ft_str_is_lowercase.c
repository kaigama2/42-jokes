#include "../../includes/piscine.h"
int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    // check the string
    while (str[i])
    {
        // here evaluate true to show that we have small letters only
        if (!((str[i] >= 'a' && str[i] <= 'z')))
            return (0);
        i++;
    }
    return (1);
}
int main()
{
    printf("%d\n", ft_str_is_lowercase("kaigama"));
    return (0);
}