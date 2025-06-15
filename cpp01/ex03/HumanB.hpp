/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:22:21 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/04 10:32:23 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class HumanB {
public:
    HumanB(std::string name);
    // HumanB(std::string name);
    Weapon *weapon;
    std::string name;
    void setWeapon(Weapon &type);
    void attack();
    ~HumanB();
};


#endif