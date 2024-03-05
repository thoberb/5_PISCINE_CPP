/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:29:07 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/05 19:40:48 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name), _nbMateria(0)
{
	std::cout << BOLD_YELLOW "Constructor called for Character " << _name << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}


Character::Character(const Character& character)
{
	std::cout << BOLD_YELLOW "Copy constructor called for Character " << _name << RESET << std::endl;
	_name = character._name;
	_nbMateria = character._nbMateria;
	for (int i = 0; i < 4; i++)
		_inventory[i] = character._inventory[i] ? character._inventory[i]->clone() : NULL;
}

Character& Character::operator=(const Character& character)
{
	if (this != &character)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete _inventory[i];
			_inventory[i] = character._inventory[i] ? character._inventory[i]->clone() : NULL;
		}
	_name = character._name;
	_nbMateria = character._nbMateria;
	}
	return (*this);
}



Character::~Character()
{
	std::cout << BOLD_YELLOW "Destructor called for Character " << _name << RESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}


std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
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
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
}


