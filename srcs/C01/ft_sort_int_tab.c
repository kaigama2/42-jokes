#include "../../includes/piscine.h"

void ft_swap(int *a, int *b)
{
    int container;
    container = *a;
    *a = *b;
    *b = container;
}
void ft_print_out(int *tab, int size)
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
void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int next_v;
    i = 1;
    while (i < size)
    {
        next_v = i;
    // here tab[next_v] 12 is our second position in our array tab[i]
    // while tab[next_v - 1] 14 is our first position in our array tab[i]
        while (next_v > 0 && tab[next_v] < tab[next_v - 1])
        {
            ft_swap(&tab[next_v], &tab[next_v - 1]);
            next_v--;
        }
        i++;
    }
}
int main()
{
    int tab[] = {14, 12, 16, 15, 10, 13, 18, 11, 17};
    ft_sort_int_tab(tab, 9);
    ft_print_out(tab, 9);
    printf("\n");
    return (0);
}

// ============================================================================

// void ft_sort_int_tab(int *tab, int size)
// {
//     int i;
//     int x;
// 
//     i = 0;
//     while (i < size)
//     {
//         x = 0;
// here < - 1 marks the first position on the array
//         while (x < (size - 1))
//         {
// while + 1 marks the last position on the array
//             if (tab[x] > tab[x + 1])
//             {
//                 ft_swap(&tab[x], tab[x + 1]);
//             }
//             x++;
//         }
//         i++;
//     }
// }