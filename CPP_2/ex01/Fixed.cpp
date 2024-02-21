/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:27:55 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/21 17:47:22 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//1 <<_fracBits Cela revient à multiplier 1 par 2 élevé à la puissance de_fracBits

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_valeur = 0;
}


Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_valeur = fixed.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	float x = static_cast<float>(fixed.getRawBits()) / (1 << 8);
	os << x;
	return os;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	int x = val <<_fracBits;
	setRawBits(x);
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	int x = roundf(number * (1 <<_fracBits));
	setRawBits(x);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	float x = static_cast<float>(_valeur) / (1 << _fracBits);
	return x;
}

int	Fixed::toInt(void) const
{
	return (int)(_valeur / (1 <<_fracBits));
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (_valeur);
}

void Fixed::setRawBits(int const raw)
{
	_valeur = raw;
}
