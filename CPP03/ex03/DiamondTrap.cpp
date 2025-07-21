#ifndef DIAMONDTRAP_CPP
#define DIAMONDTRAP_CPP
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_Clap_Name")
{
    Name = "default";
    AttackDamage = attackDamageSave;
    std::cout  << "DiamondTrap default constructor has been called\n";
    PrintStatus();
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_Clap_Name")
{
    this->Name = _name;
    AttackDamage = attackDamageSave;
    std::cout  << "DiamondTrap constructor has been called\n";
    PrintStatus();
}

const std::string DiamondTrap::getName()
{
    return Name;
}


void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
    std::cout << "DiamondTrap attack has been called\n";
}

void DiamondTrap::takeDamage(UI amount)
{
    if (getHitPoints() > 0 && getHitPoints() <= 100)
    {
        std::cout << "DiamondTrap " << getName() << " has taken " << amount 
                  << " damage! " << std::endl;
        setHitPoint(getHitPoints() - amount);
    }
    if (getHitPoints() == 0 || getHitPoints() > 100)
    {
        std::cout << getName() << " is dead!\n";
        setHitPoint(0);
    }
}

void DiamondTrap::beRepaired(UI amount)
{
    if (getHitPoints() == 100)
    {
        std::cout << getName() << " Hit Points are already full\n";
        return ;
    }
    if (getEnergyPoints() > 0)
    {
        setHitPoint(getHitPoints() + amount);
        if (getHitPoints() > 100)
            setHitPoint(100);
        setEnergyPoint(getEnergyPoints() - 1);
        std::cout << "DiamondTrap " << getName() << " has repaired " << amount 
                  << " Hit Points! " << std::endl;
        return ;
    }
    std::cout << "No Energy Points left\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "\nAnnouncement:\n";
    std::cout << "DiamondTrap Name is : " << Name + '\n';
    std::cout << "ClapTrap Name is : " << ClapTrap::Name + "\n\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    ClapTrap::operator=(other);
    if (this != &other)
    {
        Name = other.Name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor has been called\n";
}

#endif
