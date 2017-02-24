NAME = libft.a

SRC = srcs/ft_putchar \
 		srcs/ft_putstr \
 		srcs/ft_strcmp \
 		srcs/ft_strlen \
 		srcs/ft_swap \


OBJ  := $(addsuffix .o, $(SRC))\

all:$(OBJ)
	@ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): %.o: %.c
	@gcc -c -Wall -Wextra -Werror -I. $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all