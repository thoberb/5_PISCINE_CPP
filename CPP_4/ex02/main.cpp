/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:55:06 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/02 18:56:55 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	int i = 0;
	const Animal* j[20];

	while(i++ <= 20)
	{
		if (i <= 10)
			j[i] = new Dog();
		else
			j[i] = new Cat();
	}

	i = 0;
	while(i++ <= 20)
		delete(j[i]);
}
