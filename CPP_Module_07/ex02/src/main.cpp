/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 22:09:19 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/19 17:18:52 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"
#include <string>
#include <iostream>

int	main()
{
	std::cout << "Default array init test: " << std::endl;
	Array<int>	array1(10);
	std::cout << "Content of this array: " << std::endl;
	for (unsigned int i = 0; i < array1.size(); i++)
		std::cout << "[" << i << "] = " << array1[i] << std::endl;
	std::cout << "\nModification of array values: " << std::endl;
	for (unsigned int i = 0; i < array1.size(); i++)
	{
		array1[i] = i;
		std::cout << "[" << i << "] = " << array1[i] << std::endl;
	}
	std::cout << "\nDeep copy test: " << std::endl;
	Array<int> copyArray1(array1);
	copyArray1[0] = 42;
	std::cout << "array1[0] = " << array1[0] << std::endl;
	std::cout << "copyArray1[0] = " << copyArray1[0] << std::endl;
	std::cout << "\nException test: " << std::endl;
	try
	{
		array1[42] = 42;
	}
	catch (const std::exception &exception)
	{
		std::cout << exception.what() << std::endl;
	}
}
