# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 17:49:55 by fbrisson          #+#    #+#              #
#    Updated: 2022/10/01 18:22:49 by fbrisson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 

PROG = rush-02

HEAD = includes/

OBJ = ${SRC:c=.o}

.c.o:
	gcc -Wall -Wextra -Werror -c -I ${HEAD} $< -o $@

${PROG}: ${OBJ}
	gcc -Wall -Wextra -Werror ${OBJ} -I ${HEAD} -o ${PROG}

all: ${PROG}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${PROG}
