# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror -O3 #-g3 -fsanitize=address
NAME = a.out
SRC = main.c
LIBFT = libft/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(SRC)
	$(CC) $(CFLAGS) $(SRC) -L libft -lft -o $(NAME)

$(LIBFT):
	make -C libft

clean:
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re
