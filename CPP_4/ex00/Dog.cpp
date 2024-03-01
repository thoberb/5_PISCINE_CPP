/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:21:40 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/01 19:28:44 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	std::cout << BOLD_BLUE "Default constructor called for Dog" RESET << std::endl;
}

Dog::Dog(const Dog& dog)
{
	_type = dog._type;
	std::cout << BOLD_BLUE "Copy constructor called for Dog" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	if (this != &Dog)
		this->_type = dog._type;
	std::cout << BOLD_BLUE "Copy assignment operator called for Dog" << RESET << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << BOLD_BLUE "Destructor called for Dog" RESET << std::endl;
}
