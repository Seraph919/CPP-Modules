/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph <seraph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:11:49 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/28 06:59:49 by seraph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
    // std::cout << "Default Ice Constuctor Called\n";
}

Ice* Ice::clone() const
{
    Ice *newIce = new Ice();
    newIce->Type = this->Type;
    return newIce;
}

std::string const &Ice::getType() const
{
    return this->Type;
}

Ice::Ice(std::string name)
{
    Type = "ice";
}

Ice::Ice(Ice const &copy)
{
    if (this != &copy)
    {
        this->Type = copy.getType();
    }
}

Ice &Ice::operator=(Ice const &copy)
{
    this->Type = copy.getType();
    return *this;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n"; 
}

Ice::~Ice()
{
    // delete this;
}