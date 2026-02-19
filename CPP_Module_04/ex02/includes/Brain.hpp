/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 19:25:26 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/19 21:23:24 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &src);
		Brain &operator=(const Brain &src);
		~Brain(void);

		std::string	getIdea(int	i) const;
		void	setIdea(int i, std::string idea);
	private:
		std::string	ideas[100];
};

#endif