/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:16:35 by bberthod          #+#    #+#             */
/*   Updated: 2024/04/19 18:17:19 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv)
{
	try
	{
		if (argc > 2)
		{
			PmergeMe PmergeMe;
			PmergeMe.sort(argv);
			return 0;
		}
		else
			throw MoreThanOne();
	}
	catch(std::exception& e)
	{
		std::cout << "Error : "<< e.what() << std::endl;
	}
}

// Pour tester avec plein de nombres:
// ./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`

// Pour des algorithmes de tri qui nécessitent de fréquentes opérations
// d'insertion et de suppression, comme c'est le cas avec l'algorithme
// Ford-Johnson, les listes sont généralement plus performantes que les
// vecteurs. Les coûts associés au déplacement des éléments dans un
// vecteur dépassent les bénéfices de l'accès rapide aux éléments et de
// la meilleure localité de la mémoire cache, surtout lorsque les
// opérations d'insertion et de suppression sont fréquentes et dispersées
// à travers le conteneur.
