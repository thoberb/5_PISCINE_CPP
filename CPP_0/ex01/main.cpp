/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:29:49 by blandineber       #+#    #+#             */
/*   Updated: 2024/01/30 18:04:35 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook Repertory;
	char input[512];

	std::cout << "Please enter a command :" << std::endl;
	std::cin.getline(input, sizeof(input));
	while (strcmp(input, "EXIT") != 0)
	{
		if (strcmp(input, "ADD") == 0)
		{
			std::string firstname, lastname, nickname, phonenumber, darkestsecret;
			std::cout << "Let's add a new contact." << std::endl;
			std::cout << "Enter the contact's first name : ";
			std::getline(std::cin, firstname);
			std::cout << "Enter the contact's last name : ";
			std::getline(std::cin, lastname);
			std::cout << "Enter the contact's nickname : ";
			std::getline(std::cin, nickname);
			std::cout << "Enter the contact's phone number : ";
			std::getline(std::cin, phonenumber);
			std::cout << "Enter the contact's darkest secret : ";
			std::getline(std::cin, darkestsecret);
			Repertory.addcontact(firstname, lastname, nickname, phonenumber, darkestsecret);
		}
		else if (strcmp(input, "SEARCH") == 0)
		{
			std::cout << "Here is your repertory :" << std::endl;
			Repertory.searchcontact();
		}
		else
			std::cout << "ERROR : The right commands are ADD, SEARCH and EXIT" << std::endl;
		std::cin.getline(input, sizeof(input));
	}
	return (0);
}

