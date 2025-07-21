/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:12 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 19:52:02 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default constructor called\n";
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog Copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        std::cout << "Dog Assignment operator called\n";
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "The " << getType() << " is Barking!\n";
}

Dog::~Dog()
{
    std::cout << "Dog distructor called\n";
}