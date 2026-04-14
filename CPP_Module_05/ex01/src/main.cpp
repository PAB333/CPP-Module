/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 21:58:54 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/14 14:27:28 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main(void)
{
	std::cout << "Creating bureaucrats and form:" << std::endl;
	Bureaucrat first("first", 1);
	Bureaucrat last("last", 150);
	Form Form1("form1", 15, 5);
	std::cout << "\nInitial state:" << std::endl;
	std::cout << Form1 << std::endl;
	std::cout << "\nSignature test:" << std::endl;
	first.signForm(Form1);
	last.signForm(Form1);
	std::cout << "\nFinal state:" << std::endl;
	std::cout << Form1 << std::endl;
	return (0);
}