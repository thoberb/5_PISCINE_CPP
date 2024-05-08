/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:30:46 by blandineber       #+#    #+#             */
/*   Updated: 2024/04/17 23:18:12 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# include <string>
# include <map>
# include <iostream>
# include <fstream>
# include <sstream>
# include <exception>

class FileNotOpening : public std::exception
{
	public:
		const char* what() const throw(){
			return ("The file did not open");
		}
};

class WeirdCSVFile : public std::exception
{
	public:
		const char* what() const throw(){
			return ("The CSV file is weird");
		}
};


class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& rhs);
		BitcoinExchange& operator=(const BitcoinExchange& rhs);
		~BitcoinExchange();

		void loadData(const std::string& filename);
		void getBitcoinPrice(const std::string& date);
		int badDate(std::string& date) const;
		int badValue(double& value) const;

	private:
		std::map<std::string, double> _priceData;
};

#endif
