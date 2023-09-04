Name 	= hexadump.a
Gcc	= gcc
Cflag	= -Wall -Wextra -Werror
Include = -I ft_hexadump.h
Srcs_files	= ft_hexadump.c \

Objs_files = ${Srcs_files:.c=.o}

all: ${Name}
${Objs_files}%.o:	${Srcs_files}%.c
			${Gcc} ${Cflag} ${Include} -c $< -o $@

${Name}:	${Objs_files}
			@ar rc ${Name} ${Objs_files}
			@ranlib ${Name}
			@${Gcc} ${Cflag} ${Include} -o out ft_tester.c
			@./out ft_tester.c

clean:
			@rm -f ${Objs_files}

fclean:		clean
			@rm -f ${Name} out

re:			fclean all

.Phony:		all clean fclean re
