/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:27:55 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/15 18:20:42 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	int x = number << _fracBits;
	_valeur = x;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	int x = roundf(number * (1 << _fracBits));
	_valeur = x;
}

float Fixed::toFloat(void) const
{
	float x;
	x = static_cast<float>(_valeur);
	return (x);
}

int Fixed::toInt(void) const
{
	int x;
	x = static_cast<int>(_valeur);
	return (x);
}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_valeur = 0;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << static_cast<float>(fixed.getRawBits());
	return os;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_valeur = fixed.getRawBits();
}

Fixed&	Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_valeur = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_valeur);
}

void	Fixed::setRawBits(int const valeur)
{
	_valeur = valeur;
}
