/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:46:24 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/16 20:53:37 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    // std::cout << "started\n" <<std::endl;
    int numberOfZombies = 22;
    Zombie *zombies = zombieHorde(numberOfZombies, "ayoub");
    if (!zombies)
        return 1;
    for (int i = 0; i < numberOfZombies; i++)
        zombies[i].announce();
    delete [] zombies;
}