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

		int getRawBits( void ) const;
		void setRawBits (int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;

		friend std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
		float operator<<(Fixed fixed);
		bool operator<(const Fixed& other) const;
		bool operator>(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		float operator*(const Fixed& other) const;
		float operator-(const Fixed& other) const;
		float operator+(const Fixed& other) const;
		float operator/(const Fixed& other) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		static Fixed max(const Fixed &a, const Fixed &b);

		~Fixed();
};

#endif
