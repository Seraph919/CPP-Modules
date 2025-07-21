/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:46:24 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/03 18:52:51 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << '\n';
    {
    std::cout << "Zombie1 :\n";
    
    Zombie zombie1("STACK");
    // zombie1.set_name("STACK");
    zombie1.announce();
    }
    
    std::cout << '\n';

    std::cout << "Allocated Zombie :\n";
    Zombie *zombie2 = newZombie("HEAP");
    zombie2->announce();
    delete zombie2;
    
    std::cout << '\n';

    std::cout << "randomchump :\n";
    randomChump("RANDOM_CHUMP");
    
}