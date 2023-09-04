#include <unistd.h>
#include <stdio.h>

// the function must carry out all the required
// instructions from the assignment
void ft_striteri(char *str, void (*f)(unsigned int i, char *))
{
   int i;
   i = 0;
    if (!str)
        return ;
// each element of the string is passed to the f function
// as arguments for print out 
    while (str[i])
    {
        f(i, &str[i]);
        i++;
    }
}

void f(unsigned int i, char *str)
{
    i = 0;
    printf("%d %s\n", i, str);
}
int main()
{
    char str[] = "Kaigama";
    ft_striteri(str, f);
    return (0);
}
