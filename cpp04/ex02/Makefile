CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)
Name = Animal

all : $(Name)

$(Name) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(Name)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(Name)

re : fclean all