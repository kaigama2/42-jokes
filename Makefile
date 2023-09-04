Name = libft.a
Gcc = gcc
Cflag = -Wall -Wextra -Werror
Header = -I includes/
Off_colour = \033[0m
Italize = \033[3m
Green = \033[32m

Srcs = Srcs/
Objs = Objs/
Directorys = C00 C01 C02 C03 C04 C05 C06 C07 C08 C09 C10 C11 C12
# here is for directory path srcs/c00, srcs/c01
# while /, ./ or ../ denotes directory entries into a folder
Srcs_loca = ${foreach dir, ${Directorys}, ${addprefix ${Srcs}, ${dir}}}
Objs_loca = ${foreach dir, ${Directorys}, ${addprefix ${Objs}, ${dir}}}
Srcs_files = ${foreach dir, ${Srcs_loca}, ${wildcard ${dir}/*.c}}
Objs_files = ${subst ${Srcs}, ${Objs}, ${Srcs_files:.c=.o}}

all: ${Name}
# %.o and %.c represent list all .o file and .c file
${Objs}%.o: ${Srcs}%.c
# create a folder with directory path or folder path
			@mkdir -p ${Objs} ${Objs_loca}
# -c represent arrange all .o files as output without linking
# -o represent putting the output program in a file
			@${Gcc} ${Cflag} ${Header} -c $< -o $@
${Name}:	${Objs_files}
			@echo "\033[32m \033[3m [ 0% ] (❀❛ ֊ ❛„)♡ Compiling... wait a sec."
			@ar rc ${Name} ${Objs_files}
			@ranlib ${Name}
			@echo "\033[32m \033[3m [ 100% ] ✺◟(👁 ͜ʖ👁)◞✺ Finish compiling "${Name}" you can \
use the library testing it with our avaiable tester "ft_check.c"."
			@${Gcc} -g0 ${Cflag} ${Header} -o out ft_check.c
			@echo "\033[32m \033[3m👍OK \033[0m"
			@./out

clean:		
			@rm -rf ${Objs_files} ${Objs} out
			@echo "\033[32m \033[3m ︻デ═一 Remove dir_Objs, Objs_files, Out \033[0m"

fclean:		clean
			@rm -f ${Name}
			@echo "\033[38m \033[3m ( ☞•́⍛•̀)╭☞  Remove "libft.a" \033[0m"
re:			fclean all

.PHONY:		all clean fclean re