/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:29:09 by blandineber       #+#    #+#             */
/*   Updated: 2024/01/30 19:25:21 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Welcome to your PhoneBook, your repository is empty" << std::endl;
	_oldestindex = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Thanks for using PhoneBook, your contacts have been deleted" << std::endl;
}

void	PhoneBook::addcontact(const std::string& firstname, const std::string& lastname, const std::string& nickname, const std::string& phonenumber, const std::string& darkestsecret)
{
	_contacts[_oldestindex].setFirstName(firstname);
	_contacts[_oldestindex].setLastName(lastname);
	_contacts[_oldestindex].setNickname(nickname);
	_contacts[_oldestindex].setPhoneNumber(phonenumber);
	_contacts[_oldestindex].setDarkestSecret(darkestsecret);

	_oldestindex = (_oldestindex + 1) % 8;

	std::cout << "Contact added successfully" << std::endl;
}

int	isDigitsOnly(char *input)
{
	int i;

	i = 0;
	while (input[i])
	{
		if (!isdigit(input[i]))
			return (0);
		i++;
	}
	return (1);
}

void	PhoneBook::searchcontact(void)
{
	int	i;
	int index;
	char input[512];

	i = 0;
	index = 0;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	while (i < 8)
	{
		if (!_contacts[i].getFirstName().empty())
		{
			std::string firstname = _contacts[i].getFirstName();
			std::string lastname = _contacts[i].getLastName();
			std::string nickname = _contacts[i].getNickname();
			if (sizeof(firstname) > 10)
				firstname[9] = '.';
			if (sizeof(lastname) > 10)
				firstname[9] = '.';
			if (sizeof(nickname) > 10)
				firstname[9] = '.';
			std::cout	<< "|" << std::setw(10) << i
						<< "|" << std::setw(10) << firstname.substr(0, 10)
						<< "|" << std::setw(10) << lastname.substr(0, 10)
						<< "|" << std::setw(10) << nickname.substr(0, 10)
						<< "|" << std::endl;
		}
		i++;
	}
	i = 0;
	std::cout << "To see a contact's information, enter it's index : " << std::endl;
	while (index != 1)
	{
		std::cin.getline(input, sizeof(input));
		if (isDigitsOnly(input) && atoi(input) >= 0 && atoi(input) <= 7)
		{
			index = 1;
			std::cout << "First name : " << _contacts[atoi(input)].getFirstName() << std::endl;
			std::cout << "Last name : " << _contacts[atoi(input)].getLastName() << std::endl;
			std::cout << "Nickname : " << _contacts[atoi(input)].getNickname() << std::endl;
			std::cout << "Phone number : " << _contacts[atoi(input)].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret : " << _contacts[atoi(input)].getDarkestSecret() << std::endl;
		}
		else
			std::cout << "The index should be an integer between 0 and 7" << std::endl;
	}
}
