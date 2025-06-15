/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:33:17 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/04 19:13:33 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int Error()
{
    std::cerr << "This program takes three parameters in the following order:\n"
    << "A filename and two strings, s1 and s2." << std::endl;
    return 1;
}

int main(int ac, char **av)
{
    if (ac != 4){
        return (Error());
    }

    std::string filename = av[1];
    filename.append(".replace");


    std::fstream file(av[1]);
    if (!file.is_open()){
        return std::cerr << "Failed to open the file." << std::endl, 1;    
    }


    // reading the whole file at once..
    std::stringstream buffer;
    buffer << file.rdbuf();    
    std::string lines = buffer.str();



    std::ofstream returned(filename.c_str());
    
    // created.write(lines.c_str(), lines.length());
    std::string keyword = av[3];
    while (lines.find(av[2]) != std::string::npos) // std::string::npos == MAX_SIZE_t (is returned by string functions in error)
    {
        // std::cout << lines << std::endl;
        int pos = lines.find(av[2]);
        lines.erase(pos, keyword.length());
        for (size_t i = 0; i < keyword.length(); i++)
            lines.insert(pos++, 1, av[3][i]);
            
    }
    std::cout << lines << std::endl;
    returned << lines;
    file.close();
    return 0;
}