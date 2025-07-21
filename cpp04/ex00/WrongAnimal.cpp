/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:25 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 19:52:11 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Type("WrongAnimal")
{
    std::cout <<  "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(std::string _Type) : Type(_Type)
{
    std::cout <<  "WrongAnimal Paramitrized constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    this->Type = copy.Type;
    std::cout << "WrongAnimal Copy constructor called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
    {
        this->Type = other.Type;
        std::cout << "WrongAnimal Assignment operator called\n";
    }
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound\n";
}

void WrongAnimal::setType(std::string _Type)
{
    Type = _Type;
}

std::string WrongAnimal::getType() const
{
    return (Type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout <<  "WrongAnimal Distructor called\n";
}