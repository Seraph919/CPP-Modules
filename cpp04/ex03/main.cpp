/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:12:56 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/27 20:01:12 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"


int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}
/*
Should output:
$> clang++ -W -Wall -Werror *.cpp
$> ./a.out | cat -e
* shoots an ice bolt at bob *$
* heals bob's wounds *$
*/

/*
TODO:  Step 1: Create the Header Files
TODO:  First, create the necessary header files for all classes:

TODO:  AMateria.hpp - The abstract base class
TODO:  ICharacter.hpp - The character interface
TODO:  IMateriaSource.hpp - The materia source interface
TODO:  Ice.hpp and Cure.hpp - Concrete materia classes
TODO:  Character.hpp - Concrete character class
TODO:  MateriaSource.hpp - Concrete materia source class
TODO:  Step 2: Implement the Interfaces/Abstract Classes
TODO:  Start by implementing the abstract classes with their pure virtual functions:

TODO:  AMateria
TODO:  ICharacter
TODO:  IMateriaSource
TODO:  Step 3: Implement the Concrete Classes
TODO:  Ice and Cure
TODO:  Both inherit from AMateria
TODO:  Implement their own clone() method to create copies
TODO:  Implement their specific use() behavior

TODO:  Character
TODO:  Implements ICharacter
TODO:  Has an inventory of 4 materia slots
TODO:  Can equip, unequip, and use materias
TODO:  Requires deep copying in copy constructor and assignment operator

TODO:  MateriaSource
TODO:  Implements IMateriaSource
TODO:  Can learn up to 4 materias
TODO:  Can create new materias based on learned templates
TODO:  Step 4: Memory Management
TODO:  Pay special attention to:

TODO:  Proper deletion of dynamically allocated materias
TODO:  Deep copying in copy constructors and assignment operators
TODO:  Handling unequipped materias (to avoid memory leaks)
TODO:  Step 5: Implementation Flow
TODO:  I suggest this order:

TODO:  First implement the interfaces/abstract classes
TODO:  Then implement the concrete materia classes (Ice, Cure)
TODO:  Next implement Character and MateriaSource
TODO:  Finally add the memory management and test thoroughly
TODO:  Key Requirements to Remember
TODO:  Characters have 4 inventory slots
TODO:  Unequipping doesn't delete the materia
TODO:  All copies must be deep copies
TODO:  MateriaSource can store up to 4 materia templates
TODO:  The createMateria function returns a new instance based on type
TODO:  Would you like me to start by showing you how to implement any specific part of this system?
*/