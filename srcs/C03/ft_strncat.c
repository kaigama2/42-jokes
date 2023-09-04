#include "../../includes/piscine.h"

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strncat(char *dest, char *src, int size)
{
    int i;
    int dst_l;

    dst_l = ft_strlen(dest);
    i = 0;
    while (src[i] != '\0' && i < size)
    {
        dest[dst_l] = src[i];
        i++;
        dst_l++;
    }
    dest[dst_l + 1] = '\0';
    return (dest);
}
int main()
{
    char dest[7];
    char src[] = "Kaigama";
    printf("%s\n", ft_strncat(dest, src, 7));
    return (0);
}