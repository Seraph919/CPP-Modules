/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:04 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 19:51:57 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
   std::cout << "Cat Default constructor called\n";
}

Cat::Cat(const Cat &other) : Animal(other)
{
   std::cout << "Cat Copy constructor called\n";
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
       std::cout << "Cat Assignment operator called\n";
    }
    return *this;
}

void Cat::makeSound() const
{
   std::cout << getType() << " sound (There is no meowing here)!\n";
}

Cat::~Cat()
{
   std::cout << "Cat distructor called\n";
}