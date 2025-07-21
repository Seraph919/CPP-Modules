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
	rm -f test test.replace

re : fclean all

test : re
	echo "For instance, on the planet Earth, man had always assumed that he was more intelligent than dolphins because he had achieved so much—the wheel, New York, wars and so on—whilst all the dolphins had ever done was muck about in the water having a good time. But conversely, the dolphins had always believed that they were far more intelligent than man—for precisely the same reasons." > test
	clear && ./program test man evaluator 