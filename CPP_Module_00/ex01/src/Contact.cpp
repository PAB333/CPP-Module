/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:15:24 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/12 21:09:39 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

void	Contact::set_firstname(std::string str)
{
	this->_first_name = str;
}

void	Contact::set_lastname(std::string str)
{
	this->_last_name = str;
}

void	Contact::set_nickname(std::string str)
{
	this->_nickname = str;
}

void	Contact::set_phonenumber(std::string str)
{
	this->_phone_number = str;
}

void	Contact::set_darkestsecret(std::string str)
{
	this->_darkest_secret = str;
}

std::string	Contact::get_firstname(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_lastname(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::get_phonenumber(void) const
{
	return (this->_phone_number);
}

std::string	Contact::get_darkestsecret(void) const
{
	return (this->_darkest_secret);
}
