/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:31:58 by blandineber       #+#    #+#             */
/*   Updated: 2024/05/05 17:41:19 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char* argv[])
{
	try
	{
		if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
		return 1;
		}

		std::string dataFilename = "data.csv";
		std::string inputFilename = argv[1];

		BitcoinExchange exchange;
		exchange.loadData(dataFilename);

		std::ifstream inputFile(inputFilename.c_str());
		if (!inputFile.is_open())
			throw FileNotOpening();

		std::string line;
		while (getline(inputFile, line))
			exchange.getBitcoinPrice(line);

		inputFile.close();
		return 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught : " << e.what() << '\n';
	}
}

