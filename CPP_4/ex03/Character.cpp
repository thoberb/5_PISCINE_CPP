/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:29:07 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/04 23:14:07 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << BOLD_YELLOW "Constructor called for Character " << _name << RESET << std::endl;
	_nbMateria = 0;
	int i = -1;
	while (i++ < 4)
		_inventory[i] = NULL;
}

Character::Character(const Character& character)
{
	std::cout << BOLD_YELLOW "Copy constructor called for Character " << _name << RESET << std::endl;
	_name = character._name;
	_nbMateria = character._nbMateria;
	int i = -1;
	while (i++ < 4)
	{
		if (character._inventory[i])
			_inventory[i] = (character._inventory[i])->clone();
	}
}

Character& Character::operator=(const Character& character)
{
	std::cout << BOLD_YELLOW "Copy assignment operator called for Character " << _name << RESET << std::endl;
	if (this != &character)
	{
		this->_name = character._name;
		this->_nbMateria = character._nbMateria;
		int i = -1;
		while (i++ < 4)
		{
			if (character._inventory[i])
				_inventory[i] = (character._inventory[i])->clone();
		}
	}
	return(*this);
}

Character::~Character(void)
{
	std::cout << BOLD_YELLOW "Destructor called for Character " << _name << RESET << std::endl;
	int i = -1;
	while (i++ < 4)
	{
		if (_inventory[i])
			delete(_inventory[i]);
	}
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	int i = -1;
	while (i++ < 4)
	{
		if (!_inventory[i] && m)
		{
			_inventory[i] = m;
			_nbMateria++;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (_inventory[idx])
	{
		_inventory[idx] = NULL;
		_nbMateria--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4)
		_inventory[idx]->use(target);
}

