/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 00:07:04 by seraph919         #+#    #+#             */
/*   Updated: 2025/07/29 16:49:06 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

// The throw() specification means the function promises not to throw exceptions

#include <iostream>

typedef std::string STR;

class Bureaucrat{
    const STR name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(STR name, int grade);
	Bureaucrat(const Bureaucrat &cp);
	Bureaucrat &operator=(const Bureaucrat &cp);

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw(); 
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char*what() const throw();
	};
    const STR &getName() const;
    const int &getGrade() const;
    void incrementGrade();
    void decrementGrade();
    
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif