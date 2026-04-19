/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 22:09:10 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/19 00:09:06 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		Array &operator=(const Array &src);
		~Array();

		T	&operator[](unsigned int i);
		unsigned int	size() const;

		class  indexIsOutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Error: Index is out of bounds");
				}
		};
	private:
		T				*_array;
		unsigned int	_size;
};

#include "Array.tpp"

#endif