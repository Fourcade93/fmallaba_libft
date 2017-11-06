SRC = bonus/*.c is-src/*.c mem-src/*.c str-src/*.c other/*.c
OBJ = *.o
INC = -Iinc/
NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra $(INC)
CREATE_LIB = ar rc $(NAME) $(OBJ)

all: $(NAME)

$(NAME): $(OBJ)
	$(CREATE_LIB)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $(SRC)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
