// #include is a directive that tells the preprocessor to insert or
// put the content of another file into the source file or code
#include "../../includes/piscine.h"
// #ifndef represent to check whether a macro is not define
#ifndef FT_H
#define FT_H

void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);
// #endif marks the end of the processor
#endif