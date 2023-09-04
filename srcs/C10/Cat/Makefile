NAME	= cat
SRCS	= ft_cat.c \

OBJS	= ${SRCS:.c=.o}

GCC		= gcc
CFLAG	= -Wall -Werror -Wextra
RM		= /bin/rm -rf

${OBJS}%.o:		${SRCS}%.c
# linking both object and srcs files together
				${GCC} ${CFLAG} -I cat.h -c $< -o $@

all:			${NAME}

${NAME}:		${OBJS}
# compile object file and put the output program in a file name
# here our file name is called after the archiver library; cat
				${GCC} ${OBJS} -o $@

clean:			
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re