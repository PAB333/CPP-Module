/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 23:26:50 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/14 22:48:31 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

AForm::AForm() : _name("Default Form"), _isSigned(false), _gradeSign(150), _gradeExecute(150)
{}

AForm::AForm(const std::string& name, int gradeSign, int gradeExecute) : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeSign > 150 || gradeExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& src) : _name(src._name), _isSigned(src._isSigned), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute)
{}

AForm& AForm::operator=(const AForm& src)
{
	if (this != &src)
	{
		this->_isSigned = src._isSigned;
	}
	return (*this);
}

AForm::~AForm()
{}

std::string	AForm::getName() const
{
	return (_name);
}

bool AForm::getIsSigned() const
{
	return (_isSigned);
}

int	AForm::getGradeExecute() const
{
	return (_gradeExecute);
}

int	AForm::getGradeSign() const
{
	return (_gradeSign);
}

void	AForm::beSigned(const Bureaucrat& Bureaucrat)
{
	if (Bureaucrat.getGrade() > this->_gradeSign)
		throw AForm::GradeTooLowException();
	this->_isSigned= true;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExecute())
		throw AForm::GradeTooLowException();
	this->executeAction();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Form grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Form grade is too low");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

std::ostream& operator<<(std::ostream& out, const AForm& src)
{
	out << "Form: " << src.getName() << ", Status: " << (src.getIsSigned() ? "Signed" : "Not signed")
		<< ", Grade required to sign: " << src.getGradeSign() << ", Grade required to execute: " << src.getGradeExecute();
	return out;
}