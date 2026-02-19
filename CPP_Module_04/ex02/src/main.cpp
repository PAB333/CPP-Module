/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:21:21 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/19 23:12:52 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"


int main()
{
	//AAnimal* errorTest = new AAnimal();
	std::cout << "Polymorphism test:" << std::endl;
	const AAnimal* a = new Dog();
	const AAnimal* b = new Cat();

	std::cout << "\nSound:" << std::endl;
	a->makeSound();
	b->makeSound();

	std::cout << "\nDeleting animal:" << std::endl;
	delete a;
	delete b;

	return (0);
}