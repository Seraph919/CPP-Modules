/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:09:57 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/26 14:32:42 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : Type("Animal")
{
    std::cout <<  Type << " default constructor called\n";
}

Animal::Animal(string _Type) : Type(_Type)
{
    std::cout <<  Type << " Paramitrized constructor called\n";
}

Animal::Animal(Animal &copy)
{
    this->Type = copy.Type;
    std::cout << Type << " Copy constructor called\n";
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        this->Type = other.Type;
        std::cout << Type << " Assignment operator called\n";
    }
    return *this;
}

void Animal::makeSound() const
{
    std::cout << Type << " Sound\n";
}

void Animal::setType(string _Type)
{
    Type = _Type;
}

string Animal::getType() const
{
    return (Type);
}

Animal::~Animal()
{
    std::cout <<  Type << " Distructor called\n";
}