/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:11:33 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/26 14:34:25 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    brain = new Brain();
    std::cout << getType() << " Default constructor called\n";
}

Dog::Dog(Dog &other) : Animal(other)
{
    std::cout << getType() << " Copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        std::cout << getType() << " Assignment operator called\n";
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "The " << getType() << " is Barking!\n";
}

Dog::~Dog()
{
    delete brain;
    std::cout << getType() << "  distructor called\n";
}