/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:50:12 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/17 21:42:19 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ whatever.hpp"
#include <string>
#include <iostream>

int main( void )
{
	std::cout << "Subject test: " << std::endl;
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "string1";
	std::string d = "string2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << "\nEquality test: " << std::endl;
	a = 5;
	b = 5;
	std::cout << "Adress of a: " << &a << std::endl;
	std::cout << "Adress of b: " << &b << std::endl;
	std::cout << "Address returned by min: " << &(::min(a, b)) << std::endl;
	std::cout << "Address returned by max: " << &(::max(a, b)) << std::endl;
	return 0;
}
