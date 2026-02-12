/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:16:13 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/12 21:17:35 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	this->_count = 0;
}

PhoneBook::~PhoneBook(void){}

std::string	PhoneBook::_shorten(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::add_contact(void)
{
	std::string	f_name, l_name, n_name, phone, secret;

	std::cout << "Enter First Name: ";
	if (!std::getline(std::cin, f_name))
		return ;
	std::cout << "Enter Last Name: ";
	if (!std::getline(std::cin, l_name))
		return ;
	std::cout << "Enter Nickname: ";
	if (!std::getline(std::cin, n_name))
		return ;
	std::cout << "Enter Phone Number: ";
	if (!std::getline(std::cin, phone))
		return ;
	std::cout << "Enter Darkest Secret: ";
	if (!std::getline(std::cin, secret))
		return ;
	if (f_name.empty() | l_name.empty() | n_name.empty() | phone.empty() | secret.empty())
	{
		std::cout << "Error: Contact not saved. Fields cannot be empty." << std::endl;
		return ;
	}
	int	i = this->_index % 8;
	this->_contacts[i].set_firstname(f_name);
	this->_contacts[i].set_lastname(l_name);
	this->_contacts[i].set_nickname(n_name);
	this->_contacts[i].set_phonenumber(phone);
	this->_contacts[i].set_darkestsecret(secret);
	std::cout << "Contact added successfully to index " << i << std::endl;
	this->_index++;
	if (this->_count < 8)
		this->_count++;
}

void	PhoneBook::search_contact(void)
{
	std::string	input;
	int			index;

	if (this->_count == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}
	std::cout << "|   Index  |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->_count; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << _shorten(this->_contacts[i].get_firstname());
		std::cout << "|" << std::setw(10) << _shorten(this->_contacts[i].get_lastname());
		std::cout << "|" << std::setw(10) << _shorten(this->_contacts[i].get_nickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "Enter index to view details: ";
	if (!std::getline(std::cin, input))
		return ;
	if (input.length() == 1 &&  input[0] >= '0' && input[0] <= '7')
	{
		index = input[0] - '0';
		if (index < this->_count)
		{
			std::cout << "First Name: " << this->_contacts[index].get_firstname() << std::endl;
			std::cout << "Last Name: " << this->_contacts[index].get_lastname() << std::endl;
			std::cout << "Nickname: " << this->_contacts[index].get_nickname() << std::endl;
			std::cout << "Phone Number: " << this->_contacts[index].get_phonenumber() << std::endl;
			std::cout << "Darkest Secret: " << this->_contacts[index].get_darkestsecret() << std::endl;
		}
		else
			std::cout << "Invalid Index" << std::endl;
	}
	else
		std::cout << "Invalid Input" << std::endl;
}
