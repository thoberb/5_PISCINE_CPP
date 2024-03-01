/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:49:03 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/01 16:52:32 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void)
{
	int turns = 0;

	// DiamondTrap blandine("Blandine");

	// while (turns < 15)
	// {
	// 	blandine.attack("Leo");
	// 	blandine.beRepaired(10);
	// 	blandine.takeDamage(5);
	// 	blandine.whoAmI();
	// 	turns++;
	// }

	DiamondTrap blandine;

	while (turns < 15)
	{
		blandine.attack("Leo");
		blandine.beRepaired(10);
		blandine.takeDamage(5);
		blandine.whoAmI();
		turns++;
	}

	// DiamondTrap jean;
	// DiamondTrap blandine(jean);

	// while (turns < 15)
	// {
	// 	blandine.attack("Leo");
	// 	blandine.beRepaired(10);
	// 	blandine.takeDamage(5);
	// 	blandine.whoAmI();
	// 	turns++;
	// }

	// DiamondTrap jean;
	// DiamondTrap blandine;
	// blandine = jean;

	// while (turns < 15)
	// {
	// 	blandine.attack("Leo");
	// 	blandine.beRepaired(10);
	// 	blandine.takeDamage(5);
	// 	blandine.whoAmI();
	// 	turns++;
	// }
}
