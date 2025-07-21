/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:23:57 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/19 17:32:23 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap &operator=(const ScavTrap &other);
    ScavTrap(const ScavTrap &other);
    void attack(std::string target);
    void takeDamage(UI amount);
    void beRepaired(UI amount);
    void guardGate();
    ~ScavTrap();
};

#endif