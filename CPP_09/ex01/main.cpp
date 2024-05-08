/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:39:32 by bberthod          #+#    #+#             */
/*   Updated: 2024/04/19 14:42:03 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv)
{
	try
	{
		if (argc != 2)
		{
			std::cerr << "Usage : ./RPN 'mathematical RPN expression'" << std::endl;
			return 1;
		}

		RPN RPN;
		std::string expression;

		expression = argv[1];
		std:: cout << RPN.evaluate(expression) << std::endl;
		return 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error caught : " << e.what() << '\n';
	}
}
