/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:11:43 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/15 16:05:07 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	write(std::ofstream& outputFile, std::string& line, std::string& s1, std::string& s2)
{
	std::size_t found = line.find(s1);
	if (found != std::string::npos)
		outputFile << line.substr(0, found) + s2 + line.substr((found + s1.length()), (line.length() - s1.length())) << std::endl;
	else
		outputFile << line << std::endl;
}

int replace (std::string inputFilename, std::string s1, std::string s2)
{
	(void)s2;
	std::string outputFilename = inputFilename;
	outputFilename.append(".replace");
	std::string line;

	std::ifstream inputFile(inputFilename.c_str());
	if(!inputFile.is_open())
	{
		std::cerr << "Error opening file : " << inputFilename << std::endl;
		return 1;
	}
	std::ofstream outputFile(outputFilename.c_str(), std::ios::out);
	if(!outputFile.is_open())
	{
		std::cerr << "Error opening file : " << outputFilename << std::endl;
		return 1;
	}
	while(std::getline(inputFile, line))
		write(outputFile, line, s1, s2);
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






