/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:21:40 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/02 18:49:27 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << BOLD_BLUE "Default constructor called for Dog" RESET << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& dog)
{
	std::cout << BOLD_BLUE "Copy constructor called for Dog" << RESET << std::endl;
	_type = dog._type;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << BOLD_BLUE "Copy assignment operator called for Dog" << RESET << std::endl;
	if (this != &dog)
		this->_type = dog._type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << BOLD_BLUE "Destructor called for Dog" RESET << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << BLUE "wouuuuf wouf" RESET << std::endl;
}
