# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 17:49:55 by fbrisson          #+#    #+#              #
#    Updated: 2022/10/05 12:08:05 by fbrisson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

PROG = libft.a

HEAD = includes/

OBJ = ${SRC:.c=.o}

.c.o:
	gcc -Wall -Wextra -Werror -c -I ${HEAD} $< -o $@

${PROG}: ${OBJ}
	ar rc ${PROG} ${OBJ}

all: ${PROG}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${PROG}

re : fclean all
