CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook

SRC = main.cpp phonebook.cpp helpers.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

test : re
	clear && ./phonebook