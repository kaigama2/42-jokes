#include "../../includes/piscine.h"

// The strncpy() function is similar, except that at most n bytes of
// src are copied.  Warning: If there is no null byte among the
// first n bytes of src, the string placed in dest will not be null-
// terminated.

char *ft_strncpy(char *dest, char *src, int size)
{
    int i;

    i = 0;
    // since there is null byte('\0') in src, the string place in dest will be
    // null terminated ('\0')
    while (src[i] != '\0' && i < size)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
int main()
{
    char dest[8];
    char src[] = "Kaigama";
    printf("%s\n", ft_strncpy(dest, src, 7));
    return (0);
}