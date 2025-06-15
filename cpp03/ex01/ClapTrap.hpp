/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:19:32 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/09 20:10:39 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
    std::string Name;
    unsigned int HitPoints;
    unsigned int EnergyPoints;
    unsigned int TakeDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int td);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(ClapTrap &other);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void PrintHealth();

    void setName(std::string name);
    void setHitPoint(unsigned int hp);
    void setEnergyPoint(unsigned int ep);
    void setTakeDamage(unsigned int td);

    std::string getName();
    unsigned int getHitPoints();
    unsigned int getEnergyPoints();
    unsigned int getTakeDamage();
    
    ~ClapTrap();
};

#endif