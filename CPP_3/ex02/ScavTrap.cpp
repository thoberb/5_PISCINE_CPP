/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 03:10:48 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/22 04:06:09 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "Constructor called for ScavTrap " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap)
{
	std::cout << "Copy constructor called for ScavTrap " << std::endl;
	*this = scavTrap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	std::cout << "Copy assignment operator called for ScavTrap " << std::endl;
	if (this != &scavTrap)
	{
		this->_name = scavTrap._name;
		this->_HitPoints = scavTrap._HitPoints;
		this->_EnergyPoints = scavTrap._EnergyPoints;
		this->_AttackDamage = scavTrap._AttackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called for ScavTrap" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_HitPoints > 0 && _EnergyPoints >= 1)
	{
		_EnergyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _AttackDamage << " points of damage." << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScapTrap is now in Gate keeper mode" << std::endl;
}
