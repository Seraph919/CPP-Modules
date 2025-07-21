/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:12:46 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/21 17:58:28 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "Unequiped.hpp"

materias_t *Character::Character::equipedMaterias = NULL;


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
            // std::cout << "Materia " << m->getType() << " has been equiped\n";
            i++;
        }
    }    
}

void Character::unequip(int idx)
{
    if (idx >=0 && idx < 4)
    {
        // ! SAVE IT materias[idx] 
        if (materias[idx])
        {
            // std::cout << "Materia " << materias[idx]->getType() << " has been unequiped\n";
            addMateria(&equipedMaterias, materias[idx]);
            materias[idx] = NULL;
            return;
        }
        std::cout << "The slot is already empty\n";
        return;
    }
    std::cout << "Invalid slot index\n";
}

Character::Character(const Character &copy)
{
    *this = copy;
    this->equipedMaterias = NULL;
    std::cout << "Character copy constructor has been called\n";
}

Character &Character::operator=(Character const &copy)
{
    if (this != &copy)
    {
        this->Name = copy.Name;
        for (int i = 0; i < 4; i++)
        {
            if (this->materias[i] != NULL)
                delete this->materias[i];
            this->materias[i] = copy.materias[i]->clone();
        }
        deleteMaterias(&this->equipedMaterias);
        materias_t *current = copy.equipedMaterias;
        while (current)
        {
            addMateria(&this->equipedMaterias, current->ptr->clone());
            current = current->next;
        }
    }
    return *this;
}


void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4)
    {
        if (materias[idx] == NULL)
        {
            std::cout << "The slot is empty\n";
            return;
        }
        materias[idx]->use(target);
    }
}

Character::~Character()
{
    deleteMaterias(&equipedMaterias);
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] != NULL)
            delete materias[i];
    }
}