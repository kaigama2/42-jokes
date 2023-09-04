#include "../../includes/piscine.h"

// here the function converts uppercase letters into lowercase letters
char *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;
    // check the given string
    while (str[i])
    {
        // test for the presence of capital letters in the given string
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            // convert the capital letter to small letter
            str[i] += 32;
        }
        // here is for going through the string
        i++;
    }
    // returning the converted string
    return (str);
}
int main()
{
    char str[] = "KAIGAMA";
    printf("%s\n", ft_strlowcase(str));
    return (0);
}