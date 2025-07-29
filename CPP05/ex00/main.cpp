/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph919 <seraph919@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 00:06:38 by seraph919         #+#    #+#             */
/*   Updated: 2025/07/29 01:49:38 by seraph919        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat s("ayoub", 1);
        s.decrementGrade();
        
    }
    catch (...)
    {
        std::cout << "Exeption cought!" << std::endl;
    }
}