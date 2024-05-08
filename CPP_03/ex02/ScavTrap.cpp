/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:28:52 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/01 14:59:16 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << BOLD_BLUE "Default constructor called for ScavTrap" RESET << std::endl;
	_name = "default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << BOLD_BLUE "Constructor called for ScavTrap " << _name << RESET << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap) : ClapTrap(scavTrap)
{
	std::cout << BOLD_BLUE "Copy constructor called for ScavTrap" RESET << std::endl;
	_name = scavTrap._name;
	_hitPoints = scavTrap._hitPoints;
	_energyPoints = scavTrap._energyPoints;
	_attackDamage = scavTrap._attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	std::cout << BOLD_BLUE "Copy assignment operator called for ScavTrap" RESET << std::endl;
	if (this != &scavTrap)
	{
		this->_name = scavTrap._name;
		this->_hitPoints = scavTrap._hitPoints;
		this->_energyPoints = scavTrap._energyPoints;
		this->_attackDamage = scavTrap._attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << BOLD_BLUE "Destructor called for ScavTrap" RESET << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << BLUE "ScavTrap is now in Gate keeper mode." RESET << std::endl;
}
