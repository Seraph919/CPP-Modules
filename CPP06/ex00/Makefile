# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/09 13:17:31 by asoudani          #+#    #+#              #
#    Updated: 2025/11/09 13:17:32 by asoudani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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