/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:09:21 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/19 16:50:58 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iterator>

float power(int x, int pow)
{
	if (pow == 0 || pow < 0)
		return 0;
	float result = x;
	for (int i = 1; i < pow; i++)
		result *= x;
	return (result);
}



const int Fixed::fractionalBits = 8;

Fixed::Fixed() : raw(0)
{
	// std::cout << "Default Constructor called\n";
}


Fixed::Fixed(const int val)
{
	this->raw = val << this->fractionalBits;
	// std::cout << "Int Constructor called\n";
}

Fixed::Fixed(const float val)
{
	this->raw = static_cast<int>(roundf(val * (1 << this->fractionalBits)));
	// std::cout << "Float Constructor called\n";
}

Fixed::Fixed(Fixed &copied)
{
	if (&copied != this)
	{
		this->raw = copied.getRawBits();
	}
	// std::cout << "Copy Construtor Called\n";
}

Fixed::Fixed(const Fixed &copied)
{
	if (&copied != this)
	{
		this->raw = copied.getRawBits();
	}
	// std::cout << "Copy Construtor Called\n";
}

Fixed& Fixed::operator=(float val)
{
	this->raw = static_cast<int>(roundf(val * (1 << this->fractionalBits)));
	return *this;
}

Fixed& Fixed::operator=(const Fixed &copied)
{
	// std::cout << "Copy assignment operator called\n";
	this->raw = copied.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called\n";
	return this->raw;
}

void Fixed::setRawBits (int const raw)
{
	// std::cout << "setRawBits member function called\n";
	this->raw = raw;
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(this->raw) / (1 << this->fractionalBits);
}

int Fixed::toInt( void ) const
{
	return (this->raw >> this->fractionalBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}


// TODO ex02 operators :

// >, <, >=, <=, == and !=
bool Fixed::operator<(const Fixed& other) const
{
	return (this->raw < other.raw);
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->raw > other.raw);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->raw <= other.raw);

}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->raw >= other.raw);

}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->raw == other.raw);

}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->raw != other.raw);
}

// +, -, *, and /


float Fixed::operator*(const Fixed& other) const
{
	// std::cout << "t= " << toFloat() << "o= " << other.toFloat() << std::endl;
	return this->toFloat() * other.toFloat();
}

float Fixed::operator-(const Fixed& other) const
{
	return this->toFloat() - other.toFloat();
}

float Fixed::operator+(const Fixed& other) const
{
	return this->toFloat() + other.toFloat();
}

float Fixed::operator/(const Fixed& other) const
{
	return this->toFloat() / other.toFloat() ;
}



Fixed &Fixed::operator++()
{
	++this->raw;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++this->raw;
	return (temp);
}

Fixed &Fixed::operator--()
{
	--this->raw;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	++this->raw;
	return (temp);
}


Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.raw > b.raw)
		return (a);
	// std::cout << << std::endl;
	return (b);
}















Fixed::~Fixed()
{
	// std::cout << "Destructor is Called\n";
}