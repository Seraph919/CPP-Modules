/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:25 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/26 14:33:37 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Type("WrongAnimal")
{
    std::cout <<  Type << " default constructor called\n";
}

WrongAnimal::WrongAnimal(string _Type) : Type(_Type)
{
    std::cout <<  Type << " Paramitrized constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    this->Type = copy.Type;
    std::cout << Type << " Copy constructor called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
    {
        this->Type = other.Type;
        std::cout << Type << " Assignment operator called\n";
    }
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound\n";
}

void WrongAnimal::setType(string _Type)
{
    Type = _Type;
}

string WrongAnimal::getType() const
{
    return (Type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout <<  Type << " Distructor called\n";
}