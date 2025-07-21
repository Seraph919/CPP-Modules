#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual  public ClapTrap
{
protected:
    int attackDamageSave;
public:
    FragTrap();
    FragTrap(std::string name);
    void attack(const std::string& target);
    FragTrap &operator=(const FragTrap &other);
    FragTrap(FragTrap &other);
    void takeDamage(UI amount);
    void beRepaired(UI amount);
    void highFivesGuys();
    ~FragTrap();
};

#endif