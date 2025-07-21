/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:08:39 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/17 14:41:55 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int raw;
		static const int fract;
	public:
		Fixed();
		Fixed(const Fixed &copied);
		Fixed& operator=(const Fixed &copied);
		int getRawBits( void ) const;
		void setRawBits (int const raw);
		~Fixed();
};

#endif
