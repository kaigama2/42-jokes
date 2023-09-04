#ifndef PISCINE_H
#define PISCINE_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <errno.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void ft_putchar(char c);
void ft_putnbr(int c);
void ft_is_negative(int n);
void ft_print_alphabet(void);
void ft_print_comb(void);
void ft_print_comb2(void);
void ft_print_combn(int n);
void ft_print_numbers(void);
void ft_print_reverse_alphabet(void);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ft(int *nbr);
void ft_putstr(char *str);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);
int ft_strlen(char *str);
int ft_nbrlen(int nbr);
void ft_swap(int *a, int *b);
void ft_ultimate_div_mod(int *a, int *b);
void ft_ultimate_ft(int *********nbr);
char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, int n);

#endif
