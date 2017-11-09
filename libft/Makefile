SRC = part-one/*.c part-two/*.c bonus/*.c extra/*.c
OBJ = *.o
NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
CREATE_LIB = ar rc $(NAME) $(OBJ)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) -c $(SRC) -I.
	$(CREATE_LIB)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
