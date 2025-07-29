/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph919 <seraph919@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 00:17:28 by seraph919         #+#    #+#             */
/*   Updated: 2025/07/29 01:48:04 by seraph919        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
    // default const
}

Bureaucrat::Bureaucrat(STR Name, int Grade) : name(Name), grade(Grade)
{
    // paramitrized const
}

const STR    &Bureaucrat::getName()
{
    return name;
}

const int   &Bureaucrat::getGrade()
{
    return grade;
}

void    Bureaucrat::incrementGrade()
{
    grade--;
    if (grade <= 0)
        throw std::out_of_range(0);
}

void    Bureaucrat::decrementGrade()
{
    grade++;
    if (grade >= 151)
        throw std::out_of_range(0);
}


// std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
// {
//     os << obj.getName() << " bureaucrat grade " << obj.getGrade() << "\n";
//     return os;
// }