/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:33 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 17:10:34 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    cout << getType() << " Default constructor called\n";
}
//! i forgot to add ; in the end of the class def.. and the stupid compiler says that constructor doesnt have a return value!!
WrongCat::WrongCat(WrongCat &other) : WrongAnimal(other)
{
    cout << getType() << " Copy constructor called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
    {
        WrongAnimal::operator=(other);
        cout << getType() << " Assignment operator called\n";
    }
    return *this;
}

void WrongCat::makeSound() const
{
    cout << "WrongCat sound (There is no meowing here)!\n";
}

WrongCat::~WrongCat()
{
    cout << getType() << " distructor called\n";
}