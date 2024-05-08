/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:14:11 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/05 19:17:12 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << BOLD_GREEN "Default constructor called for Cure" RESET << std::endl;
	_type = "cure";
}

Cure::Cure(const Cure& cure) : AMateria(cure)
{
	std::cout << BOLD_GREEN "Copy constructor called for Cure" RESET << std::endl;
	_type = cure._type;
}

Cure& Cure::operator=(const Cure& cure)
{
	std::cout << BOLD_GREEN "Copy assignment operator called for Cure" RESET << std::endl;
	if (this != &cure)
		this->_type = cure._type;
	return(*this);
}

Cure::~Cure(void)
{
	std::cout << BOLD_GREEN "Destructor called for Cure" RESET << std::endl;
}

AMateria* Cure::clone(void) const
{
	return(new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << GREEN "* heals " << target.getName() << "’s wounds *" RESET << std::endl;
}
