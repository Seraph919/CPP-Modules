/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:22:13 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/04 09:44:51 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap): name(name), weapon(weap)
{
    std::cout << "HumanA "<< this->name << " has been created!\n";
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their "<< this->weapon.getType() << std::endl;
}
HumanA::~HumanA()
{
    std::cout << "HumanA "<< this->name <<" has been destroyed!\n";    
}
