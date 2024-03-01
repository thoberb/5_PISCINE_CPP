/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:18:55 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/01 19:28:31 by bberthod         ###   ########.fr       */
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
	if (this != &Cat)
		this->_type = cat._type;
	std::cout << BOLD_YELLOW "Copy assignment operator called for Cat" << RESET << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << BOLD_YELLOW "Destructor called for Cat" RESET << std::endl;
}
