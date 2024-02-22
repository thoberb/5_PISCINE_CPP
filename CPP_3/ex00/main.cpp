/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:37:06 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/22 02:51:53 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
	return 0;
}
