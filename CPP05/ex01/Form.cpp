/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph919 <seraph919@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+          f */
/*   Created: 2025/07/29 16:59:46 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/31 11:22:52 by seraph919        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

	// const STR 	Name;
	// bool		Signed;
	// const int	grade;
	// const int	execGrade;	


Form::Form(): Name("default"), Signed(false), grade(150), execGrade(150)
{
}

Form::Form(const STR &name, const int &Grade, const int &ExecGrade) : Name(name), grade(Grade), execGrade(ExecGrade)
{
	Signed = false;
	if (Grade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	else if (Grade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
}
Form::Form(const Form &cp) : Name(cp.Name), Signed(cp.Signed), grade(cp.grade), execGrade(cp.execGrade)
{
}

Form &Form::operator=(const Form &cp) 
{
	if (this != &cp)
	{
		this->Signed = cp.Signed;
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

void	Form::beSigned(const Bureaucrat& b)
{
    if (Signed)
        return;
    if (b.getGrade() > grade)
        throw GradeTooLowException();

    Signed = true;
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
	os << "Form attributes:\nName: "<< f.getName() << "\nGrade to sign: "
	<< f.getGrade() << "\nGrade to execute: " << f.getExecGrade()
	<< "\nStatus: " << (f.getStatus() ? "is signed" : "is not signed");
	return os;
}
