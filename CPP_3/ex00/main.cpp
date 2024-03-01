/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:49:03 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/01 14:23:04 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	int turns = 0;

	ClapTrap blandine("Blandine");

	while (turns < 15)
	{
		blandine.attack("Leo");
		blandine.beRepaired(10);
		blandine.takeDamage(5);
		turns++;
	}

	// ClapTrap blandine;

	// while (turns < 15)
	// {
	// 	blandine.attack("Leo");
	// 	blandine.beRepaired(10);
	// 	blandine.takeDamage(5);
	// 	turns++;
	// }

	// ClapTrap jean;
	// ClapTrap blandine(jean);

	// while (turns < 15)
	// {
	// 	blandine.attack("Leo");
	// 	blandine.beRepaired(10);
	// 	blandine.takeDamage(5);
	// 	turns++;
	// }

	// ClapTrap jean;
	// ClapTrap blandine;
	// blandine = jean;

	// while (turns < 15)
	// {
	// 	blandine.attack("Leo");
	// 	blandine.beRepaired(10);
	// 	blandine.takeDamage(5);
	// 	turns++;
	// }
}
