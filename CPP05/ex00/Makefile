CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Bureaucrat.cpp main.cpp
NAME = Bureaucrat

all: $(NAME)

$(NAME):
	$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	echo "already cleaned"

fclean:
	rm -f $(NAME)

re : fclean all