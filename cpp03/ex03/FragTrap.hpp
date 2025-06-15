#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    void attack(std::string target);
    FragTrap &operator=(const FragTrap &other);
    FragTrap(FragTrap &other);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void highFivesGuys();
    ~FragTrap();
};

#endif