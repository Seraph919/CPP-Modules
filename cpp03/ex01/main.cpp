/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:19:22 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/26 14:31:26 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    {
    ClapTrap A("Ayoub");
    A.attack("Evaluator");
    A.takeDamage(2222);
    A.beRepaired(2);
    A.PrintHealth();
    }
    std::cout << "\n\nDerived\n\n";
    
    ScavTrap B("Ayoub2");
    B.attack("Evaluator");
    B.guardGate();
    B.takeDamage(90);
    B.PrintHealth();
    B.beRepaired(1000);
    B.PrintHealth();    
}
