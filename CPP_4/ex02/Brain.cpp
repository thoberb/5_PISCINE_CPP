/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:00:51 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/05 18:22:53 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << BOLD_GREEN "Default constructor called for brain" RESET << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "Brain idea";
}

Brain::Brain(const Brain& brain)
{
	std::cout << BOLD_GREEN "Copy constructor called for brain" RESET << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = brain._ideas[i];
}

Brain& Brain::operator=(const Brain& brain)
{
	std::cout << BOLD_GREEN "Copy assignment operator called for brain" RESET << std::endl;
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = "Brain idea";
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << BOLD_GREEN "Destructor called for brain" RESET << std::endl;
}
