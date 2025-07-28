CC = cc
CFLAGS = -Wall -Wextra -Werror -I./libft -I.
CLIB = -c

SRC_FILES = ft_printf.c ft_putchar_print.c ft_putstr_print.c ft_print_address.c \
			ft_convert_num_to_hex.c ft_putnum.c ft_unsigned_int.c ft_hexa_num.c \
			ft_write.c ft_convert_ptr_to_hex.c

OBJ_FILES = $(SRC_FILES:.c=.o)

NAME = libftprintf.a

LIBFT = ./libft/libft.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(CLIB) $^ -o $@

$(LIBFT):
	$(MAKE) -C libft

$(NAME): $(OBJ_FILES) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar -rcs $@ $^

clean:
	rm -f $(OBJ_FILES)
	$(MAKE) -C libft clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean

re: clean fclean all

.PHONY: clean fclean all