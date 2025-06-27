/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:06:39 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/27 20:11:07 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Default Cure Constuctor Called\n";
}

Cure* Cure::clone() const
{
    Cure *newCure = new Cure();
    newCure->Type = Type;

    return newCure;
}

std::string const &Cure::getType() const
{
    return this->Type;
}

void Cure::use(ICharacter& target)
{                             // ! edit later
    std::cout << "* heals "<< target.getName() <<"’s wounds *\n";
}

Cure::~Cure()
{
    std::cout << "Cure Destructor Called\n";
}