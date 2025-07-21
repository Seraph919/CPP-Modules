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

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    {
    ClapTrap A("Ayoub");
    A.attack("Evaluator");
    A.takeDamage(90);
    A.beRepaired(2);
    A.PrintStatus();
    }
    std::cout << "\n\nDerived\n\n";
    
    ScavTrap B("Serena");
    B.attack("Evaluator");
    B.guardGate();
    B.takeDamage(90);
    B.PrintStatus();
    B.beRepaired(1000);
    B.PrintStatus();    
}
