/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:22:21 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/04 08:32:12 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class HumanB {
private:
    std::string name;
    Weapon *weapon;
public:
    HumanB(std::string name);
    void setWeapon(Weapon &type);
    void attack();
    ~HumanB();
};


#endif