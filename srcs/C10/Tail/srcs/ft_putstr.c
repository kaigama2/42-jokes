/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:02:33 by kadikwu           #+#    #+#             */
/*   Updated: 2023/09/04 17:04:52 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(void)
{
	ft_putstr("Kaigama\n");
	return (0);
}
