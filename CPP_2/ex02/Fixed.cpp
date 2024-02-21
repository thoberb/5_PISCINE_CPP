/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:58:57 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/21 13:23:04 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//1 <<_fracBits Cela revient à multiplier 1 par 2 élevé à la puissance de_fracBits

Fixed::Fixed(void)
{
	_valeur = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nombre)
{
	int	converti;
	std::cout << "Int constructor called" << std::endl;
	converti = nombre << _fracBits;
	setRawBits(converti);
}

Fixed::Fixed(const float nombre)
{
	int converti;
	std::cout<< "Float constructor called" << std::endl;
	converti = roundf(nombre * (1 << _fracBits));
	setRawBits(converti);
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_valeur = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (_valeur);
}

void Fixed::setRawBits(int const raw)
{
	_valeur = raw;
}

float Fixed::toFloat(void) const
{
	float converti;
	converti = static_cast<float>(_valeur) / (1 << _fracBits);
	return (converti);
}

int Fixed::toInt(void) const
{
	int converti;
	converti = _valeur / (1 << _fracBits);
	return (converti);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << static_cast<float>(fixed.getRawBits()) / (1 << 8);
	return os;
}

bool Fixed::operator>(const Fixed& nombre) const
{
	return (getRawBits() > nombre.getRawBits());
}

bool Fixed::operator<(const Fixed& nombre) const
{
	return (getRawBits() < nombre.getRawBits());
}

bool Fixed::operator>=(const Fixed& nombre) const
{
	return (getRawBits() >= nombre.getRawBits());
}

bool Fixed::operator<=(const Fixed& nombre) const
{
	return (getRawBits() <= nombre.getRawBits());
}

bool Fixed::operator==(const Fixed& nombre) const
{
	return (getRawBits() == nombre.getRawBits());
}

bool Fixed::operator!=(const Fixed& nombre) const
{
	return (getRawBits() != nombre.getRawBits());
}

Fixed Fixed::operator+(const Fixed& nombre) const
{
	return (getRawBits() + nombre.getRawBits());
}

Fixed Fixed::operator-(const Fixed& nombre) const
{
	return (getRawBits() - nombre.getRawBits());
}

Fixed Fixed::operator*(const Fixed& nombre) const
{
	return (getRawBits() * nombre.getRawBits());
}

Fixed Fixed::operator/(const Fixed& nombre) const
{
	return (getRawBits() / nombre.getRawBits());
}

Fixed Fixed::operator++(int) // post increment
{
	Fixed tmp(*this);
	++(_valeur);
	return tmp;
}

Fixed& Fixed::operator++(void) // pre increment
{
	(_valeur)++;
	return *this;
}
Fixed Fixed::operator--(int) //post decrement
{
	Fixed tmp(*this);
	--(_valeur);
	return tmp;
}
Fixed& Fixed::operator--(void) // pre decrement
{
	(_valeur)--;
	return *this;
}
