/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:12:28 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 17:12:29 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    Type = type;
    std::cout << "Paramitized Constructor Called\n";
}

std::string const &AMateria::getType() const
{
    return Type;
}

AMateria* AMateria::clone() const
{
    return (NULL);
}

void AMateria::use(ICharacter& target)
{
}
