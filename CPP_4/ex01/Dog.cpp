/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:21:40 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/02 18:27:43 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	_dogbrain = new Brain();
	std::cout << BOLD_BLUE "Default constructor called for Dog" RESET << std::endl;
}

Dog::Dog(const Dog& dog)
{
	_type = dog._type;
	std::cout << BOLD_BLUE "Copy constructor called for Dog" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	if (this != &dog)
		this->_type = dog._type;
	std::cout << BOLD_BLUE "Copy assignment operator called for Dog" << RESET << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	delete(_dogbrain);
	std::cout << BOLD_BLUE "Destructor called for Dog" RESET << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << BLUE "wouuuuf wouf" RESET << std::endl;
}
