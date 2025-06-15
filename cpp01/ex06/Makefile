CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
NAME = harlFilter

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all