/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:31:40 by blandineber       #+#    #+#             */
/*   Updated: 2024/04/18 14:35:10 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>

BitcoinExchange::BitcoinExchange()
{
	std::cout << "Constructor called for BitcoinExchange" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& rhs) : _priceData(rhs._priceData)
{
	std::cout << "Copy constructor called for BitcoinExchange" << std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
	std::cout << "Copy assignment operator called for BitcoinExchange" << std::endl;
	if(this != &rhs)
		this->_priceData = rhs._priceData;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "Destructor called for BitcoinExchange" << std::endl;
}

void BitcoinExchange::loadData(const std::string& filename)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
		throw FileNotOpening();

	std::string line;
	getline(file, line);

	while(getline(file, line))
	{
		std::istringstream iss(line);
		std::string dateStr, priceStr;
		double price;

		if (!getline(iss, dateStr, ',') || !getline(iss, priceStr))
			throw WeirdCSVFile();

		price = std::atof(priceStr.c_str());

		_priceData[dateStr] = price;
	}

	file.close();
}

int daysInMonth(int year, int month)
{

	const int daysInMonths[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		return 29;
	return daysInMonths[month];
}

int BitcoinExchange::badDate(std::string& date) const
{
	std::istringstream ss(date);
	char delimiter;
	int year, month, day;

	if (!(ss >> year >> delimiter >> month >> delimiter >> day) || delimiter != '-')
		std::cerr << "Error: bad date input => " << date << std::endl;

	else if (year < 2009 || year > 2024 || month < 1 || month > 12 || day < 1 || day > daysInMonth(year, month))
		std::cerr << "Error: bad date input => " << date << std::endl;

	else if (year == 2024 && month > 2 && day > 17)
		std::cerr << "Error: bad date input => " << date << std::endl;
	return 0;
}

int BitcoinExchange::badValue(double& value) const
{
	if (value < 0)
	{
		std::cerr << "Error: not a positive number => " << value << std::endl;
		return 1;
	}
	if (value > 1000)
	{
		std::cerr << "Error: too large a number => " << value << std::endl;
		return 1;
	}
	else
		return 0;
}

void BitcoinExchange::getBitcoinPrice(const std::string& line)
{
	std::istringstream iss(line);
	std::string date;
	char delimiter;
	double value;
	double price;

	if (!(iss >> date >> delimiter >> value))
		std::cerr << "Error: bad input => " << line << std::endl;

	else if (!badDate(date) && !badValue(value))
	{
		std::map<std::string, double>::iterator it = _priceData.lower_bound(date);
		if (it == _priceData.end())
			it--;
		else if (it->first != date && it != _priceData.begin())
			it--;
		price = it->second * value;
		std::cout << date << " => " << value << " = " << price << std::endl;
	}
}
