#include "../../includes/piscine.h"

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    // check the first string and compare both string
    // on at a time each alphabet
    while (s1[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    // comparism here is done using unsigned char c = 'a'
    return ((unsigned char *)s1 - (unsigned char *)s2);
}
int main()
{
    char s1[] = "king";
    char s2[] = "king";
    printf("%d\n", ft_strcmp(s1, s2));
    return (0);
}