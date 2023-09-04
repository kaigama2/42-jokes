#include "../../includes/piscine.h"

int ft_nbrlen(int nbr)
{
    int count;
    count = 0;
    while (nbr > 0)
    {
        nbr = nbr / 10;
        count++;
    }
    return (count);
}
char *ft_itoa(int nbr)
{
    char *dest;
    int len;
    int i;
    i = 0;
    len = ft_nbrlen(nbr);
// take a pointer to a (char)
    dest = malloc(sizeof(char) * (len));
    if (!dest)
        return (NULL);
// here we null terminate our number;
    dest[len--] = '\0';
    if (nbr < 0)
    {
        nbr = -1;
        printf("Next time Enter a Positive argument");
    }
    while (nbr > 0)
    {
// here is to store the number of bytes stored in i into dest[len]
        dest[len] = 48 + nbr % 10;
        nbr = nbr / 10;
        i++;
        len--;
    }
    dest[len] = '\0';
    return (dest);
}
int main()
{
    printf("%s\n", ft_itoa(1234));
    return (0);
}
