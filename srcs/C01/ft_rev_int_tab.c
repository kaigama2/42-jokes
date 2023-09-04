#include "../../includes/piscine.h"

void ft_swap(int *a, int *b)
{
    int container;
    container = *a;
    *a = *b;
    *b = container;
}
void ft_print(int *tab, int size)
{
    int i;
    i = 0;
    while (i < size)
    {
        printf("%d", tab[i]);
        printf(" ");
        i++;        
    }
}
void ft_reverse_int_tab(int *tab, int size)
{
    int i;
    i = 0;
    while (i < size--)
    {
        ft_swap(&tab[i], &tab[size]);
        i++;
    }
}
int main()
{
    int tab[] = {7, 6, 5, 4, 3, 2, 1};
    ft_reverse_int_tab(tab, 7);
    ft_print(tab, 7);
    return (0);
}