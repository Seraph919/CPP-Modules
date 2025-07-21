/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:11:25 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 21:53:39 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    this->brain = new Brain();
    std::cout << "Cat Default constructor called\n";
}
Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat Copy constructor called\n";
    this->brain = NULL;
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        this->Type = other.Type;
        if (this->brain)
            delete this->brain;
        brain = new Brain(*(other.brain));
        std::cout << "Cat Assignment operator called\n";
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound (There is no meowing here)!\n";
}

Cat::~Cat()
{
    delete brain; 
    std::cout << "Cat distructor called\n";
}