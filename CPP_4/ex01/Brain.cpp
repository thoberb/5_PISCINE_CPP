/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:00:51 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/02 18:10:58 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << BOLD_GREEN "Default constructor called for brain" RESET << std::endl;
	int i = -1;
	while (i++ <= 100)
		_ideas[i] = "Brain idea";
}

Brain::Brain(const Brain& brain)
{
	std::cout << BOLD_GREEN "Copy constructor called for brain" RESET << std::endl;
	int i = -1;
	while(i++ <= 100)
		_ideas[i] = brain._ideas[i];
}

Brain& Brain::operator=(const Brain& brain)
{
	std::cout << BOLD_GREEN "Copy assignment operator called for brain" RESET << std::endl;
	if (this != &brain)
	{
		int i = -1;
		while(i++ <= 100)
			this->_ideas[i] = brain._ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << BOLD_GREEN "Destructor called for brain" RESET << std::endl;
}
