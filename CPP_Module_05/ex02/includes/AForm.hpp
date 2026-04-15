/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 23:26:53 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/15 01:56:48 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(const std::string& name, int gradeSign, int gradeExecute);
		AForm(const AForm& src);
		AForm &operator=(const AForm& src);
		virtual ~AForm();

		std::string	getName() const;
		bool	getIsSigned() const;
		int		getGradeSign() const;
		int		getGradeExecute() const;
		void	beSigned(const Bureaucrat& Bureaucrat);
		void	execute(Bureaucrat const & executor) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeSign;
		const int			_gradeExecute;
	protected:
		virtual void	executeAction() const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& src);

#endif