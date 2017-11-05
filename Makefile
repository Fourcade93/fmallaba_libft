SRC = bonus/*.c is-src/*.c mem-src/*.c str-src/*.c other/*.c
OBJ = *.o
INC = -Iinc/
NAME = libft.a
GCO = gcc -c -Wall -Werror -Wextra $(SRC) $(INC)
GCC = ar rc $(NAME) $(OBJ)

all: $(NAME)

$(NAME): to_o
	$(GCC)

to_o:
	$(GCO)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
