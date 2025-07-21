/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 20:34:07 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/16 20:52:55 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N > 0)
    {
        Zombie *zombies = new Zombie[N];
        for (int i = 0; i < N; i++)
        {
            zombies[i].set_name(name);
        }
        return zombies;
    }
    std::cout << "Not a Valid Horde Number!\n";
    return NULL;
}
