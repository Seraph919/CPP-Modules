/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:46:21 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/03 18:51:55 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
    // Zombie *Zombie = newZombie(name);
    // Zombie->announce();
    // delete Zombie;
    (void) name;
    Zombie zombie(name);
    zombie.announce();
}
