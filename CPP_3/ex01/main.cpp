/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:37:06 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/22 04:12:08 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{

	ClapTrap claptrap("WALL-E");

	while (claptrap.getEnergyPoints() > 0 && claptrap.getHitPoints() > 0)
	{
		claptrap.attack("EVIL ROBOT");
		claptrap.takeDamage(4);
		claptrap.beRepaired(2);
		std::cout << std::endl;
	}
	std::cout << claptrap.getName() << " died..." << std::endl;

	ScavTrap scavtrap("SCAVY");

	while (scavtrap.getEnergyPoints() > 0 && scavtrap.getHitPoints() > 0)
	{
		scavtrap.attack("Dude");
		scavtrap.takeDamage(20);
		scavtrap.beRepaired(5);
		std::cout << std::endl;
	}
	std::cout << scavtrap.getName() << " died..." << std::endl;

	ScavTrap scavtrap2("LILI");

	scavtrap2.guardGate();
	
	return 0;
}
