/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:53:17 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/04 14:47:41 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon " << _type << " created" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon " << _type << " destroyed" << std::endl;
}

std::string Weapon::getType(void) const
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
}
