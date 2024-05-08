/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMAteria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:26:53 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/04 23:25:19 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << BOLD_RED "Default constructor called for AMateria" RESET << std::endl;
	_type = "default";
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << BOLD_RED "Constructor called for AMateria" RESET << std::endl;
}

AMateria::AMateria(const AMateria& amateria)
{
	std::cout << BOLD_RED "Copy constructor called for AMateria" RESET << std::endl;
	_type = amateria._type;
}

AMateria& AMateria::operator=(const AMateria& amateria)
{
	std::cout << BOLD_RED "Copy assignment operator called" RESET << std::endl;
	if (this != &amateria)
		this->_type = amateria._type;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << BOLD_RED "Destructor called for AMateria" RESET << std::endl;

}

std::string const & AMateria::getType() const
{
	return(_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << RED << _type << "is used against " << target.getName() << RESET << std::endl;
}
