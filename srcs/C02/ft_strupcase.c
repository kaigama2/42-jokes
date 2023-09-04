#include "../../includes/piscine.h"

// function that convert small letter to uppercase letter
char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    // check the string
    while (str[i])
    {
        // here test for the presence of small letters in the string
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}
int main()
{
    char str[] = "kaigama";
    printf("%s\n", ft_strupcase(str));
    return (0);
}