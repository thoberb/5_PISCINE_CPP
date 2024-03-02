/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:18:55 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/02 18:50:35 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << BOLD_YELLOW "Default constructor called for Cat" RESET << std::endl;
	_type = "Cat";
	_catbrain = new Brain();
}

Cat::Cat(const Cat& cat)
{
	std::cout << BOLD_YELLOW "Copy constructor called for Cat" << RESET << std::endl;
	_type = cat._type;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << BOLD_YELLOW "Copy assignment operator called for Cat" << RESET << std::endl;
	if (this != &cat)
		this->_type = cat._type;
	return (*this);
}

Cat::~Cat(void)
{
	delete(_catbrain);
	std::cout << BOLD_YELLOW "Destructor called for Cat" RESET << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << YELLOW "miaaaaaaou miaouuu" RESET << std::endl;
}
