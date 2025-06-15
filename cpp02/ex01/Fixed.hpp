#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <ostream>

class Fixed{
	private:
		int raw;
		static const int fractionalBits = 8;
	public:
		Fixed();
		Fixed& operator=(const Fixed &copied);
		Fixed& operator=(float val);
		Fixed(const int val);
		Fixed(const float val);
		Fixed(Fixed &copied);
		Fixed(const Fixed &copied);
		float operator<<( Fixed fixed);
		int getRawBits( void ) const;
		void setRawBits (int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		friend std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
		~Fixed();
};

#endif
