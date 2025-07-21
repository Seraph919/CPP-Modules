/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:33 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 19:52:15 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << getType() << " Defaulzt constructor called\n";
}
//! i forgot to add ; in the end of the class def.. and the stupid compiler says that constructor doesnt have a return value!!
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << getType() << " Copy constructor called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
    {
        WrongAnimal::operator=(other);
        std::cout << getType() << " Assignment operator called\n";
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound (There is no meowing here)!\n";
}

WrongCat::~WrongCat()
{
    std::cout << getType() << " distructor called\n";
}