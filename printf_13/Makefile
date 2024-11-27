NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_putchar.c ft_putstr.c ft_print_d.c ft_print_i.c ft_print_u.c \
      ft_print_p.c ft_puthexalow.c ft_puthexaup.c ft_printf.c
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
