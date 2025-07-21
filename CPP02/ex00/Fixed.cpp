/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:08:34 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/17 14:42:01 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// cause it's static it has to be defined outside
const int Fixed::fract = 8;

Fixed::Fixed() : raw(0)
{
	std::cout << "Default Constructor called\n";
}

Fixed::Fixed(const Fixed &copied)
{
	std::cout << "Copy Construtor Called\n";

	*this = copied;
}

Fixed& Fixed::operator=(const Fixed &copied)
{
	std::cout << "Copy assignment operator called\n";
	if (&copied != this)
	{
		this->raw = copied.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return this->raw;
}

void Fixed::setRawBits (int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->raw = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor is Called\n";
}