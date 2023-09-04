#include "../../includes/piscine.h"

 // The strcat() function appends the src string to the dest string,
// overwriting the terminating null byte ('\0') at the end of dest,
// and then adds a terminating null byte.  The strings may not
// overlap, and the dest string must have enough space for the
// result.  If dest is not large enough, program behavior is
// unpredictable; buffer overruns are a favorite avenue for
// attacking secure programs.

char *ft_strcat(char *dest, char *str)
{
    int i;

    i = 0;
    // here null terminate the destination buffer
    if (dest[i] != '\0')
    {
        // check the string and overwrite the null terminated dest
        while (str[i] != '\0')
        {
            dest[i] = str[i];
            i++;
        }
    }
    // Here the resulting string is null terminated '\0'
    dest[i] = '\0';
    return (dest);
}
int main()
{
    char dest[8];
    char str[] = "Kaigama";
    printf("%s\n", ft_strcat(dest, str));
    return (0);
}