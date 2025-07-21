/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:22:19 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/17 15:24:55 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB(Weapon *weapon, std::string name) : weapon(weapon)
// {
//     // name = name;
//     std::cout << "HumanB " << this->name << " has been created!\n";
// }

HumanB::HumanB(std::string name) : name(name){
    this->weapon = NULL;
    std::cout << "HumanB " << this->name << " has been created!\n";
}

// seting a pointer to a refrenced variable makes you point to a variable in a certain scoop from other functions..
void HumanB::setWeapon(Weapon &type){
    this->weapon = &type;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their "<< HumanB::weapon->getType() << std::endl; 
}

HumanB::~HumanB()
{
    std::cout << "HumanB has been destroyed!\n";    
}
