Name		= libft.a

#to go into directory in makefile always add /
Srcs		= Srcs/
Srcs_files	= ft_putchar.c \
			 ft_putstr.c \
			 ft_strcmp.c \
			 ft_strlen.c \
			 ft_swap.c \


Srcs_location = ${addprefix ${Srcs}, ${Srcs_files}}
Objs_location = ${addprefix ${Srcs}, ${Objs_files}}
# .c=.o represent our object files
Objs_files = ${Srcs_files:.c=.o}

Gcc			= gcc
Cflag		= -Wall -Wextra -Werror
Header		= -I includes/
Off_color	= \033[0m
Italize		= \033[3m
Red			= \033[31m
Green		= \033[32m
Yellow		= \033[33m
Blue		= \033[36m

${Srcs}%.o:	${Srcs}%.c
		@${Gcc} ${Cflag} ${Header} -c $< -o $@

all: Srcs ${Name}

Srcs:	${Srcs_location}

${Name}:	${Objs_location}
			@echo "${Blue} ${Italize} [ 0% ] ${Yellow}Please wait compiling... ${Off_color}"
#ar: ft_putchar.o: No such file or directory#
# fixed: here a path to the file is needed after our libft.a library
			@ar rc ${Name} ${Objs_location}
			@ranlib ${Name}
			@echo "${Yellow} ${Italize} finished compiling ${Blue} [ 100% ]. ${Off_color}"
			@echo "${Green} ${Italize} checking if my library is working ${Off_color}"
			@${Gcc} ${Cflag} ${Header} -o out ft_tester.c
			@echo "${Blue} ${Italize}\t\t🟢Ok${Off_color}" && ./out

#*** No rule to make target `@rm', needed by `clean'.  Stop.#
#fixed: take rm -f to the next line
clean:		
			@rm -f ${Objs_location} out

fclean:		clean
			@rm -f ${Name}

re:			fclean all

.Phony: all clean fclean re