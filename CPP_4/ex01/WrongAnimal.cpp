/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:34:54 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/02 17:35:14 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	_type = "default";
	std::cout << BOLD_RED "Default constructor called for WrongAnimal" RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wronganimal)
{
	_type = wronganimal._type;
	std::cout << BOLD_RED "Copy constructor called for WrongAnimal" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wronganimal)
{
	if (this != &wronganimal)
		this->_type = wronganimal._type;
	std::cout << BOLD_RED "Copy assignment operator called for WrongAnimal" << RESET << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << BOLD_RED "Destructor called for WrongAnimal" RESET << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "weird noises from an unknown Wronganimal" << std::endl;
}
