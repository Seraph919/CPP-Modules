/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:12:14 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 22:01:58 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    brain = new Brain();
    std::cout << getType() << " Default constructor called\n";
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog Copy constructor called\n";
    this->brain = NULL;
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        this->Type = other.Type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*(other.brain));
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
    delete brain;
    std::cout << getType() << "  distructor called\n";
}