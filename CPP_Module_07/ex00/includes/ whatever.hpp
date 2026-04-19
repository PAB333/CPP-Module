/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    whatever.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:50:30 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/17 21:15:59 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T	&min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
const T	&max(const T &a, const T &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif