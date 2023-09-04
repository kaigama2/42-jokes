/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:17:58 by kadikwu           #+#    #+#             */
/*   Updated: 2023/09/04 18:35:43 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int width, char start, char middle, char end)
{
	int	i;

	i = 1;
// if condition here is to move from one char to the other in a row
	while (i <= width)
	{
		if (i == 1)
			ft_putchar(start);
		if (i <= (width - 1))
			ft_putchar(middle);
		if (i == width)
			ft_putchar(end);
		i++;
	}
}
