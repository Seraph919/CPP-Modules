/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph919 <seraph919@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:59:46 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/30 05:22:07 by seraph919        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : Name("default"), grade(150), execGrade(150)
{
	Signed = false;
}

Form::Form(const STR &name, const int &Grade, const int &ExecGrade) : Name(name), grade(Grade), execGrade(ExecGrade)
{
	Signed = false;
	if (Grade > 150)
		throw GradeTooLowException();
	else if (Grade < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &cp) : grade(cp.grade), Name(cp.Name), execGrade(cp.execGrade)
{
	Signed = false;
}

Form &Form::operator=(const Form &cp) 
{
	if (this != &cp)
	{
		//
	}
	return *this;
}


const STR &Form::getName() const
{
	return Name;
}

const int &Form::getGrade() const
{
	return grade;	
}

const bool &Form::getStatus() const
{
	return Signed;	
}

const int &Form::getExecGrade() const
{
	return execGrade;
}

void Form::setSigned(bool sign)
{
	Signed = sign;	
}


void	Form::signForm(const Bureaucrat &b)
{
	if ((b.getGrade() >= 1  && b.getGrade() <= 150) || Signed)
		return std::cout << b.getName() << " signed "<< this->getName() << std::endl, (void)0;
	else
		std::cout << b.getName() <<" couldn’t sign "<< this->getName() <<" because ";
	if (Signed)
		std::cout << "already signed\n";
	else if (b.getGrade() > this->grade)
	{
		std::cout << "grade is lower than Form::grade\n";
		throw GradeTooLowException();
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Form::GradeTooHighException";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Form::GradeTooLowException";
}

Form::~Form()
{
	
}

// const STR 	Name;
// bool		Signed;
// const int	grade;
// const int	execGrade;

std::ostream &operator<<(std::ostream &os, const Form &f)
{
	os << "Form attributes:\nName: "<< f.getName() << "\nGrade: "
	<< f.getGrade() << "\nexecution Grade: " << f.getExecGrade()
	<< "\nStatus: ";
	if (f.getStatus() == true)
		std::cout << "is signed\n";
	else
		std::cout << "is not signed\n";
	return os;
}
