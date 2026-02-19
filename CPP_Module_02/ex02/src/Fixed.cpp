/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 00:18:23 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/19 17:09:18 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void): _FixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->_FixedPointValue = number << _FractionalBits;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->_FixedPointValue = roundf(number * (1 << _FractionalBits));
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_FixedPointValue = src.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->_FixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_FixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_FixedPointValue / (float)(1 << _FractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->_FixedPointValue >> _FractionalBits);
}

bool Fixed::operator>(const Fixed &src) const
{
	return (this->getRawBits() > src.getRawBits());
}

bool Fixed::operator<(const Fixed &src) const
{
	return (this->getRawBits() < src.getRawBits());
}

bool Fixed::operator>=(const Fixed &src) const
{
	return (this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator<=(const Fixed &src) const
{
	return (this->getRawBits() <= src.getRawBits());
}

bool Fixed::operator==(const Fixed &src) const
{
	return (this->getRawBits() == src.getRawBits());
}

bool Fixed::operator!=(const Fixed &src) const
{
	return (this->getRawBits() != src.getRawBits());
}

Fixed Fixed::operator+(const Fixed &src) const
{
	return (Fixed(this->toFloat() + src.toFloat()));
}

Fixed Fixed::operator-(const Fixed &src) const
{
	return (Fixed(this->toFloat() - src.toFloat()));
}

Fixed Fixed::operator*(const Fixed &src) const
{
	return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed Fixed::operator/(const Fixed &src) const
{
	return (Fixed(this->toFloat() / src.toFloat()));
}

Fixed& Fixed::operator++(void)
{
	this->_FixedPointValue++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_FixedPointValue++;
	return (tmp);
}

Fixed& Fixed::operator--(void)
{
	this->_FixedPointValue--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_FixedPointValue--;
	return (tmp);
}

Fixed& Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

const Fixed& Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed& Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

const Fixed& Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

std::ostream &operator<<(std::ostream &out, Fixed const &in)
{
	out << in.toFloat();
	return (out);
}