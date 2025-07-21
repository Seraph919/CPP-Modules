/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:22:26 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/04 10:32:40 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->setType(type);
    std::cout << "Weapon "<< this->type<< " has been created!\n";
}

const std::string &Weapon::getType()
{
    return Weapon::type;
}

void    Weapon::setType(std::string new_type)
{
    Weapon::type = new_type;
}
Weapon::~Weapon(){
    std::cout << "Weapon "<< this->type<< " has been destroyed!\n";
}