/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:03:41 by blandineber       #+#    #+#             */
/*   Updated: 2024/05/04 19:26:13 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

int main()
{
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
		
		Span sp2 = Span(5);
		std::vector<int> numbersToAdd;
		numbersToAdd.push_back(6);
		numbersToAdd.push_back(3);
		numbersToAdd.push_back(9);
		numbersToAdd.push_back(17);
		numbersToAdd.push_back(11);
		sp2.addNumber(numbersToAdd.begin(), numbersToAdd.end());

		std::cout << "Shortest span : " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp2.longestSpan() << std::endl;
		return 0;
	}
	catch(MaximumMet& e){
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
	catch(MinimumForSpan& e){
		std::cout << "Exception caught : " << e.what() << std::endl;
	}

}
