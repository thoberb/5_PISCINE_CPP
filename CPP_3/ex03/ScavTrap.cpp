/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:28:52 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/01 18:20:32 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_name = "default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << BOLD_BLUE "Default constructor called for ScavTrap" RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << BOLD_BLUE "Constructor called for ScavTrap " << _name << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap) : ClapTrap(scavTrap)
{
	_name = scavTrap._name;
	_hitPoints = scavTrap._hitPoints;
	_energyPoints = scavTrap._energyPoints;
	_attackDamage = scavTrap._attackDamage;
	std::cout << BOLD_BLUE "Copy constructor called for ScavTrap" RESET << std::endl;
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

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << BLUE "ScavTrap " << _name << " attacks " << target << ", causing "<< _attackDamage << " points of damage!" RESET << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints <= 0)
		std::cout << BLUE "ScavTrap " << _name << " is dead" RESET << std::endl;
	else if (_energyPoints < 1)
		std::cout << BLUE "ScavTrap " << _name << " has " << _energyPoints << " energy left and can't attack." RESET << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << BLUE "ScavTrap is now in Gate keeper mode." RESET << std::endl;
}
