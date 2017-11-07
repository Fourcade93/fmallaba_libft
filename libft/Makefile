SRC = part-one/*.c part-two/*.c bonus/*.c
OBJ = *.o
NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
CREATE_LIB = ar rc $(NAME) $(OBJ)

all:

$(NAME): $(OBJ)
	$(CREATE_LIB)

%.o: $(SRC)
	$(CC) $(FLAGS) -c $< -I.

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
