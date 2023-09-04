#include "../../includes/piscine.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int i;
    i = 0;
    while ((s1[i] || s2[i]) && (s1[i] == s2[i] && i < n))
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
int main()
{
    char s1[] = "goodkk";
    char s2[] = "good";
    printf("%d\n", ft_strncmp(s1, s2, 4));
    return (0);
}
