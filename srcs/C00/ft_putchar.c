/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:42:15 by kadikwu           #+#    #+#             */
/*   Updated: 2023/08/16 23:43:08 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/piscine.h"

void	ft_putchar(char c)
{
// * just get the address of c give it to write for printout
	write (1, &c, 1);
}

int main()
{
	ft_putchar('k');
	ft_putchar('\n');
	return (0);
}
