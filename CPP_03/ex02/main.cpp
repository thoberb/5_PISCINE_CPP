/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:49:03 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/01 15:01:37 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main (void)
{
	int turns = 0;

	FragTrap blandine("Blandine");

	while (turns < 15)
	{
		blandine.attack("Leo");
		blandine.beRepaired(10);
		blandine.takeDamage(5);
		blandine.highFivesGuys();
		turns++;
	}

	// FragTrap blandine;

	// while (turns < 15)
	// {
	// 	blandine.attack("Leo");
	// 	blandine.beRepaired(10);
	// 	blandine.takeDamage(5);
	// 	blandine.highFivesGuys();
	// 	turns++;
	// }

	// FragTrap jean;
	// FragTrap blandine(jean);

	// while (turns < 15)
	// {
	// 	blandine.attack("Leo");
	// 	blandine.beRepaired(10);
	// 	blandine.takeDamage(5);
	// 	blandine.highFivesGuys();
	// 	turns++;
	// }

	// FragTrap jean;
	// FragTrap blandine;
	// blandine = jean;

	// while (turns < 15)
	// {
	// 	blandine.attack("Leo");
	// 	blandine.beRepaired(10);
	// 	blandine.takeDamage(5);
	//	blandine.highFivesGuys();
	// 	turns++;
	// }
}
