# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 10:14:47 by vmutteri          #+#    #+#              #
#    Updated: 2020/09/29 14:23:01 by vmutteri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_tail
SRCS	=	ft_tail.c ft_ft.c
OBJS	=	${SRCS:.c=.o}
OPTION	=	-I${HEADER}
HEADER	=	ft.h
RM		=	rm -f
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
.c.o:		
			${CC} ${CFLAGS} ${OPTIONS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}	

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
