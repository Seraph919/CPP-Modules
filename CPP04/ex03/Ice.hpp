/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:12:42 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/21 06:08:03 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
public:
    Ice();
    Ice(std::string name);
    Ice(Ice const &copy);
    Ice &operator=(Ice const &copy);
    std::string const & getType() const; 
    Ice* clone() const;
    void use(ICharacter& target);
    ~Ice();
};

#endif