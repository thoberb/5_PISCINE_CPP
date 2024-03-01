/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:02:11 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/01 19:16:53 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	_type = "default";
	std::cout << BOLD_RED "Default constructor called for Animal" RESET << std::endl;
}

Animal::Animal(const Animal& animal)
{
	_type = animal._type;
	std::cout << BOLD_RED "Copy constructor called for Animal" << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
	if (this != &animal)
		this->_type = animal._type;
	std::cout << BOLD_RED "Copy assignment operator called for Animal" << RESET << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << BOLD_RED "Destructor called for Animal" RESET << std::endl;
}

void Animal::getType(void) const
{
	return (_type);
}

void Animal::makeSound(void) const
{
	if (strcmp(_type, "Cat"))
		std::cout << YELLOW "Miaouuuuuuu miaou" RESET << std::endl;
	else if (strcmp(_type, "Dog"))
		std::cout << BLUE "Wouuuuf wouf" RESET << std::endl;
	else
		std::cout << "weird noises from an unknown animal" << std::endl;
}
