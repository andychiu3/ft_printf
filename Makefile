# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fiftyblue <fiftyblue@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 16:51:59 by achiu             #+#    #+#              #
#    Updated: 2024/04/09 17:12:21 by fiftyblue        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ft_printf.c ft_nbr.c ft_char.c ft_hex.c

OBJ			= ${SRC:.c=.o}

CC			= cc

CFLAGS		= -Wall -Wextra -Werror

LIBFT_MAKE	= make -C libft/

LIBFT		= libft/libft.a

NAME		= libftprintf.a

all:		${NAME}

${NAME}:	${OBJ}
			${LIBFT_MAKE}
			cp ${LIBFT} ${NAME}
			ar rcs ${NAME} ${OBJ} 

clean:		
			${LIBFT_MAKE} clean
			rm -f ${OBJ}

fclean:		clean
			rm -f ${LIBFT}
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re