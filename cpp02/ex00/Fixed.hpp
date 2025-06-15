/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:08:39 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 17:08:40 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
