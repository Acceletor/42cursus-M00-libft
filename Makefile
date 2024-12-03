# compiler and flag
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
cc = cc
AR = ar rcs
SRC = ft_*.c
OBJ = $(SRC:.c=.o)

#target
# create the library

all: $(NAME)

$(NAME): $(OBJ)