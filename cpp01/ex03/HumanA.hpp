/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:22:16 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/17 15:23:52 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"


class HumanA 
{
private:
    std::string name; 
public:
    HumanA(std::string name, Weapon &weapon);
    Weapon &weapon;
    void attack();
    ~HumanA();
};

#endif