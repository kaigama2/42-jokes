#!/bin/bash
# -c arrange all .o files as output without linking
gcc -Wall -Wextra -Werror -c ft_putstr.c ft_putchar.c ft_strcmp.c ft_strlen.c ft_swap.c
# -r represent adding an existing or specific file into the archive libraries while
# -c represent whenever an archive is created let's write something into
# it... a (standard error) message
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
# create our archive libraries
ranlib libft.a