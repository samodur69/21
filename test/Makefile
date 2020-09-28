# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/27 20:33:32 by vmutteri          #+#    #+#              #
#    Updated: 2020/09/27 23:13:34 by vmutteri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a

HEADER = includes/ft.h

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS 	= ${SRCS:.c=.o}

OPTION	= -I${HEADER}

RM		= rm -f

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

.c.o:	
		${CC} ${CFLAGS} ${OPTION} -c $< -o ${<:.c=.o}
		ar rc ${NAME} ${OBJS}
		ranlib ${NAME}

all:	${NAME}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:	
		 ${RM} ${OBJS}

fclean:	clean
		${RM} libft.a

re:		fclean all

.PHONY: all clean fclean re
