/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:22:23 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/19 23:13:11 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(const AAnimal &src);
		AAnimal &operator=(const AAnimal &src);
		virtual	~AAnimal(void);

		virtual void	makeSound() const = 0;
		std::string		getType() const;
	protected:
		std::string	type;
};

#endif