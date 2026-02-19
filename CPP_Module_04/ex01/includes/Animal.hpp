/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:22:23 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/19 17:38:05 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual	~Animal(void);

		virtual void	makeSound() const;
		std::string		getType() const;
	protected:
		std::string	type;
};

#endif