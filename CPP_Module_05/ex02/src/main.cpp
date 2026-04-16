/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 22:00:48 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/16 23:49:00 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include <stdlib.h>
#include <ctime>

int	main()
{
	std::srand(std::time(NULL));
	Bureaucrat	lvl1("level1", 1);
	Bureaucrat	lvl150("level150", 150);

	ShrubberyCreationForm	SForm("Tree");
	RobotomyRequestForm		RForm("Robot");
	PresidentialPardonForm	PForm("President");

	std::cout << "Execution without signature:" << std::endl;
	lvl1.executeForm(SForm);
	std::cout << "Signature:" << std::endl;
	lvl150.signForm(PForm);
	lvl1.signForm(SForm);
	lvl1.signForm(RForm);
	lvl1.signForm(PForm);
	std::cout << "Execution after signature:" << std::endl;
	lvl150.executeForm(PForm);
	lvl1.executeForm(SForm);
	lvl1.executeForm(RForm);
	lvl1.executeForm(PForm);
	return (0);
}