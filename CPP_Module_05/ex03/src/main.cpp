/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 22:00:48 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/15 16:23:37 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Intern.hpp"
#include <stdlib.h>
#include <time.h>

int	main()
{
	srand(time(NULL));
	Bureaucrat	lvl1("level1", 1);
	Intern		Intern1;
	AForm*		form1;
	AForm*		form2;

	std::cout << "Intern test:" << std::endl;
	form1 = Intern1.makeForm("robotomy request", "robot");
	form2 = Intern1.makeForm("42", "Target2");
	std::cout << "Bureaucrat sign & exec forms:" << std::endl;
	lvl1.signForm(*form1);
	lvl1.executeForm(*form1);
	if (form2)
	{
		lvl1.signForm(*form2);
		lvl1.executeForm(*form2);
		delete form2;
	}
	delete form1;
	return (0);
}
