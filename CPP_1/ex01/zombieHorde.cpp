/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:55:37 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/03 12:40:28 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	i = 0;
	Zombie *Horde = new Zombie[N];

	while (i < N)
	{
		new (&Horde[i]) Zombie(name);
		i++;
	}
	return (Horde);
}
