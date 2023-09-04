/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:48:17 by kadikwu           #+#    #+#             */
/*   Updated: 2023/09/04 18:50:12 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	ft_rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			ft_print(x, 'A', 'B', 'A');
		else if (i <= (y - 1))
			ft_print(x, 'B', ' ', 'B');
		if (i == y)
			ft_print(x, 'C', 'B', 'C');
		ft_putchar('\n');
		i++;
	}
}
