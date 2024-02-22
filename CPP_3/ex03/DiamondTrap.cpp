/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 04:49:24 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/22 05:16:41 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "Constructor called of Diamond Trap" << std::endl;
	_name = name;
	_HitPoints = FragTrap::_HitPoints;
	_EnergyPoints = ScavTrap::_EnergyPoints;
	_AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondtrap) : ClapTrap(diamondtrap._name + "_clap_name")
{
	std::cout << " Copie constructor called of Diamond Trap" << std::endl;
	_name = diamondtrap._name;
	_HitPoints = diamondtrap.FragTrap::_HitPoints;
	_EnergyPoints = diamondtrap.ScavTrap::_EnergyPoints;
	_AttackDamage = diamondtrap.FragTrap::_AttackDamage;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& diamondtrap)
{
	std::cout << " copie assignement opperator called of Diamond Trap" << std::endl;
	if (this != &diamondtrap)
	{
		ClapTrap::_name = diamondtrap._name + "_clap_name";
		_name = diamondtrap._name;
		_HitPoints = diamondtrap.FragTrap::_HitPoints;
		_EnergyPoints = diamondtrap.ScavTrap::_EnergyPoints;
		_AttackDamage = diamondtrap.FragTrap::_AttackDamage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor called of Diamond Trap" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << _name << " my claptrap name is " << ClapTrap::_name << std::endl;
}
