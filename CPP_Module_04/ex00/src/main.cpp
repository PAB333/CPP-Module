/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:21:21 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/19 20:22:41 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	std::cout << "Polymorphism with virtual" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\nTypes:" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << "\nSound:" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "\nDelete animals:" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "\nNo virtual" << std::endl;
	const WrongAnimal*	wrongmeta = new WrongAnimal();
	const WrongAnimal*	wrongi = new WrongCat();

	std::cout << "\nTypes:" << std::endl;
	std::cout << wrongi->getType() << " " << std::endl;

	std::cout << "\nSound:" << std::endl;
	wrongmeta->makeSound();
	wrongi->makeSound();

	std::cout << "\nDelete animals:" << std::endl;
	delete wrongmeta;
	delete wrongi;

	return 0;
}