/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph <seraph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:06:39 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/28 06:58:13 by seraph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
    // std::cout << "Default Cure Constuctor Called\n";
}

Cure::Cure(std::string name)
{
    Type = "cure";
}

Cure::Cure(Cure const &copy)
{
    if (this != &copy)
    {
        this->Type = copy.getType();
    }
}

Cure &Cure::operator=(Cure const &copy)
{
    this->Type = copy.getType();
    return *this;
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