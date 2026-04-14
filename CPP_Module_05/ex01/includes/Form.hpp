/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 23:26:53 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/14 14:27:53 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string& name, int gradeSign, int gradeExecute);
		Form(const Form& src);
		Form &operator=(const Form& src);
		~Form();

		std::string	getName() const;
		bool	getIsSigned() const;
		int		getGradeSign() const;
		int		getGradeExecute() const;
		void	beSigned(const Bureaucrat& Bureaucrat);

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
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeSign;
		const int			_gradeExecute;
};

std::ostream& operator<<(std::ostream& o, const Form& src);

#endif