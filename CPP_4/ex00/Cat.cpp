/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:18:55 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/02 17:05:33 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	std::cout << BOLD_YELLOW "Default constructor called for Cat" RESET << std::endl;
}

Cat::Cat(const Cat& cat)
{
	_type = cat._type;
	std::cout << BOLD_YELLOW "Copy constructor called for Cat" << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	if (this != &cat)
		this->_type = cat._type;
	std::cout << BOLD_YELLOW "Copy assignment operator called for Cat" << RESET << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << BOLD_YELLOW "Destructor called for Cat" RESET << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << YELLOW "miaaaaaaou miaouuu" RESET << std::endl;
}
