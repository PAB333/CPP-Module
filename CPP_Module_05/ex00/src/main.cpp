/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 21:58:54 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/13 23:26:39 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main(void)
{
	std::cout << "Creating a default bureaucrat:" << std::endl;
	try
	{
		Bureaucrat test1("test1", 42);
		std::cout << test1 << std::endl;
	}
	catch(std::exception &exception)
	{
		std::cerr << "Error: " << exception.what() << std::endl;
	}
	std::cout << "\nCreating a bureaucrat with too high grade:" << std::endl;
	try
	{
		Bureaucrat test2("test2", 0);
		std::cout << test2 << std::endl;
	}
	catch(std::exception &exception)
	{
		std::cerr << "Error: " << exception.what() << std::endl;
	}
	std::cout << "\nCreating a bureaucrat with too low grade:" << std::endl;
	try
	{
		Bureaucrat test3("test3", 151);
		std::cout << test3 << std::endl;
	}
	catch(std::exception &exception)
	{
		std::cerr << "Error: " << exception.what() << std::endl;
	}
	std::cout << "\nIncrement test:" << std::endl;
	try {
		Bureaucrat test4("test4", 2);
		std::cout << test4 << std::endl;
		test4.incrementGrade();
		std::cout << test4 << std::endl;
		test4.incrementGrade();
		std::cout << test4 << std::endl;
	} catch (std::exception &exception) {
		std::cerr << "Error: " << exception.what() << std::endl;
	}
	return (0);
}