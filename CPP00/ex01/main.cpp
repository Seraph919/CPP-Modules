/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:29:55 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/02 18:22:17 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

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
    bool new_prompt = true;
    std::string input;
    (void) av;

    if (ac != 1)
        return (std::cout << "You need only ./phonebook to run the program\n", ERROR);
    
    PhoneBook PhoneBook;
    WelcomingMessage();
    while (1)
    {
        if (new_prompt)
            std::cout << "Main Menu:\n", new_prompt = false;
        std::cout << "> ";
        getline(std::cin, input);
        while (input.empty())
        {
            if (std::cin.eof())
            {
                input = "EXIT";
                break;
            }
            if (input != "")
                std::cout << "> ";
            getline(std::cin, input);
        }
        if (input.compare("EXIT") == 0){
            PhoneBook.exit();
            break;
        }
        else if (input.compare("SEARCH") == 0){
            new_prompt = true;
            PhoneBook.search();
        }
        else if (input.compare("ADD") == 0){
            new_prompt = true;
            PhoneBook.add();
        }
        else
            std::cout << "please enter a valid option\n";
    }
    return 0;
}
