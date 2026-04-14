/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 23:26:50 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/14 14:27:16 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

Form::Form() : _name("Default Form"), _isSigned(false), _gradeSign(150), _gradeExecute(150)
{}

Form::Form(const std::string& name, int gradeSign, int gradeExecute) : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& src) : _name(src._name), _isSigned(src._isSigned), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute)
{}

Form& Form::operator=(const Form& src)
{
	if (this != &src)
	{
		this->_isSigned = src._isSigned;
	}
	return (*this);
}

Form::~Form()
{}

std::string	Form::getName() const
{
	return (_name);
}

bool Form::getIsSigned() const
{
	return (_isSigned);
}

int	Form::getGradeExecute() const
{
	return (_gradeExecute);
}

int	Form::getGradeSign() const
{
	return (_gradeSign);
}

void	Form::beSigned(const Bureaucrat& Bureaucrat)
{
	if (Bureaucrat.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	this->_isSigned= true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form grade is too low");
}

std::ostream& operator<<(std::ostream& o, const Form& src)
{
	o << "Form: " << src.getName() << ", Status: " << (src.getIsSigned() ? "Signed" : "Not signed")
		<< ", Grade required to sign: " << src.getGradeSign() << ", Grade required to execute: " << src.getGradeExecute();
	return o;
}