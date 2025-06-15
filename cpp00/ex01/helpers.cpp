/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:17:58 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/02 17:18:33 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

std::string get_string(std::string prompt)
{
    std::string line;

    while (line.empty())
    {
        std::cout << prompt;
        getline(std::cin, line);
    }
    return line;
}

std::string completName(std::string line)
{
    std::string new_str;
    if (line.length() > 10)
    {
        new_str = line.substr(0, 9);
        return new_str.replace(9, 1, std::string(1,'.'));
    }
    else
        return line;
}

std::string spaces(std::string line)
{
    int len = line.length();
    if (len >= 10)
        return ("");
    else
    {
        return (std::string(10 - len, ' '));
    }
}


