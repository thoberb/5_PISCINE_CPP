/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:29:30 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/12 16:28:22 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "iostream"
# include <iomanip>
# include <cstdlib>
# include <cstring>
# include <cctype>

class Contact
{
	private:
		std::string _FirstName;
		std::string _LastName;
		std::string _Nickname;
		std::string _PhoneNumber;
		std::string _DarkestSecret;
	public:
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickname(void) const;
		std::string getPhoneNumber(void) const;
		std::string getDarkestSecret(void) const;
		void setFirstName(const std::string& firstname);
		void setLastName(const std::string& lastname);
		void setNickname(const std::string& nickname);
		void setPhoneNumber(const std::string& phonenumber);
		void setDarkestSecret(const std::string& darkestsecret);
};

#endif
