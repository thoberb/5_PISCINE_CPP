/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:09:36 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/01 18:24:23 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	_name = "default";
	ClapTrap::_name = "default_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_attackDamage = FragTrap::_attackDamage;
	_energyPoints = ScavTrap::_energyPoints;
	std::cout << BOLD_GREEN "Default constructor called for DiamondTrap" RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_attackDamage = FragTrap::_attackDamage;
	_energyPoints = ScavTrap::_energyPoints;
	std::cout << BOLD_GREEN "Constructor called for DiamondTrap " << _name << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap) : ClapTrap(diamondTrap), ScavTrap(diamondTrap), FragTrap(diamondTrap)
{
	_name = diamondTrap._name;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = diamondTrap._hitPoints;
	_energyPoints = diamondTrap._energyPoints;
	_attackDamage = diamondTrap._attackDamage;
	std::cout << BOLD_GREEN "Copy constructor called for DiamondTrap" RESET << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	std::cout << BOLD_GREEN "Copy assignment operator called for DiamondTrap" RESET << std::endl;
	if (this != &diamondTrap)
	{
		this->_name = diamondTrap._name;
		this->_hitPoints = diamondTrap._hitPoints;
		this->_energyPoints = diamondTrap._energyPoints;
		this->_attackDamage = diamondTrap._attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << BOLD_GREEN "Destructor called for DiamondTrap" RESET << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << GREEN "My DiamondTrap name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << RESET << std::endl;
}
