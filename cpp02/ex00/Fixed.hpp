#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int raw;
		static const int fract = 8;
	public:
		Fixed();
		Fixed(Fixed &copied);
		Fixed& operator=(const Fixed &copied);
		int getRawBits( void ) const;
		void setRawBits (int const raw);
		~Fixed();
};

#endif
