/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:12 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 17:10:13 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    cout << getType() << " Default constructor called\n";
}

Dog::Dog(Dog &other) : Animal(other)
{
    cout << getType() << " Copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        cout << getType() << " Assignment operator called\n";
    }
    return *this;
}

void Dog::makeSound() const
{
    cout << "The " << getType() << " is Barking!\n";
}

Dog::~Dog()
{
    cout << getType() << "  distructor called\n";
}