/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:19:32 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/19 17:32:39 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
typedef unsigned int UI;

class ClapTrap {
protected:
    std::string Name;
    UI HitPoints;
    UI EnergyPoints;
    UI AttackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(std::string name, UI hp, UI ep, UI td);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    
    void attack(const std::string& target);
    void takeDamage(UI amount);
    void beRepaired(UI amount);
    void PrintStatus();


    void setName(std::string name);
    void setHitPoint(UI hp);
    void setEnergyPoint(UI ep);
    void setAttackDamage(UI td);

    std::string getName();
    UI getHitPoints();
    UI getEnergyPoints();
    UI getAttackDamage();
    
    virtual ~ClapTrap();
};

#endif
