/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:13:02 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/01 16:09:30 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	_name = "default";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << BOLD_RED "Default constructor called for ClapTrap" RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << BOLD_RED "Constructor called for ClapTrap " << _name << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
	_name = clapTrap._name;
	_hitPoints = clapTrap._hitPoints;
	_energyPoints = clapTrap._energyPoints;
	_attackDamage = clapTrap._attackDamage;
	std::cout << BOLD_RED "Copy constructor called for ClapTrap" RESET << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	std::cout << BOLD_RED "Copy assignment operator called for ClapTrap" RESET << std::endl;
	if (this != &clapTrap)
	{
		this->_name = clapTrap._name;
		this->_hitPoints = clapTrap._hitPoints;
		this->_energyPoints = clapTrap._energyPoints;
		this->_attackDamage = clapTrap._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << BOLD_RED "Destructor called for ClapTrap" RESET << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << RED "ClapTrap " << _name << " attacks " << target << ", causing "<< _attackDamage << " points of damage!" RESET << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints <= 0)
		std::cout << RED "ClapTrap " << _name << " is dead" RESET << std::endl;
	else if (_energyPoints < 1)
		std::cout << RED "ClapTrap " << _name << " has " << _energyPoints << " energy left and can't attack." RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << RED "ClapTrap " << _name << " repairs itself and gains " << amount << " hit points.";
		_hitPoints += amount;
		std::cout << RED " ClapTrap has now " << _hitPoints << " hitpoints." RESET << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints <= 0)
		std::cout << RED "ClapTrap " << _name << " is dead" RESET << std::endl;
	else if (_energyPoints < 1)
		std::cout << RED "ClapTrap " << _name << " has " << _energyPoints << " energy left and can't repair itself." RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		std::cout << RED "ClapTrap " << _name << " takes damage and looses " << amount << " hit points.";
		_hitPoints -= amount;
		std::cout << RED " ClapTrap has now " << _hitPoints << " hitpoints." RESET << std::endl;
	}
	if (_hitPoints <= 0)
		std::cout << RED "ClapTrap " << _name << " is dead" RESET << std::endl;
}
