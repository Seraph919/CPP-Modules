/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:09:57 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 19:51:40 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : Type("Animal")
{
    std::cout << "Animal default consztructor called\n";
}

Animal::Animal(std::string _Type) : Type(_Type)
{
    std::cout <<  "Animal Paramitrized constructor called\n";
}

Animal::Animal(const Animal &copy)
{
    this->Type = copy.Type;
    std::cout << "Animal Copy constructor called\n";
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        this->Type = other.Type;
        std::cout << "Animal Assignment operator called\n";
    }
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound\n";
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
    std::cout <<  "Animal Distructor called\n";
}