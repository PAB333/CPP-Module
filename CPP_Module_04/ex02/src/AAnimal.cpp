/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:22:12 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/19 23:13:02 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal(void) : type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

AAnimal &AAnimal::operator=(const AAnimal &src)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}