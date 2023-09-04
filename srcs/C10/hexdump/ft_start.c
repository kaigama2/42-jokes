#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define No_match -1

int ft_unwanted_basetype(char *basetype);
int ft_linear_search(char *base_from, char character);
int ft_view_str_len(int base_no, int size, int negative);


char *ft_basetype_buffer(char *base_to, int base_no, int negative)
{
    char *dest;
    int total_len;
    int size;
    int index;
    // uninitialize size print nothing
    size = 0;

    while (base_to[size])
        size++;
    total_len = ft_view_str_len(base_no, size, negative);
    if (!(dest = (char *)malloc(sizeof(base_to) * (total_len + 1))))
        return (false);
    if (negative)
        dest[0] = '-';
    index = negative;
    while (index < total_len)
    {
        dest[total_len - (!negative) - index++] = base_to[base_no % size];
        base_no /= size;
    }
    dest[total_len] = '\0';
    return (dest);
}
char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int result;
    int size;
    int negative;
    int stored_data;

    negative = 1;
    // uninitialized result prints random numbers
    result = 0;
    if (!ft_unwanted_basetype(base_from) || !ft_unwanted_basetype(base_to))
        return (false);
    while (*nbr == ' ' || *nbr == '\f' || *nbr == '\t' || *nbr == 43 || *nbr == 45)
    {
        if (*nbr == 45)
            negative *= -1;
        nbr++;
    }
    size = 0;
    while (base_from[size])
        size++;
    while ((stored_data = ft_linear_search(base_from, *nbr)) != No_match)
    {
        // give me the total size of the string base_from also written as
        // result = result * base_from[size];
        result *= size;
        // counting everything in stored_data variable one after the other
        result += stored_data;
        nbr++;
    }
    negative = result == false ? true : negative;
    return (ft_basetype_buffer(base_to, result, (negative > 0 ? false : true)));
}
int main()
{
    printf("$%s$\n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"));
    printf("$%s$\n", ft_convert_base("----7fffffff", "0123456789abcdef", "01"));
    printf("$%s$\n", ft_convert_base("--+-1024", "0123456789", "0123456789"));
    printf("$%s$\n", ft_convert_base("-0", "0123456789", "abcdefghij"));
    return (0);
}