/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 22:03:28 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/18 23:38:07 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void	iter(T *array, const unsigned int length, void (*function)(T&))
{
	if (!array || !function)
		return ;
	for (unsigned int i = 0; i < length; i++)
		function(array[i]);
}

#endif