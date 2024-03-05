/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:18:55 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/05 18:20:42 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << BOLD_YELLOW "Default constructor called for Cat" RESET << std::endl;
	_type = "Cat";
	_catbrain = new Brain();
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
	std::cout << BOLD_YELLOW "Copy constructor called for Cat" << RESET << std::endl;
	_type = cat._type;
	_catbrain = new Brain(*cat._catbrain);
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << BOLD_YELLOW "Copy assignment operator called for Cat" << RESET << std::endl;
	if (this != &cat)
	{
		delete _catbrain;
		_type = cat._type;
		_catbrain = new Brain(*cat._catbrain);
	}
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
