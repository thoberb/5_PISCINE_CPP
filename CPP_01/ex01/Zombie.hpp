/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:19:45 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/04 13:14:50 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(){};
		Zombie(std::string name);
		~Zombie(void);
		void announce(void) const;
};

Zombie* zombieHorde( int N, std::string name );

#endif
