/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:06:55 by kadikwu           #+#    #+#             */
/*   Updated: 2023/08/31 20:36:37 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"
// Creating a program that displays the file given as an argument
// on the terminal

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	ft_strcmp(char *s, char *s1)
{
	while (*s && *s1 && *s == *s1)
	{
		s++;
		s1++;
	}
	return (*s - *s1);
}

void	ft_display(int argc, char **argv)
{
	int		fildes;
	int		output;
	char	buf;

	if (argc < 2)
		ft_putstr("File name missing\n");
	else if (argc > 2)
		ft_putstr("Too many arguments\n");
	else if (argc == 2)
	{
		if (ft_strcmp(argv[1], ".") == 0 || ft_strcmp(argv[1], "..") == 0)
		{
			ft_putstr(argv[1]);
			ft_putstr(": is a directory entry\n");
		}
		else if ((fildes = (open(argv[1], O_RDONLY))) == -1)
		{
			ft_putstr(argv[1]);
			ft_putstr(": fail to open\n");
		}
		else
		{
			while ((output = (read(fildes, &buf, 1))))
			{
				ft_putchar(buf);
			}
			close (fildes);
			ft_putchar('\n');
		}
	}
}
