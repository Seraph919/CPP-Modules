/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:19:27 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/19 16:32:18 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : Name("Default"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap default constructor has been called\n";
}

ClapTrap::ClapTrap(std::string name, UI hp, UI ep, UI td)
{
    std::cout << "ClapTrap default constructor has been called\n";
    Name = name;
    HitPoints = hp;
    EnergyPoints = ep;
    AttackDamage = td;
}

ClapTrap::ClapTrap(std::string name)
{
    Name = name , HitPoints = 10 , EnergyPoints = 10 , AttackDamage = 0;
    std::cout << "ClapTrap default constructor has been called\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    this->EnergyPoints = other.EnergyPoints;
    this->HitPoints = other.HitPoints;
    this->Name = other.Name;
    this->AttackDamage = other.AttackDamage;
}

void ClapTrap::attack(const std::string& target)
{
    if (EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << this->Name << " attacks "<< target 
        << ", causing "<< AttackDamage <<" points of damage!" << std::endl;
        EnergyPoints--;
        return ;
    }
    std::cout << "No Energy Points left\n";
}

void ClapTrap::takeDamage(UI amount)
{
    if (HitPoints > 0 && HitPoints <= 10)
    {
        std::cout << "ClapTrap " << this->Name << " has taken "<< amount 
        << " damage! " << std::endl;
        HitPoints -= amount;
    }
    if (HitPoints == 0 || HitPoints > 10)
    {
        std::cout << Name << " is dead!\n";
        HitPoints = 0;
    }
}

void ClapTrap::beRepaired(UI amount)
{
    if (HitPoints == 10)
    {
        std::cout << Name << " Hit Points are already full\n";
        return ;
    }
    if (EnergyPoints > 0)
    {
        if (HitPoints == 0)
        {
            std::cout << Name << " is dead!\n";
            return;
        }
        HitPoints += amount;
        if (HitPoints > 10)
            HitPoints = 10;
        EnergyPoints--;
        std::cout << "ClapTrap " << this->Name << " has repaired "<< amount 
        << " Hit Points! " << std::endl;
        return ;
    }
    std::cout << "No Energy Points left\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "copy constructor has been called\n";
    if (this != &other)
    {
        this->EnergyPoints = other.EnergyPoints;
        this->HitPoints = other.HitPoints;
        this->Name = other.Name;
    }
    return *this;
}


void ClapTrap::PrintStatus()
{
    std::cout << "the current HP is " << HitPoints << ".\n";
    std::cout << "the current EP is " << EnergyPoints << ".\n";
    std::cout << "the current attack damage is " << AttackDamage << ".\n";
    std::cout << "the current NAME is " << getName() << ".\n\n";
    
}


void ClapTrap::setName(std::string name)
{
    Name = name;
}

void ClapTrap::setHitPoint(UI hp)
{
    HitPoints = hp;
}

void ClapTrap::setEnergyPoint(UI ep)
{
    EnergyPoints = ep;
}

void ClapTrap::setAttackDamage(UI td)
{
    AttackDamage = td;   
}

UI ClapTrap::getEnergyPoints()
{
    return EnergyPoints;
}

UI ClapTrap::getHitPoints()
{
    return HitPoints;
}

const std::string ClapTrap::getName()
{
    return Name;
}

UI ClapTrap::getAttackDamage()
{
    return AttackDamage;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor has been called\n";
}
