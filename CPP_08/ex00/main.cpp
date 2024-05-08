/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:34:57 by blandineber       #+#    #+#             */
/*   Updated: 2024/05/04 19:15:02 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	try{
		std::vector<int> vec;
		for (int i = 0; i < 10; i++)
			vec.push_back(i * 2);
		std::vector<int>::iterator it = easyfind(vec, 4);
		std::cout << "Found value at index " << *it << std::endl;

		std::list<int> lst;
		for (int i = 0; i < 10; i++)
			lst.push_back(i * 2);
		std::list<int>::iterator it2 = easyfind(lst, 18);
		std::cout << "Found value at index " << *it2 << std::endl;

		std::vector<int> vec2;
		for (int i = 0; i < 10; i++)
			vec2.push_back(i * 2);
		std::vector<int>::iterator it3 = easyfind(vec2, 3);
		std::cout << "Found value at index " << *it3 << std::endl;
	}
	catch(ValueNotFound& e){
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
}
