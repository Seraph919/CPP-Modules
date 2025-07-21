CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Zombie

SRC = main.cpp zombieHorde.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(?) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

test : re
	clear && ./Zombie