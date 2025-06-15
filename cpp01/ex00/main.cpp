/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:46:24 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/02 20:32:54 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << std::endl;

    std::cout << "Zombie1 :\n";
    
    {
    Zombie zombie1;
    zombie1.set_name("STACK");
    zombie1.announce();
    }
    
    std::cout << std::endl;

    std::cout << "Allocated Zombie :\n";
    Zombie *zombie2 = newZombie("HEAP");
    zombie2->announce();
    delete zombie2;
    
    std::cout << std::endl;

    std::cout << "randomchump :\n";
    randomChump("RANDOM_CHUMP");
    
}