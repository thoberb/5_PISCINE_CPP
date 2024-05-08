/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:47:42 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/13 15:35:45 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		// Test constructing Bureaucrats with valid grades
		Bureaucrat alice("Alice", 2);
		Bureaucrat bob("Bob", 140);
		std::cout << alice << std::endl;
		std::cout << bob << std::endl;

		// Test increment and decrement at boundary conditions
		alice.incrementGrade(); // Should be fine
		std::cout << alice << std::endl;
		bob.decrementGrade(); // Should be fine
		std::cout << bob << std::endl;

		// Test increment and decrement beyond boundary conditions
		Bureaucrat charlie("Charlie", 1);
		charlie.incrementGrade(); // Should throw an exception

	} catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}
