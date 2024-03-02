/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:02:11 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/02 18:49:09 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << BOLD_RED "Default constructor called for Animal" RESET << std::endl;
	_type = "default";
}

Animal::Animal(const Animal& animal)
{
	std::cout << BOLD_RED "Copy constructor called for Animal" << RESET << std::endl;
	_type = animal._type;
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << BOLD_RED "Copy assignment operator called for Animal" << RESET << std::endl;
	if (this != &animal)
		this->_type = animal._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << BOLD_RED "Destructor called for Animal" RESET << std::endl;
}

std::string Animal::getType(void) const
{
	return (_type);
}

void Animal::makeSound(void) const
{
	std::cout << "weird noises from an unknown animal" << std::endl;
}
