/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph <seraph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:12:38 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/28 06:55:49 by seraph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:

public:
    Cure();
    Cure(std::string name);
    Cure(Cure const &copy);
    Cure &operator=(Cure const &copy);
    Cure* clone() const;
    std::string const & getType() const; 
    void use(ICharacter& target);
    ~Cure();
};

#endif