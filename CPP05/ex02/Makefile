CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Bureaucrat.cpp main.cpp 
NAME = Bureaucrat

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) $(?) -o $(NAME)

clean:
	echo "already cleaned"

fclean:
	rm -f $(NAME)

re : fclean all