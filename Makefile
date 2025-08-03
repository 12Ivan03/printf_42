CC = cc
CFLAGS = -Wall -Wextra -Werror -I./libft_42 -I.
CLIB = -c

SRC_FILES = ft_printf.c ft_putchar_print.c ft_putstr_print.c ft_print_address.c \
			ft_convert_num_to_hex.c ft_putnum.c ft_unsigned_int.c ft_hexa_num.c \
			ft_write.c ft_convert_ptr_to_hex.c

OBJ_FILES = $(SRC_FILES:.c=.o)

NAME = libftprintf.a

LIBFT_DIR = ./libft_42
LIBFT_A = $(LIBFT_DIR)/libft.a

all: $(LIBFT_A) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(CLIB) -c $^ -o $@

$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ_FILES)
	@mkdir -p tmp_obj
	@cd tmp_obj && ar -x ../$(LIBFT_A)
	ar -rcs $@ $(OBJ_FILES) tmp_obj/*.o
	@rm -rf tmp_obj

clean:
	rm -f $(OBJ_FILES)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: clean fclean all

.PHONY: clean fclean all