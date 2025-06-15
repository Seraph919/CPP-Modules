#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default", 100, 100, 30)
{
    std::cout << "FragTrap default constructor has been called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap constructor has been called\n";
}

void FragTrap::attack(std::string target)
{
    if (getEnergyPoints() > 0)
    {
        std::cout << "FragTrap " << getName() << " attacks " << target 
                  << ", causing " << getTakeDamage() << " points of damage!" << std::endl;
        setEnergyPoint(getEnergyPoints() - 1);
        return ;
    }
    std::cout << "No Energy Points left\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (getHitPoints() > 0 && getHitPoints() <= 100)
    {
        std::cout << "FragTrap " << getName() << " has taken " << amount 
                  << " damage! " << std::endl;
        setHitPoint(getHitPoints() - amount);
    }
    if (getHitPoints() == 0 || getHitPoints() > 100)
    {
        std::cout << getName() << " is dead!\n";
        setHitPoint(0);
    }
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other)
{

}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

void FragTrap::beRepaired(unsigned int amount)
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
        std::cout << "FragTrap " << getName() << " has repaired " << amount 
                  << " Hit Points! " << std::endl;
        return ;
    }
    std::cout << "No Energy Points left\n";
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << getName() << " is requesting a high five!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor has been called for " << getName() << "\n";
}

