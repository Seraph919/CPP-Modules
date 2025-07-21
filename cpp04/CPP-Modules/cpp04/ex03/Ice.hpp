/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph <seraph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:12:42 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/28 06:59:43 by seraph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
private:

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