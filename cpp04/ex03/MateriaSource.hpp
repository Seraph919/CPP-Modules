/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:51:43 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/27 19:51:04 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "headers.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *materias[4];
public:
    MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
    ~MateriaSource();
};

#endif