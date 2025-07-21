/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:22:16 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/04 08:32:07 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"


class HumanA 
{
private:
    std::string name; 
    Weapon &weapon;
public:
    HumanA(Weapon &weap);
    HumanA(std::string name, Weapon &weapon);
    void attack();
    ~HumanA();
};

#endif