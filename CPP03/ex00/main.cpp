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

int main()
{
    ClapTrap A("Ayoub");
    A.attack("Evaluator");
    A.PrintStatus();
    A.takeDamage(2222);
    A.beRepaired(2);
    A.PrintStatus();
}
