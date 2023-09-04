#ifndef CAT_H
#define CAT_H

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <fcntl.h>
#include <errno.h>

typedef struct s_point
{
    int size;
    char *str;
    char *copy;
}               t_point;

#endif