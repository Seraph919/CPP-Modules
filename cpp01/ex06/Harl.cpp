/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 10:16:51 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/19 15:18:28 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[DEBUG] I love it when my coffee is just the right temperature... for 2.3 seconds." << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO] Did you know? 73.6% of statistics are made up on the spot... including this one." << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[WARNING] I will spontaneously combust if this printer jams one more time!" << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ERROR] My last brain cell just rage quit." << std::endl;
}



void Harl::complain( std::string level )
{
    int lvl = -1;
    for (size_t i = 0; i < level.length() ; i++)
        level[i] = toupper(level[i]);
    std::string cases[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level.compare(cases[i]) == 0)
            lvl = i;
    }

    switch (lvl){
        case DEBUG:
            this->debug();
            std::cout << std::endl;
        case INFO:
            this->info();
            std::cout << std::endl;
        case WARNING:
            this->warning();
            std::cout << std::endl;
        case ERROR:
            this->error();
            std::cout << std::endl;
            break;
        default:
            std::cout << "Probably complaining about insignificant problem\n";
            std::cout << std::endl;
    }
}