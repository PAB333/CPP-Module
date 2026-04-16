/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 15:58:01 by pibreiss          #+#    #+#             */
/*   Updated: 2026/04/16 23:35:16 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"
#include <iostream>

int	main()
{
	Data	test;
	test.name = "test";
	test.size = 42;

	std::cout << "Data address: " << &test << std::endl;
	std::cout << "Data name: " << test.name << std::endl;
	std::cout << "Data size: " << test.size << std::endl;

	uintptr_t serializedData = Serializer::serialize(&test);
	std::cout << "Data value after serializer: " << serializedData << std::endl;
	Data *deserializedData = Serializer::deserialize(serializedData);
	std::cout << "Deserialized data adress: " << deserializedData << std::endl;
	std::cout << "Deserialized data name: " << deserializedData->name << std::endl;
	std::cout << "Deserialized data size: " << deserializedData->size << std::endl;
}
