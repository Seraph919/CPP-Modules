/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 09:24:02 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/05 10:22:23 by asoudani         ###   ########.fr       */
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
            break;
        case INFO:
            this->info();
            break;
        case WARNING:
            this->warning();
            break;
        case ERROR:
            this->error();
            break;
        default:
            std::cout << "That's Not a Valid Choice\n";
            break;
    }
}