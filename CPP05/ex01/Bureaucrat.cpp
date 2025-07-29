/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 00:17:28 by seraph919         #+#    #+#             */
/*   Updated: 2025/07/29 16:57:38 by asoudani         ###   ########.fr       */
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

Bureaucrat::Bureaucrat(const Bureaucrat &cp)
{
	*this = cp;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cp)
{
	if (this != &cp)
	{
		this->grade = cp.grade;
	}
	return *this;
}


const STR    &Bureaucrat::getName() const
{
    return name;
}

const int   &Bureaucrat::getGrade() const
{
    return grade;
}

void    Bureaucrat::incrementGrade()
{
    grade--;
    if (grade <= 0)
        throw GradeTooHighException();
}

void    Bureaucrat::decrementGrade()
{
    grade++;
    if (grade >= 151)
        throw GradeTooLowException();
}


const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLow!";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHigh!";
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getName() << " bureaucrat grade " << obj.getGrade() << " .";
    return os;
}