CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SRC = ScalarConverter.cpp main.cpp
NAME = converted

all: $(NAME)

$(NAME):
	$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clear:

fclean: clear
	rm -f $(NAME)

re: fclean all