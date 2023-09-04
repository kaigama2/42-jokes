#include "../../includes/piscine.h"
#include <unistd.h>

void ft_print(int *chessboard)
{
    char c;
    int i;
    i = 0;
    while (i < 10)
    {
        c = chessboard[i] + '0';
        write (1, &c, 1);
        i++;
    }
    write (1, "\n", 1);
}
int ft_unequal_pos(int a, int b)
{
    if (a >= b)
        return (a - b);
    else
        return (b - a);
}
int ft_check(int q_pos, int *chessboard)
{
    int i;
    i = 0;
    while (i < q_pos)
    {
// checking both elements of the same position and checking also for elements of
// unequal positions as well
        if (chessboard[i] == chessboard[q_pos] || ft_unequal_pos(chessboard[q_pos], chessboard[i]) == (q_pos - i))
            return (0);
        i++;
    }
    return (1);
}
void ft_check_board(int q_pos, int *chessboard, int *ptr)
{
// here is the pointer to the first element of the board
    chessboard[q_pos] = 0;
// check the length of the element in the board
    while (chessboard[q_pos] < 10)
    {
// checking on elements on the same positions in the array
        if (ft_check(q_pos, chessboard))
        {
            if (q_pos == 9)
            {
                ft_print(chessboard);
// store the total number of queen's possible positions
                *ptr = *ptr + 1;
            }
            else
// here the function is recursive
                ft_check_board(q_pos + 1, chessboard, ptr);
        }
        chessboard[q_pos]++;
    }
}
int ft_ten_queen(void)
{
// here is a chessboard of 10 x 10 as in chessboard[3, 4, 5, 2, 1, 6, 8, 9, 0] is
// chessboard{0 3, 1 4, 2 5, 3 2, 4 1, 5 6, 6 8, 7 9, 8 0, 9 0}
    int chessboard[10];
    int ptr;
    int q_pos;
    ptr = 0;
    q_pos = 0;
    ft_check_board(q_pos, chessboard, &ptr);
    return (ptr);
}
int main()
{
    printf ("$Total Solutions$ \n%9d\n", ft_ten_queen());
    return(0);
}