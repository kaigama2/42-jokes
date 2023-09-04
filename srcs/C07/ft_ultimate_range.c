/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:40:38 by kadikwu           #+#    #+#             */
/*   Updated: 2023/08/15 10:49:22 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/piscine.h"
// here is the function that assign array of int/many number and this
// numbers assigned should be between min and max
void	ft_print(int *range, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf ("%d ", range[i]);
		i++;
	}
	printf ("\n");
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*dest;

	i = 0;
	if (min >= max)
		return (0);
	dest = (int *)malloc(sizeof(int) * (max - min));
	if (dest == NULL)
		return (-1);
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	*range = dest;
	return (i);
}

int	main(void)
{
	int	*range;
	int	x;

	x = ft_ultimate_range(&range, 1, 20);
	ft_print(range, x);
	return (0);
}
