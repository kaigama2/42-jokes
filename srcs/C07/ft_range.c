/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:40:38 by kadikwu           #+#    #+#             */
/*   Updated: 2023/08/14 16:15:21 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/piscine.h"
// Our function must carryout all the required instructions
// here is a function that return array of int returning all of the value
// ranging between (max - min) including min and excluding max value

void	ft_printout(int tab[])
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		printf ("%d ", tab[i]);
		i++;
	}
	printf ("\n");
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;

	i = 0;
	if (min >= max)
		return (NULL);
	dest = (int *)malloc(sizeof(int) * (max - min));
	if (dest == NULL)
		return (NULL);
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}

int	main(void)
{
	int	*x;

	x = ft_range(1, 20);
	ft_printout(x);
	return (0);
}
