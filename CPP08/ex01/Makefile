CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRC = main.cpp Span.cpp
NAME = span

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	rm -f $(NAME)

re : fclean all