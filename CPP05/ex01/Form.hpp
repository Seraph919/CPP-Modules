/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph919 <seraph919@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:00:25 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/30 03:56:35 by seraph919        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

// TODO :
// You need to create a Form class that works with your existing Bureaucrat class from ex00.
// The Form represents documents that bureaucrats can sign if they have sufficient authority.

// What the Form class needs:
// 1. Attributes (all private):
// const std::string name - Form's name (unchangeable)
// bool signed - Whether it's signed (starts as false)
// const int gradeToSign - Minimum grade required to sign it
// const int gradeToExecute - Minimum grade required to execute it
// 2. Constructor:
// Takes name, gradeToSign, and gradeToExecute as parameters
// Must validate grades (1-150, same as Bureaucrat)
// Throws Form::GradeTooHighException or Form::GradeTooLowException if invalid
// 3. Methods needed:
// Getters for all attributes
// beSigned(Bureaucrat& bureaucrat) - Signs the form if bureaucrat's grade is high enough
// operator<< overload to print form info
// 4. Exceptions:
// Form::GradeTooHighException (grade < 1)
// Form::GradeTooLowException (grade > 150 or insufficient grade to sign)
// What to add to Bureaucrat class:
// signForm(Form& form) method:
// Calls form.beSigned(*this)
// Prints success: "<bureaucrat> signed <form>"
// Prints failure: "<bureaucrat> couldn't sign <form> because <reason>"
// File structure for ex01:
// Key concepts:
// Grade 1 is highest, Grade 150 is lowest
// Forms have TWO grades: one to sign, one to execute
// Bureaucrat can only sign if their grade ≤ form's required signing grade
// Form starts unsigned and becomes signed when a qualified bureaucrat signs it
// The exercise teaches composition (Form and Bureaucrat working together) and exception handling across multiple classes.



class Form
{
	const STR 	Name;
	bool		Signed;
	const int	grade;
	const int	execGrade;	
public:
	Form();
	Form(const STR &name, const int &Grade, const int &ExecGrade);
	Form(const Form &cp);
	Form &operator=(const Form &cp);

	const STR &getName() const;
	const int &getGrade() const;
	const bool &getStatus() const;
	const int &getExecGrade() const;
	void setSigned(bool sign);

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
	
	void signForm(const Bureaucrat &);
	~Form();
};

std::ostream &operator<<(std::ostream &os, const Form &f);

#endif