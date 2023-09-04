# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 14:15:53 by kadikwu           #+#    #+#              #
#    Updated: 2023/09/04 14:59:28 by kadikwu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##### Building a different version of Makefile ################
###################### Ingredient (Building variable) ################################
################ here is the program name or archive file to be created Tail #####
NAME = Tail
SRCS = srcs/
SRCS_FILES = ft_putstr.c \

###################### creating a .o file depending on .c file #####################
OBJ_FILES = ${SRCS_FILES:.c=.o}

################### Paths #################
SRCS_PATH = ${addprefix ${SRCS}, ${SRCS_FILES}}
OBJ_PATH = ${addprefix ${SRCS}, ${OBJ_FILES}}

################### Utensils ################
GCC 	= gcc
CFLAG 	= -Wall -Wextra -Werror
INCLUDE = -I includes/
RM		= rm -rf bin/

################## Recipes ########################## 
all:	${NAME}
################## pairing up .o with .c using % character ##############
%.o:	%.c
################# expanding first target(.o) using $@ and expanding the second target(.c) using $< ####
		${GCC} ${CFLAG} ${INCLUDE} -o $@ -c $<

################# ar used to create an archive file while -r adding files to our archive file #######################	
${NAME}:	${OBJ_PATH}
			@ar -rc ${NAME} ${OBJ_PATH}
################# adding a table of content to an archive libraries ###############################
			@ranlib ${NAME}

clean:
			${RM} ${OBJ_PATH}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
