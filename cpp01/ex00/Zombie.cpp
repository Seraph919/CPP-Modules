/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:46:32 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/16 17:45:14 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie class has been created\n";
}

Zombie::Zombie(std::string _name) : name(_name)
{
    std::cout << "Zombie class has been created\n";
}

void Zombie::announce( void ){
    std::cout << Zombie::name << " : BraiiiiiiinnnzzzZ...\n";
}

void Zombie::set_name(std::string _name)
{
    Zombie::name = _name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " has been destroyed\n";
}