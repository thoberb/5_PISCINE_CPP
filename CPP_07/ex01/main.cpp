/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:16:19 by blandineber       #+#    #+#             */
/*   Updated: 2024/04/25 16:15:19 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

// Fonction pour afficher un élément
template <typename T>
void printElement(T &element)
{
	std::cout << element << std::endl;
}

// Fonction pour incrémenter un élément
void increment(int &n)
{
	n++;
}

int main()
{
	// Tableau d'entiers
	int arrInt[] = {1, 2, 3, 4, 5};
	int lengthInt = sizeof(arrInt) / sizeof(*arrInt);
	std::cout << "Array of ints before increment:" << std::endl;
	iter(arrInt, lengthInt, printElement);
	std::cout << std::endl;
	iter(arrInt, lengthInt, increment);
	std::cout << "Array of ints after increment:" << std::endl;
	iter(arrInt, lengthInt, printElement);


	std::cout << std::endl;
	std::cout << "----------------------" << std::endl;
	std::cout << std::endl;


	// Tableau de chaînes de caractères
	std::string arrStr[] = {"hello", "world", "this", "is", "C++"};
	int lengthStr = sizeof(arrStr) / sizeof(*arrStr);

	std::cout << "Array of strings:" << std::endl;
	iter(arrStr, lengthStr, printElement);

	return 0;
}


	// arrInt[] = {1, 2, 3, 4, 5};
	// sizeof(arrInt) donne la taille totale du tableau en octets.
	// Si chaque int est de 4 octets et qu'il y a 5 entiers, alors
	// sizeof(arrInt) sera 20 octets.
	// sizeof(*arrInt) donne la taille d'un élément du tableau,
	// qui est la taille d'un int. Dans ce cas, cela serait
	// typiquement 4 octets.
