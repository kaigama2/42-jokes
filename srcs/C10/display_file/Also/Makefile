Name = display
Gcc = gcc
Cflag = -Wall -Wextra -Werror

Srcs = ft_display_file.c

Objs = ${Srcs:.c=.o}

all: ${Name}

${Name}:	${Objs}
	${Gcc} ${Objs} -o $@

%.o:	%.c
	${Gcc} ${Cflag} -o $@ -c $<

clean:
	rm -f ${Objs}

fclean: clean
	rm -f ${Name}

re:	fclean all

.Phony:	all clean fclean re
