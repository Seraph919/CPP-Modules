/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:04 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 17:10:05 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    cout << getType() << " Default constructor called\n";
}
//! i forgot to add ; in the end of the class def.. and the stupid compiler says that constructor doesnt have a return value!!
Cat::Cat(Cat &other) : Animal(other)
{
    cout << getType() << " Copy constructor called\n";
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        cout << getType() << " Assignment operator called\n";
    }
    return *this;
}

void Cat::makeSound() const
{
    cout << getType() << " sound (There is no meowing here)!\n";
}

Cat::~Cat()
{
    cout << getType() << " distructor called\n";
}