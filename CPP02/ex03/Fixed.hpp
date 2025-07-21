/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:09:27 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/17 13:48:54 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <ostream>

class Fixed{
	private:
		int raw;
		static const int fractionalBits;
	public:
		Fixed();
		Fixed& operator=(const Fixed &copied);
		Fixed& operator=(float val);
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed &copied);
		int getRawBits( void ) const;
		void setRawBits (int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;

		bool operator<(const Fixed& other) const;
		bool operator>(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		Fixed operator*(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator+(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		static const Fixed max(const Fixed &a, const Fixed &b);
		static const Fixed min(const Fixed &a, const Fixed &b);

		~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
