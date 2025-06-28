/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:06:39 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/28 04:04:07 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
    // std::cout << "Default Cure Constuctor Called\n";
}

Cure* Cure::clone() const
{
    Cure *newCure = new Cure();
    newCure->Type = this->Type;

    return newCure;
}

std::string const &Cure::getType() const
{
    return this->Type;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() <<"’s wounds *\n";
}

Cure::~Cure()
{
    std::cout << "Cure Destructor Called\n";
}