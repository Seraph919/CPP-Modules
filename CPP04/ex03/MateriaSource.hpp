/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:51:43 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/21 17:47:52 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"



class MateriaSource : public IMateriaSource
{
private:
    AMateria *materias[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &copy);
    MateriaSource &operator=(const MateriaSource &copy);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
    ~MateriaSource();
};

#endif