/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:18:55 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/05 17:57:10 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << BOLD_YELLOW "Default constructor called for Cat" RESET << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& cat) : Animal(cat)
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
	std::cout << BOLD_YELLOW "Destructor called for Cat" RESET << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << YELLOW "miaaaaaaou miaouuu" RESET << std::endl;
}
