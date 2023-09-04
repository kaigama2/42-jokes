/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:19:38 by kadikwu           #+#    #+#             */
/*   Updated: 2023/08/30 16:35:20 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/piscine.h"
#include "ft_convert_base2.c"
// Note: Each functions must not be more than 25 lines
// here is a function that return the final result of converting
// from one base to the other
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	int	result;
	int	neg;
	int	len;
	int	output;

	i = 0;
	result = 0;
	neg = 1;
	len = 0;
	output = 0;
	while (nbr[i] == ' ' || nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			neg *= -1;
		i++;
	}
	len = ft_strlen(base_from);
	while ((output = ft_scan_nbr(base_from, nbr[i])) != NO_MATCH)
	{
		result = result * len;
		result += output;
		i++;
	}
	neg = result == false ? true : neg;
	return (ft_converted(base_to, result, (neg > 0 ? false : true)));
}

int main()
{
	printf("$%s$\n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"));
	printf("$%s$\n", ft_convert_base("----7fffffff", "0123456789abcdef", "01"));
	printf("$%s$\n", ft_convert_base("--+-1024", "0123456789", "0123456789"));
	printf("$%s$\n", ft_convert_base("-0", "0123456789", "abcdefghij"));
	return (0);
}