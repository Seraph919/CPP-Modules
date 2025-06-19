/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 09:28:27 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/19 15:17:36 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cout << "Please provide one argument..\n", 1);
    
    Harl hr;
    std::cout << std::endl;
    hr.complain(av[1]);
    // hr.complain("inFO");
    // std::cout << "-----------\n";
    // hr.complain("ssss");
    // std::cout << "-----------\n";
    
    return 0;
}
