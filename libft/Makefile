# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fiftyblue <fiftyblue@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 11:46:34 by achiu             #+#    #+#              #
#    Updated: 2024/03/15 20:23:18 by fiftyblue        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRC			=  \
			ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_bzero.c ft_calloc.c \
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
			ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c \
			ft_strchr.c ft_strcpy.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_split.c ft_strlcat.c  \
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
			
OBJ			= ${SRC:.c=.o}

HEAD		= -I includes

CC			= cc

CFLAGS		= -Wall -Wextra -Werror

all:		 ${NAME}

${NAME}:	${OBJ}
			ar rcs ${NAME} ${OBJ}

clean: 		
			rm -f ${OBJ}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

# ft_split.c ft_strtrim.c ft_substr.c ft_calloc.c ft_bzero.c ft_memset.c ft_strlen.c ft_strchr.c
# ft_itoa.c ft_calloc.c ft_bzero.c ft_memset.c