/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:02:38 by kadikwu           #+#    #+#             */
/*   Updated: 2023/08/15 14:04:31 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/piscine.h"
// this section the function is used to link or join string together using
// sep variable as the linker
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;
	int		x;
	int		p;

	i = 0;
	p = 0;
	dest = (char *)malloc(sizeof(*strs));
	while (i < size)
	{
		x = 0;
		while (strs[i][x])
		{
			dest[p++] = strs[i][x++];
		}
		x = 0;
		while (sep[x] && i != size - 1)
		{
			dest[p++] = sep[x++];
		}
		i++;
	}
	dest[p] = '\0';
	return (dest);
}

int	main(void)
{
	char	*str[5];

	str[0] = "How";
	str[1] = "are";
	str[2] = "you";
	str[3] = "doing";
	str[4] = "Boss";
	printf ("%s\n", ft_strjoin(5, str, "-"));
	return (0);
}
