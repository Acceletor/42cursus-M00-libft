# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/11 18:11:39 by ksuebtha          #+#    #+#              #
#    Updated: 2024/12/11 19:29:22 by ksuebtha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror
cc = gcc
SRC = ${wildcard ft_*.c}
OBJ = ${SRC:.c=.o}

#target
# create the library

all: ${NAME}

${NAME}: ${OBJ}
	@ar rcs ${NAME} ${OBJ}
	@echo "library ${NAME} created successfully"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f ${OBJ}
	@echo "All objects files cleaned successfully"

fclean: clean
	@rm -f ${NAME}
	@echo "All objects and library ${NAME} cleaned successfully"

re: fclean all

.PHONY: all clean fclean re
	