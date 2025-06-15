CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRC = main.c
OBJ = $(SRC:.c=.o)
NAME = program

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all