/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph919 <seraph919@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:00:25 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/31 11:04:44 by seraph919        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <fstream>
#include "Bureaucrat.hpp"
#include <iostream>
#include <cstdlib>

class AForm
{
	const STR 	Name;
	bool		Signed;
	const int	grade;
	const int	execGrade;	
public:
	AForm();
	AForm(const STR &name, const int &Grade, const int &ExecGrade);
	AForm(const AForm &cp);
	AForm &operator=(const AForm &cp);

	const STR &getName() const;
	const int &getGrade() const;
	const bool &getStatus() const;
	const int &getExecGrade() const;
	void setSigned(bool sign);

	class GradeTooHighException : public std::exception{ public: const char *what() const throw(); };
	class GradeTooLowException : public std::exception{ public: const char *what() const throw(); };
    class NotSignedException : public std::exception{ public: const char *what() const throw(); };
	
	void beSigned(const Bureaucrat& bureaucrat);
    virtual void execute(Bureaucrat const & executor) const = 0;
	virtual ~AForm();
};

std::ostream &operator<<(std::ostream &os, const AForm &f);

#endif