/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:12:32 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/29 02:42:09 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class ICharacter;
#include <iostream>
class AMateria
{
protected:
    std::string Type;
public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(const AMateria &copy);
    std::string const & getType() const; 
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    virtual ~AMateria(); 
};


#endif