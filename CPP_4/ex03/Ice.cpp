/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:00:47 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/04 23:14:20 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout << BOLD_BLUE "Default constructor called for Ice" RESET << std::endl;
	_type = "ice";
}

Ice::Ice(const Ice& ice)
{
	std::cout << BOLD_BLUE "Copy constructor called for Ice" RESET << std::endl;
	_type = ice._type;
}

Ice& Ice::operator=(const Ice& ice)
{
	std::cout << BOLD_BLUE "Copy assignment operator called for Ice" RESET << std::endl;
	if (this != &ice)
		this->_type = ice._type;
	return(*this);
}

Ice::~Ice(void)
{
	std::cout << BOLD_BLUE "Destructor called for Ice" RESET << std::endl;
}

AMateria* Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << BLUE "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
