/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 19:25:37 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/19 21:23:14 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string	Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (this->ideas[i]);
	return ("");
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->ideas[i] = idea;
}