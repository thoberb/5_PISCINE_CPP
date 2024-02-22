/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 04:19:31 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/22 05:09:59 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& fragTrap);
	FragTrap& operator=(const FragTrap& fragTrap);
	~FragTrap(void);
	void highFivesGuys(void);
};

#endif
