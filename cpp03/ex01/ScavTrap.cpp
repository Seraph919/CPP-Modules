/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:23:38 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/09 20:23:35 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    setName("Default");
    setEnergyPoint(50);
    setHitPoint(100);
    setTakeDamage(20);

    std::cout << "ScavTrap default constructor has been called\n";
    std::cout << "ScavTrap " << getName() << " has been created with:\n"
              << getHitPoints() << " Hit Points, \n"
              << getEnergyPoints() << " Energy Points,\n"
              << getTakeDamage() << " Take Damage points." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}
ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor has been called\n";
}

ScavTrap::ScavTrap(std::string name)
{
    setName(name);
    setEnergyPoint(50);
    setHitPoint(100);
    setTakeDamage(20);

    std::cout << "ScavTrap constructor has been called\n";
    std::cout << "ScavTrap " << getName() << " has been created with:\n"
              << getHitPoints() << " Hit Points, \n"
              << getEnergyPoints() << " Energy Points,\n"
              << getTakeDamage() << " Take Damage points." << std::endl;
}

void ScavTrap::attack(std::string target)
{
    if (getEnergyPoints() > 0)
    {
        std::cout << "ScavTrap " << getName() << " attacks "<< target 
        << ", causing "<< getTakeDamage() <<" points of damage!" << std::endl;
        setEnergyPoint(getEnergyPoints() - 1);
        return ;
    }
    std::cout << "No Energy Points left\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (getHitPoints() > 0 && getHitPoints() <= 100)
    {
        std::cout << "ScavTrap " << getName() << " has taken "<< amount 
        << " damage! " << std::endl;
        setHitPoint(getHitPoints() - amount);
    }
    if (getHitPoints() == 0 || getHitPoints() > 100)
    {
        std::cout << getName() << " is dead!\n";
        setHitPoint(0);
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (getHitPoints() == 100)
    {
        std::cout << getName() << " Hit Points are already full\n";
        return ;
    }
    if (getEnergyPoints() > 0)
    {
        if (getHitPoints() == 0)
        {
            std::cout << getName() << " is dead!\n";
            return;
        }
        setHitPoint(getHitPoints() + amount);
        if (getHitPoints() > 100)
            setHitPoint(100);
        setEnergyPoint(getEnergyPoints() - 1);
        std::cout << "ScavTrap " << this->getName() << " has repaired "<< amount 
        << " Hit Points! " << std::endl;
        return ;
    }
    std::cout << "No Energy Points left\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in Gatekeeper mode\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor has been called\n";
}
