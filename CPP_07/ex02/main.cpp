/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:30:11 by blandineber       #+#    #+#             */
/*   Updated: 2024/04/25 16:31:28 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	//Pas de param
	std::cout << "PAS DE PARAMS" << std::endl;
	Array<int> LOL;
	std::cout << "size of array : " << LOL.size() << std::endl;
	std::cout << std::endl;

	// Test avec un tableau d'entiers
	std::cout << "UNSIGNED INT AS PARAM" << std::endl;
	Array<int> intArray(5);
	for (unsigned int i = 0; i < intArray.size(); ++i) {
		intArray[i] = i * i;
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
	}
	std::cout << std::endl;

	//Copies
	std::cout << "COPY CONSTRUCTOR" << std::endl;
	Array<int> copie1(intArray);
	for (unsigned int i = 0; i < copie1.size(); ++i) {
		copie1[i] += 1;
		std::cout << "copie[" << i << "] = " << copie1[i] << std::endl;
	}
	std::cout << std::endl;
	for (unsigned int i = 0; i < intArray.size(); ++i) {
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "COPY ASSIGNMENT OPERATOR" << std::endl;
	Array<int> copie2;
	copie2 = intArray;
	for (unsigned int i = 0; i < copie2.size(); ++i) {
		copie2[i] += 4;
		std::cout << "copie[" << i << "] = " << copie2[i] << std::endl;
	}
	std::cout << std::endl;
	for (unsigned int i = 0; i < intArray.size(); ++i) {
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
	}
	std::cout << std::endl;


	// Test avec un tableau de chaînes
	std::cout << "AVEC STRINGS" << std::endl;
	Array<std::string> strArray(3);
	strArray[0] = "Hello";
	strArray[1] = "World";
	strArray[2] = "!";
	for (unsigned int i = 0; i < strArray.size(); ++i) {
		std::cout << "strArray[" << i << "] = " << strArray[i] << std::endl;
	}
	std::cout << std::endl;

	// Test d'accès hors limite
	std::cout << "EXCEPTION TEST" << std::endl;
	try {
		std::cout << intArray[5] << std::endl;
	} catch (const std::out_of_range &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}

