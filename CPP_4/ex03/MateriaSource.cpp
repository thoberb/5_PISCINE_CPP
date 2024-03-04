/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:15:16 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/04 23:14:31 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << BOLD_MAGENTA "Default constructor called for MateriaSource" RESET << std::endl;
	int i =-1;
	while (i++ < 4)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource)
{
	std::cout << BOLD_MAGENTA "Copy constructor called for MateriaSource" RESET << std::endl;
	int i=-1;
	while(i++ < 4)
	{
		if (materiaSource._inventory[i])
			_inventory[i] = (materiaSource._inventory[i])->clone();
		else
			_inventory[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materiaSource)
{
	std::cout << BOLD_MAGENTA "Copy assignment operator called for MateriaSource" RESET << std::endl;
	if (this != &materiaSource)
	{
		int i=-1;
		while(i++ < 4)
		{
			if (materiaSource._inventory[i])
				this->_inventory[i] = (materiaSource._inventory[i])->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << BOLD_MAGENTA "Destructor called for MateriaSource" RESET << std::endl;
	int i=-1;
	while(i++ < 4)
	{
		if(_inventory[i])
			delete(_inventory[i]);
	}
}


void MateriaSource::learnMateria(AMateria *mat)
{
	if (mat)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!_inventory[i])
			{
				_inventory[i] = mat->clone();
				delete mat;
				return ;
			}
		}
	}
	else
	{
		std::cout << "Unable to learn a NULL Materia" << std::endl;
	}

}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i]->getType() == type)
		{
			return (_inventory[i]->clone());
		}
	}
	return (NULL);
}
