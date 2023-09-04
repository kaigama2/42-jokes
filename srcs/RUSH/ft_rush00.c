/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:22:05 by kadikwu           #+#    #+#             */
/*   Updated: 2023/09/04 18:35:35 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/piscine.h"
#include "ft_putchar.c"

// here the function should be able to display a rectangle 
// of x character representing the width and a y character representing
// the length
// Note the function must be able to carryout all the required requirements

void	ft_rush(int x, int y)
{
	int	i;

	i = 1;
// y here is length in column, we move downward within the loop
// using the if and else if condition
	while (i <= y)
	{
		if (i == 1)
			ft_print(x, 'o', '-', 'o');
		else if (i <= (y - 1))
			ft_print(x, '|', ' ', '|');
		if (i == y)
			ft_print(x, 'o', '-', 'o');
		ft_putchar('\n');
		i++;
	}
}