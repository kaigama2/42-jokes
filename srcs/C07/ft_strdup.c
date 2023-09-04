/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:30:19 by kadikwu           #+#    #+#             */
/*   Updated: 2023/08/15 13:42:02 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/piscine.h"

// The strdup() function allocates sufficient memory for a copy
// of the string s1, does the copy, and 
// returns a pointer to it. The pointer may subsequently be used
// as an argument to the function free(3).

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	str[] = "Kaigama";

// 	printf ("%s\n", ft_strdup(str));
// 	return (0);
// }
