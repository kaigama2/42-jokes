/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:06:55 by kadikwu           #+#    #+#             */
/*   Updated: 2023/08/30 18:04:52 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

// Creating a function ft_cat that do the same thing as the system's
// cat command-line

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str++, 1);
	}
}

int	ft_cat(char *file)
{
	int		fildes;
	int		output;
	char	buf;

	if ((fildes = open(file, O_RDONLY)) == -1)
		return (errno);
	while ((output = read(fildes, &buf, 1)))
	{
		ft_putchar(buf);
	}
	close (fildes);
	ft_putstr("\n");
	return (0);
}

int	ft_strerror(int buffer, char *file)
{
	if (buffer != 0)
	{
		ft_putstr(file);
		ft_putstr(": ");
		if (buffer == errno)
			ft_putstr("No such file or directory\n");
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc != 2)
		write (1, "Missing first argument\n", 24);
	if (argc == 2)
	{
		while (argv[i])
		{
			ft_strerror(ft_cat(argv[i]), argv[i]);
			i++;
		}
	}
	return (0);
}
