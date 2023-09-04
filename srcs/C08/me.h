#ifndef ME_H
#define ME_H

#define TRUE 1
#define FALSE 0
#define SUCCESS 0
#define EVEN(nbr)	((nbr % 2) == 0 ? TRUE : FALSE)
#define EVEN_MSG    "I have an Even Number of Arguments\n"
#define ODD_MSG     "Please put 2 arguments for this program to work\n"

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// typedef represent an alternative name for struct data type while
// struct variable or struct is a a data type holding different
// type of variable;
typedef struct s_point
{
    int x;
    int i;
    char *string;
}           t_point;

typedef int t_bool;
void ft_putstr(char *str);
t_bool ft_is_even(int nbr);

#endif