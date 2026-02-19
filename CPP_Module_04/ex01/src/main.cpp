/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:21:21 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/19 23:13:58 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"


int main()
{
	std::cout << "Leak check:" << std::endl;
	const Animal* a = new Dog();
	const Animal* b = new Cat();

	delete a;
	delete b;


	std::cout << "\nTest with array:" << std::endl;
	int arraySize = 4;
	Animal* animals[arraySize];

	for (int i = 0; i < arraySize; i++) {
		if (i < arraySize / 2)
		{
			std::cout << "\nCreating Dog " << i << ":" << std::endl;
			animals[i] = new Dog();
		}
		else
		{
			std::cout << "\nCreating Cat " << i << ":" << std::endl;
			animals[i] = new Cat();
		}
	}

	std::cout << "\nDestroying array:" << std::endl;
	for (int i = 0; i < arraySize; i++) {
		std::cout << "Deleting animal " << i << ":" << std::endl;
		delete animals[i];
	}


	std::cout << "\nDeep copy test:" << std::endl;
	Dog dogA;
	Dog dogB;

	std::cout << "\nAssignment test:" << std::endl;
	dogB = dogA; 

	std::cout << "\nDestroying local objects:" << std::endl;
	return 0;
}