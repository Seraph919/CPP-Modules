CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
NAME = Account

SRC = Account.cpp tests.cpp

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
	clear && ./Account