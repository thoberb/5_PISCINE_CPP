/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:42:33 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/03 12:50:06 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string myString = "HI THIS IS BRAIN";
	std::string *stringPTR = &myString;
	std::string &stringREF = myString;

	std::cout << "adresse de la string en memoire " << &myString << std::endl;
	std::cout << "adresse stockee dans stringPTR " << stringPTR << std::endl;
	std::cout << "adresse stockee dans stringREF " << &stringREF << std::endl;

	std::cout << "valeur de la string " << myString << std::endl;
	std::cout << "valeur pointee par stringPTR " << *stringPTR << std::endl;
	std::cout << "valeur pointee par stringREF " << stringREF << std::endl;
}
