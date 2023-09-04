#include "../../includes/piscine.h"

void ft_putchar(char c)
{
// ** take the variable to a pointer's address denoted by (*) asterick
// ** also pointer's address can be called dereferencing pointers as well
    write (1, &c, 1);
}
void ft_putstr(char *str)
{
// memory address or pointer's address carrying the string
    while (*str)
    {
// * here assign the content of the memory address (*)str
// to the character c in the function c; as in c = *str;
        ft_putchar(*str++);
    }
}
int main()
{
// str[] is an array of character
    char str[] = "kaigama";
    ft_putstr(str);
    ft_putchar('\n');
    return (0);
}