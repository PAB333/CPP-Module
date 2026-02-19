/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:15:24 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/19 17:02:32 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

void	Contact::set_firstname(std::string str)
{
	this->_FirstName = str;
}

void	Contact::set_lastname(std::string str)
{
	this->_LastName = str;
}

void	Contact::set_nickname(std::string str)
{
	this->_Nickname = str;
}

void	Contact::set_phonenumber(std::string str)
{
	this->_PhoneNumber = str;
}

void	Contact::set_darkestsecret(std::string str)
{
	this->_DarkestSecret = str;
}

std::string	Contact::get_firstname(void) const
{
	return (this->_FirstName);
}

std::string	Contact::get_lastname(void) const
{
	return (this->_LastName);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_Nickname);
}

std::string	Contact::get_phonenumber(void) const
{
	return (this->_PhoneNumber);
}

std::string	Contact::get_darkestsecret(void) const
{
	return (this->_DarkestSecret);
}
