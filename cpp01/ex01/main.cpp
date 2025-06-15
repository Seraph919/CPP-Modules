/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:46:24 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/02 20:40:14 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    // std::cout << "started\n" <<std::endl;
    Zombie *zombies = zombieHorde(3, "ayoub");
    for (int i = 0; i < 3; i++)
        zombies[i].announce();
    delete [] zombies;
}