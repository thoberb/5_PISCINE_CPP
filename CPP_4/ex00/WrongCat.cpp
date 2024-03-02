/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:36:22 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/02 17:37:34 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << BOLD_YELLOW "Default constructor called for WrongCat" RESET << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& wrongcat)
{
	std::cout << BOLD_YELLOW "Copy constructor called for WrongCat" << RESET << std::endl;
	_type = wrongcat._type;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongcat)
{
	std::cout << BOLD_YELLOW "Copy assignment operator called for WrongCat" << RESET << std::endl;
	if (this != &wrongcat)
		this->_type = wrongcat._type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << BOLD_YELLOW "Destructor called for WrongCat" RESET << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << YELLOW "miaaaaaaou miaouuu" RESET << std::endl;
}
