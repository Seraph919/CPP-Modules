#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &other);
    FragTrap& operator=(const FragTrap &other);
    void attack(std::string target);
    void takeDamage(UI amount);
    void beRepaired(UI amount);
    void highFivesGuys();
    ~FragTrap();
};

#endif