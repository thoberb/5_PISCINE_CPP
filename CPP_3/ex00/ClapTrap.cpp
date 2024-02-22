/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:37:30 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/22 03:01:45 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Default constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = clapTrap._name;
	this->_HitPoints = clapTrap._HitPoints;
	this->_EnergyPoints = clapTrap._EnergyPoints;
	this->_AttackDamage = clapTrap._AttackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_HitPoints > 0 && _EnergyPoints >= 1)
	{
		_EnergyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _AttackDamage << " points of damage." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_HitPoints -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage and has now " << _HitPoints << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_HitPoints > 0 && _EnergyPoints >= 1)
	{
		_HitPoints += amount;
		_EnergyPoints--;
		std::cout << "ClapTrap " << _name << " repairs itself and gains " << amount << " hit points." << std::endl;
		std::cout << "ClapTrap " << _name << " has now a total of " << _HitPoints << " hit points." << std::endl;
	}
}

int ClapTrap::getEnergyPoints(void)
{
	return (_EnergyPoints);
}

int ClapTrap::getHitPoints(void)
{
	return (_HitPoints);
}

std::string ClapTrap::getName(void)
{
	return (_name);
}
