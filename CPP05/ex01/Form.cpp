/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:59:46 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/30 00:31:57 by asoudani         ###   ########.fr       */
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



void	Form::beSigned()
{
	
}

void	Form::signForm()
{
	if (Signed)
		std::cout << "<bureaucrat>" << " signed "<< " <form>" << std::endl;
	else
		std::cout << "<bureaucrat> "<<" couldn’t sign "<< "<form>"<<" because "<< "<reason>."<< std::endl;
		
}

Form::~Form()
{
	
}
