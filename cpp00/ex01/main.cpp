/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:29:55 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 18:09:10 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"



void WelcomingMessage()
{
    std::cout << "               ▄▖▌       ▌     ▌\n";
    std::cout << "               ▙▌▛▌▛▌▛▌█▌▛▌▛▌▛▌▙▘\n"; 
    std::cout << "               ▌ ▌▌▙▌▌▌▙▖▙▌▙▌▙▌▛▖\n";
    std::cout << std::string(15, '-') << std::string(18, ' ')<< std::string(10, '-') << std::endl;
    std::cout << "Available options:" << std::endl;
    std::cout << "• ADD :"<< std::endl;
    std::cout << "  used to append a contact to the phonebook"<< std::endl;
    std::cout << "• SEARCH :"<< std::endl;
    std::cout << "  used to search for a particular contact"<< std::endl;
    std::cout << "• EXIT :"<< std::endl;
    std::cout << "  used to exit from the program"<< std::endl;
}

int main(int ac, char **av)
{
    (void) av;
    if (ac != 1)
        return (std::cout << "You need only ./phonebook to run the program\n", ERROR);
    std::string input;
    PhoneBook PhoneBook;
    WelcomingMessage();
    while (1)
    {
        std::cout << "> ";
        getline(std::cin, input);
        while (input.empty())
        {
            std::cout << "> ";
            getline(std::cin, input);
        }
        if (input.compare("exit") == 0 || input.compare("EXIT") == 0){
            PhoneBook.exit();
            break;
        }
        else if (input.compare("search") == 0 || input.compare("SEARCH") == 0){
            PhoneBook.search();
        }
        else if (input.compare("add") == 0 || input.compare("ADD") == 0){
            PhoneBook.add();
        }
        else
            std::cout << "please enter a valid option\n";
    }
    return 0;
}

// you can lowecase every input and remove the upper statment...
