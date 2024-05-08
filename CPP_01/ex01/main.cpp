/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:56:26 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/03 12:25:32 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int N = 5;
	int	i = 0;
	Zombie *Horde;

	Horde = zombieHorde(N, "zombie de la horde");
	while (i < N)
	{
		Horde[i].announce();
		i++;
	}
	delete[] Horde;
	return(0);
}
