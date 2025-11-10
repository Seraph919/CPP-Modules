/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seraph919 <seraph919@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+          f */
/*   Created: 2025/07/29 16:59:46 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/31 11:22:52 by seraph919        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

	// const STR 	Name;
	// bool		Signed;
	// const int	grade;
	// const int	execGrade;	


AForm::AForm(): Name("default"), Signed(false), grade(150), execGrade(150)
{
}

AForm::AForm(const STR &name, const int &Grade, const int &ExecGrade) : Name(name), grade(Grade), execGrade(ExecGrade)
{
	Signed = false;
	if (Grade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
	else if (Grade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
}
AForm::AForm(const AForm &cp) : Name(cp.Name), Signed(cp.Signed), grade(cp.grade), execGrade(cp.execGrade)
{
}

AForm &AForm::operator=(const AForm &cp) 
{
	if (this != &cp)
	{
		this->Signed = cp.Signed;
	}
	return *this;
}


const STR &AForm::getName() const
{
	return Name;
}

const int &AForm::getGrade() const
{
	return grade;	
}

const bool &AForm::getStatus() const
{
	return Signed;	
}

const int &AForm::getExecGrade() const
{
	return execGrade;
}

void AForm::setSigned(bool sign)
{
	Signed = sign;	
}

void	AForm::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > grade)
        throw GradeTooLowException();

    Signed = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "AForm::GradeTooHighException\n";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "AForm::GradeTooLowException\n";
}

const char* AForm::NotSignedException::what() const throw()
{
    return ("AForm::NotSignedExeption\n");
}
AForm::~AForm()
{
	
}

// const STR 	Name;
// bool		Signed;
// const int	grade;
// const int	execGrade;

std::ostream &operator<<(std::ostream &os, const AForm &f)
{
	os << "AForm attributes:\nName: "<< f.getName() << "\nGrade to sign: "
	<< f.getGrade() << "\nGrade to execute: " << f.getExecGrade()
	<< "\nStatus: " << (f.getStatus() ? "is signed" : "is not signed");
	return os;
}
