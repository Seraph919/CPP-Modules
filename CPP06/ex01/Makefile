CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp  Serializer.cpp
OBJ = $(SRC:.cpp=.o)
NAME = serialize


all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all