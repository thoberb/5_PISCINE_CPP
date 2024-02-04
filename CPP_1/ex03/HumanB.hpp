/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:53:57 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/04 15:12:14 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon	*_weapon;
	public:
		HumanB(std::string _name);
		~HumanB(void);
		void setWeapon(Weapon &weapon);
		void attack(void);
};

#endif
