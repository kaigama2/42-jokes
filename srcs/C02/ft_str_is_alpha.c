#include "../../includes/piscine.h"

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    // check the string
    while (str[i])
    {
        // here evaluate true to show that we either have small letter
        // or capital letter
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
            return (0);
        i++;
    }
    return (1);
}
int main()
{
    printf("%d\n", ft_str_is_alpha("KAIGAMA"));
    return (0);
}