/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:37:06 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/22 04:33:32 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	std::cout << std::endl;

	ScavTrap scavtrap("SCAVY");
	while (scavtrap.getEnergyPoints() > 0 && scavtrap.getHitPoints() > 0)
	{
		scavtrap.attack("Dude");
		scavtrap.takeDamage(20);
		scavtrap.beRepaired(5);
		std::cout << std::endl;
	}
	std::cout << scavtrap.getName() << " died..." << std::endl;

	std::cout << std::endl;

	ScavTrap scavtrap2("LILI");
	scavtrap2.guardGate();

	std::cout << std::endl;

	FragTrap fragTrap("FRAGY");
	while (fragTrap.getEnergyPoints() > 0 && fragTrap.getHitPoints() > 0)
	{
		fragTrap.attack("random guy");
		fragTrap.takeDamage(30);
		fragTrap.beRepaired(10);
		std::cout << std::endl;
	}
	std::cout << fragTrap.getName() << " died..." << std::endl;

	std::cout << std::endl;

	FragTrap FragTrap2("FRAGY2");
	FragTrap2.highFivesGuys();

	return 0;
}
