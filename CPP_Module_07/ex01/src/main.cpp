/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 22:03:12 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/18 23:38:20 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void	print(T &something)
{
	std::cout << something << std::endl;
}

int	main()
{
	std::cout << "String array test: " << std::endl;
	std::string	stringArray[] = {"this", "is", "a", "test"};
	unsigned int	arrayLenght = sizeof(stringArray) / sizeof(stringArray[0]);
	::iter(stringArray, arrayLenght, print);
	std::cout << "\nConst int array test: " << std::endl;
	const int intArray[] = {123, 543, 42, 654, -5};
	arrayLenght = sizeof(intArray) / sizeof(intArray[0]);
	::iter(intArray, arrayLenght, print);
	return (0);
}