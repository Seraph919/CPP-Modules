/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:12:38 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 17:12:39 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure() : AMateria("cure"){std::cout << "Default Cure Constuctor Called\n";};
    ~Cure(){std::cout << "Cure Destructor Called\n";};
};

#endif