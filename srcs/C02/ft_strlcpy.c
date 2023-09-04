#include "../../includes/piscine.h"

// here copying takes places as if both memory area are null terminated
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}
int ft_strlcpy(char *dest, char *src, int size)
{
    int i;
    int dstsize;

    i = 0;
    dstsize = ft_strlen(src);
    if (size <= 0)
    {
        src[0] = 48;
        return (i);
    }
    while (src[i] != '\0' && i < (size - 1))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dstsize);
}
int main()
{
    char dest[8];
    char src[] = "Kaigama";
    printf("%d\n", ft_strlcpy(dest, src, 7));
    return (0);
}