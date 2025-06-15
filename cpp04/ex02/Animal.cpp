/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:11:47 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 17:13:30 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : Type("Animal")
{
    cout <<  Type << " default constructor called\n";
}

Animal::Animal(string _Type) : Type(_Type)
{
    cout <<  Type << " Paramitrized constructor called\n";
}

Animal::Animal(Animal &copy)
{
    this->Type = copy.Type;
    cout << Type << " Copy constructor called\n";
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        this->Type = other.Type;
        cout << Type << " Assignment operator called\n";
    }
    return *this;
}

void Animal::makeSound() const
{
    cout << Type << " Sound\n";
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
    cout <<  Type << " Distructor called\n";
}