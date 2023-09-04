/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:55:18 by kadikwu           #+#    #+#             */
/*   Updated: 2023/07/29 10:55:19 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int nbr)
{
    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
    }
    ft_putchar(48 + nbr % 10);
}
void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;
    div = *a / *b;
    mod = *a % *b;
    // store the final result in each pointers
    *a = div;
    *b = mod;
}
int main()
{
    int a;
    int b;
    a = 6;
    b = 2;
    ft_ultimate_div_mod(&a, &b);
    ft_putnbr(a);
    ft_putchar('\n');
    ft_putnbr(b);
    ft_putchar('\n');
    return (0);
}
