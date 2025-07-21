/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:11:47 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 22:03:36 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : Type("Animal")
{
    std::cout <<  Type << " default constructor called\n";
}

Animal::Animal(std::string _Type) : Type(_Type)
{
    std::cout <<  Type << " Paramitrized constructor called\n";
}

Animal::Animal(const Animal &copy)
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

void Animal::setType(std::string _Type)
{
    Type = _Type;
}

std::string Animal::getType() const
{
    return (Type);
}

Animal::~Animal()
{
    std::cout <<  Type << " Distructor called\n";
}