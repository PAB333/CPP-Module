/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 01:07:00 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/15 16:23:43 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& src)
{
	*this = src;
}

Intern& Intern::operator=(const Intern& src)
{
	(void)src;
	return (*this);
}

Intern::~Intern()
{}

AForm* Intern::makeShrubberyCreation(std::string target) const
{
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeRobotomyRequest(std::string target) const
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::makePresidentialPardon(std::string target) const
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string name, std::string target) const
{
	std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	AForm* (Intern::*Functions[3])(std::string target) const = {&Intern::makeShrubberyCreation, &Intern::makeRobotomyRequest, &Intern::makePresidentialPardon};
	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*Functions[i])(target));
		}
	}
	std::cerr << "The intern cannot create this form because it does not exist." << std::endl;
	return (NULL);
}