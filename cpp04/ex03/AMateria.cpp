/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph <seraph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:16:36 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/28 06:38:10 by seraph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
// class AMateria
// {
// protected:
//     std::string Type;
// public:
//     AMateria(std::string const & type);

//     std::string const & getType() const; 
//     virtual AMateria* clone() const = 0;
//     virtual void use(ICharacter& target);
// };

AMateria::AMateria() : Type("default")
{
    
}

AMateria::AMateria(std::string const & type)
{
    Type = type;
}

std::string const &AMateria::getType() const
{
    return Type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "Materia used on " << target.getName() << "\n";
}

AMateria::AMateria(const AMateria &copy)
{
    this->Type = copy.Type;
}

AMateria* AMateria::clone() const
{
    // std::string temp = this->Type;
    // AMateria *newMat = new AMateria(temp); 
    return 0;
}