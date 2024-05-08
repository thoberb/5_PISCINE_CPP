/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:29:39 by blandineber       #+#    #+#             */
/*   Updated: 2024/01/30 14:51:17 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::getFirstName(void) const
{
	return (_FirstName);
}

std::string Contact::getLastName(void) const
{
	return (_LastName);
}

std::string Contact::getNickname(void) const
{
	return (_Nickname);
}

std::string Contact::getPhoneNumber(void) const
{
	return(_PhoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
	return (_DarkestSecret);
}

void Contact::setFirstName(const std::string& firstname)
{
	_FirstName = firstname;
}

void Contact::setLastName(const std::string& lastname)
{
	_LastName = lastname;
}

void Contact::setNickname(const std::string& nickname)
{
	_Nickname = nickname;
}

void Contact::setPhoneNumber(const std::string& phonenumber)
{
	_PhoneNumber = phonenumber;
}

void Contact::setDarkestSecret(const std::string& darkestsecret)
{
	_DarkestSecret = darkestsecret;
}
