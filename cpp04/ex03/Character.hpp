/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph <seraph@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:22:57 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/28 06:50:14 by seraph           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"


// class ICharacter
// {
// public:
//     virtual ~ICharacter() {}
//     virtual std::string const & getName() const = 0;
//     virtual void equip(AMateria* m) = 0;
//     virtual void unequip(int idx) = 0;
//     virtual void use(int idx, ICharacter& target) = 0;
// };

class Character : public ICharacter
{
private:
    std::string Name;
protected:
    AMateria *materias[4];
public :
    Character(std::string name);
    Character(const Character &copy);
    Character &operator=(Character const &copy);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    ~Character();
};

#endif