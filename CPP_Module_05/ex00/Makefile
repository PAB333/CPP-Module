NAME = Bureaucrat

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinc

SRCS = src/Bureaucrat.cpp src/main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp includes/Bureaucrat.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re