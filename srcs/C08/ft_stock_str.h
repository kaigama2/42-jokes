#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_point
{
    int size;
    char *str;
    char *copy;
}	t_point;

struct s_point *ft_str_in_tab(int argc, char **argv);

#endif