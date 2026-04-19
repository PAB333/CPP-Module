/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 22:09:49 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/19 15:17:16 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_array = new T[n]();
}

template <typename T>
Array<T>::Array(const Array &src) : _size(src._size)
{
	_array = new T[src._size]();
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = src._array[i];
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &src)
{
	if (this != src)
	{
		delete[] _array;
		_size = src._size;
		_array = new T[_size]();
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = src._array[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw indexIsOutOfBoundsException();
	return (_array[i]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}

#endif