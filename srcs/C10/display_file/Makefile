Name 		= libft.a
Gcc			= gcc
Cflag		= -Wall -Wextra -Werror
Include		= -I includes/

Srcs		= srcs/
Srcs_files	= ft_display_file.c \

Objs_files	= ${Srcs_files:.c=.o}

Srcs_loca	= ${addprefix ${Srcs}, ${Srcs_files}}
Objs_loca	= ${addprefix ${Srcs}, ${Objs_files}}

all: Srcs 	${Name}

Srcs:		${Srcs_loca}
${Srcs}%.o:	${Srcs}%.c
			${Gcc} ${Cflag} ${includes} -c $< -o $@

${Name}:	${Objs_loca}
			@echo "\033[36m (0%) Compiling... wait a sec."
			@ar rc ${Name} ${Objs_loca}
			@ranlib ${Name}
			@echo "\033[36m \tfinished Compiling (100%) \033[0m"
			@${Gcc} -o out ft_tester.c
			@echo "\033[33m✔️ Alright, Just create a "text.txt" file to see if the function "ft_display_file" is working \033[0m" && ./out text.txt

clean:	
			@rm -f ${Objs_loca} out

fclean:		clean
			@rm -f ${Name}

re:			fclean all

.PHONY: all clean fclean re