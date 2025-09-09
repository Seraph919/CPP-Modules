CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = AForm.cpp Bureaucrat.cpp main.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
NAME = Intern

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) $(?) -o $(NAME)

clean:
	echo "already cleaned"

fclean:
	rm -f $(NAME)

re : fclean all