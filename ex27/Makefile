NAME = ft_display_file

SRC = ft_display_file \

OBJ  := $(addsuffix .o, $(SRC))\

all:$(OBJ)
	@gcc $(OBJ) -o $(NAME)

$(OBJ): %.o: %.c
	@gcc -c -Wall -Wextra -Werror -I. $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
