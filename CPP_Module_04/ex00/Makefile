NAME = Animal

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = src/Animal.cpp src/Cat.cpp src/Dog.cpp src/main.cpp src/WrongAnimal.cpp src/WrongCat.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re