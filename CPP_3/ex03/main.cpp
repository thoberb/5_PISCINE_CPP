/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:37:06 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/22 05:27:00 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	//FragTrap leo("Leonard");
	// ClapTrap David("David");
	//ScavTrap val;
	DiamondTrap alan("Alan");
	DiamondTrap jul("Jul");
	DiamondTrap pasteque(alan);
	// David.attack("Alix");
	// val.attack("Valentin");
	// leo.HighFivesGuys();
	//leo.attack("Alan");
	// leo.takeDamage(5);
	// leo.takeDamage(2);
	// val.attack("Axel");
	// val.beRepaired(7);
	jul = alan;
	alan.whoAmI();
	pasteque.whoAmI();
	jul.attack("Julien");
	alan.attack("Julien");
	alan.beRepaired(8);
	alan.guardGate();
	alan.highFivesGuys();
	alan.takeDamage(50);
	alan.takeDamage(50);
	alan.beRepaired(50);
}
