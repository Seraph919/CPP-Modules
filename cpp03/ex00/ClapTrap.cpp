/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:19:27 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/09 17:19:28 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : Name("Default"), HitPoints(10), EnergyPoints(10), TakeDamage(0)
{
    std::cout << "default constructor has been called\n";
}

ClapTrap::ClapTrap(std::string Name, unsigned int hp, unsigned int ep, unsigned int td)
{
    std::cout << "default constructor has been called\n";
    Name = Name;
    HitPoints = hp;
    EnergyPoints = ep;
    TakeDamage = td;
}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), TakeDamage(0)
{
    std::cout << "default constructor has been called\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
        this->EnergyPoints = other.EnergyPoints;
        this->HitPoints = other.HitPoints;
        this->Name = other.Name;
        this->TakeDamage = other.TakeDamage;
}

void ClapTrap::attack(const std::string& target)
{
    if (EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << this->Name << " attacks "<< target 
        << ", causing "<< TakeDamage <<" points of damage!" << std::endl;
        EnergyPoints--;
        return ;
    }
    std::cout << "No Energy Points left\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoints > 0&& HitPoints <= 10)
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

void ClapTrap::beRepaired(unsigned int amount)
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


ClapTrap& ClapTrap::operator=(ClapTrap &other)
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

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor has been called\n";
}

void ClapTrap::PrintHealth()
{
    std::cout << "the current HP is " << HitPoints << ".\n";
}