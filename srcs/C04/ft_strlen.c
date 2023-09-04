#include "../../includes/piscine.h"

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (*(str + i))
    {
        i++;
    }
    return (i);
}
int main()
{
    char str[] = "king";
    printf ("%d\n", ft_strlen(str));
    return (0);
}
