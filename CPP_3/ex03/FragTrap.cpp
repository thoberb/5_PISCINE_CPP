/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 04:18:54 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/22 05:10:25 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	_name = "NoName";
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "Constructor called for FragTrap " << _name << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "Constructor called for FragTrap " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap)
{
	std::cout << "Copy constructor called for FragTrap " << std::endl;
	*this = fragTrap;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
	std::cout << "Copy assignment operator called for FragTrap " << std::endl;
	if (this != &fragTrap)
	{
		this->_name = fragTrap._name;
		this->_HitPoints = fragTrap._HitPoints;
		this->_EnergyPoints = fragTrap._EnergyPoints;
		this->_AttackDamage = fragTrap._AttackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called for FragTrap" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << "wants a highfive !" << std::endl;
}
