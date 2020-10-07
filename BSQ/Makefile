# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/06 11:05:26 by vmutteri          #+#    #+#              #
#    Updated: 2020/10/06 11:06:00 by vmutteri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	BSQ
SRCS	=	main.c ./srcs/ft_str_utils.c ./srcs/map_return.c
OBJS	=	${SRCS:.c=.o}
OPTION	=	-I${HEADER}
HEADER	=	./srcs/ft.h
RM		=	rm -f
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
.c.o:	=
			${CC} ${CFLAGS} ${OPTION} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

flean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all flean fclean re
