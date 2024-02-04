/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:11:43 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/04 16:48:29 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int replace (std::string inputFilename, std::string s1, std::string s2)
{
	std::string outputFilename = inputFilename;
	outputFilename.append(".replace");
	std::string line;

	std::ifstream inputFile(inputFilename);
	if(!inputFile.is_open())
	{
		std::cerr << "Error opening file : " << inputFilename << std::endl;
		return 1;
	}
	std::ofstream outputFile(outputFilename, std::ios::out);
	if(!outputFile.is_open())
	{
		std::cerr << "Error opening file : " << outputFilename << std::endl;
		return 1;
	}
	while(std::getline(inputFile, line))
	{
		outputFile << line << std::endl;
		std::size_t found = line.find(s1);
		if (found!=std::string::npos)
			std::cout << "s1 found at : " << found;
		
	}
	inputFile.close();
	outputFile.close();
	return 0;
}

int main (int argc, char **argv)
{
	std::string s1;
	std::string s2;
	std::string inputFinalname;

	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments (filename, string to replace, replacement)" << std::endl;
		return 1;
	}
	inputFinalname = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (replace(inputFinalname, s1, s2) == 1)
		return 1;
	return 0;
}






