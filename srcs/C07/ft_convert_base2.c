/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:34:33 by kadikwu           #+#    #+#             */
/*   Updated: 2023/08/30 16:35:31 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NO_MATCH -1

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_scan_nbr(char *base_from, char nbr)
{
	int	i;

	i = 0;
	while (base_from[i])
	{
		if (base_from[i] == nbr)
			return (i);
		i++;
	}
	return (NO_MATCH);
}

int	ft_counter(int nbr, int len, int neg)
{
	int	count;

	count = neg;
	while (1)
	{
		count++;
		if (nbr / len == 0)
			break ;
		nbr /= len;
	}
	return (count);
}

char	*ft_converted(char *base_to, int nbr, int neg)
{
	int		len;
	char	*dest;
	int		total;
	int		i;

	len = ft_strlen(base_to);
	total = ft_counter(nbr, len, neg);
	if (!(dest = (char *)malloc(sizeof(char) * (total + 1))))
		return (0);
	if (neg)
	dest[0] = '-';
	i = neg;
	while (i < total)
	{
		dest[total - (!neg) - i++] = base_to[nbr % len];
		nbr = nbr / len;
	}
	dest[total] = '\0';
	return (dest);
}
