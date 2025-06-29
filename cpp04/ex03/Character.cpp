/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph <seraph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:12:46 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/28 06:51:41 by seraph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name)
{
    Name = name;
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

const std::string &Character::getName() const 
{
    return Name;
}

void Character::equip(AMateria* m)
{
    static int i = 0;
    if (i < 4)
    {
        if (materias[i] == NULL)
        {
            materias[i] = m;
            i++;
        }
    }    
}

void Character::unequip(int idx)
{
    if (idx >=0 && idx < 4)
    {
        // ! SAVE IT materias[idx] 
        materias[idx] = NULL;
    }
}

Character::Character(const Character &copy)
{
    if (this != &copy)
    {
        this->Name = copy.getName();
        for (int i = 0; i < 4; i++)
        {
            if (copy.materias[i])
            {
                this->materias[i] = copy.materias[i];
            }
        }
    }
}

Character &Character::operator=(Character const &copy)
{
    this->Name = copy.getName();
    for (int i = 0; i < 4; i++)
        this->materias[i] = copy.materias[i];
    return *this;
}


void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4)
        materias[idx]->use(target);
}

Character::~Character()
{
    // for (int i = 0; i < 4; i++)
    // {
    //     if (materias[i] != NULL)
    //         // delete materias[i];
    // }
}