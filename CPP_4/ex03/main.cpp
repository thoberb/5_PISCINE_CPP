/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:48:37 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/05 19:31:06 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// int main(void)
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* player = new Character("Player");
	ICharacter* enemy = new Character("Enemy");

	AMateria* ice = src->createMateria("ice");
	AMateria* cure = src->createMateria("cure");

	// Test equipping materias
	player->equip(ice);
	player->equip(cure);

	// Use materias on enemy
	player->use(0, *enemy);
	player->use(1, *enemy);

	// Test unequip and re-equip functionality
	player->unequip(0);
	player->equip(ice);

	// Use materias on enemy again
	player->use(0, *enemy);
	player->use(1, *enemy);

	// Test copy constructor and assignment operator for Character
	Character* clonePlayer = new Character(*dynamic_cast<Character*>(player));
	Character* anotherPlayer = new Character("Another Player");
	*anotherPlayer = *clonePlayer;

	// Use materias with cloned player
	clonePlayer->use(0, *enemy);
	clonePlayer->use(1, *enemy);

	// Cleanup
	delete src;
	delete player;
	delete enemy;
	delete clonePlayer;
	delete anotherPlayer;

	// Optional: Additional tests can be added here to further validate the functionality.

	return 0;
}
