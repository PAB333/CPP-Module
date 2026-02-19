/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:26:18 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/19 21:45:07 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : AAnimal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &src) : AAnimal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*src._brain);
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		*this->_brain = *src._brain;
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound(void) const
{
	std::cout << "WOAF WOAF!" << std::endl;
}