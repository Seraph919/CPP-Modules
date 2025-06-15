/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:19:22 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/09 20:16:08 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

using namespace  std;

int main()
{
    ClapTrap A("Ayoub");
    A.attack("Evaluator");
    A.takeDamage(2222);
    A.beRepaired(2);
    A.PrintHealth();

    cout << "\n\nDerived\n\n";
    {
    ScavTrap B("Ayoub2");
    B.attack("Evaluator");
    B.guardGate();
    B.takeDamage(90);
    B.PrintHealth();
    B.beRepaired(1000);
    B.PrintHealth();    
    }
    cout << "\n\nDerived\n\n";

    FragTrap C("Ayoub3");
    C.attack("Evaluator");
    C.takeDamage(90);
    C.PrintHealth();
    C.beRepaired(1000);
    C.PrintHealth();
    C.highFivesGuys();
    return 0;
}

// Todo: add copy constructor to all classes in previous exercises..
