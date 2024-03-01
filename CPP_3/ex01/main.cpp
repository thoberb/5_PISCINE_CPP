/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:49:03 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/01 14:49:39 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (void)
{
	int turns = 0;

	ScavTrap blandine("Blandine");

	while (turns < 15)
	{
		blandine.attack("Leo");
		blandine.beRepaired(10);
		blandine.takeDamage(5);
		blandine.guardGate();
		turns++;
	}

	// ScavTrap blandine;

	// while (turns < 15)
	// {
	// 	blandine.attack("Leo");
	// 	blandine.beRepaired(10);
	// 	blandine.takeDamage(5);
	// 	blandine.guardGate();
	// 	turns++;
	// }

	// ScavTrap jean;
	// ScavTrap blandine(jean);

	// while (turns < 15)
	// {
	// 	blandine.attack("Leo");
	// 	blandine.beRepaired(10);
	// 	blandine.takeDamage(5);
	// 	blandine.guardGate();
	// 	turns++;
	// }

	// ScavTrap jean;
	// ScavTrap blandine;
	// blandine = jean;

	// while (turns < 15)
	// {
	// 	blandine.attack("Leo");
	// 	blandine.beRepaired(10);
	// 	blandine.takeDamage(5);
	//	blandine.guardGate();
	// 	turns++;
	// }
}
