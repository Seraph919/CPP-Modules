#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
private:
    std::string Name;
public:
    DiamondTrap();
    DiamondTrap(std::string _name);
    DiamondTrap(const DiamondTrap &other);
    DiamondTrap &operator=(const DiamondTrap &other);

    const std::string getName();
    void attack(const std::string& target);
    void takeDamage(UI amount);
    void beRepaired(UI amount);
    void whoAmI();

    ~DiamondTrap();
};

#endif