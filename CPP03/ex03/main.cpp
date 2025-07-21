/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:19:22 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/19 16:32:18 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    // ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
    // •Hit points (FragTrap) 100
    // •Energy points (ScavTrap) 50
    // •Attack damage (FragTrap) 30
    // •attack() (Scavtrap) 

    DiamondTrap d("Camel");
    d.takeDamage(90);
    d.PrintStatus();
    d.beRepaired(1000);
    d.attack("Evaluator");
    d.PrintStatus();
    d.highFivesGuys();
    d.whoAmI();
    return 0;
}

// Todo: add copy constructor to all classes in previous exercises..
