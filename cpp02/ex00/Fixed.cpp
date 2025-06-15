#include "Fixed.hpp"

Fixed::Fixed() : raw(0)
{
	std::cout << "Default Constructor called\n";
}

Fixed::Fixed(Fixed &copied)
{
	std::cout << "Copy Construtor Called\n";
	if (&copied != this)
	{
		this->raw = copied.getRawBits();
	}
}

Fixed& Fixed::operator=(const Fixed &copied)
{
	std::cout << "Copy assignment operator called\n";
	this->raw = copied.getRawBits();
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