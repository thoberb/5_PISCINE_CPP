/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:29:20 by blandineber       #+#    #+#             */
/*   Updated: 2024/01/30 19:24:53 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];
		int	_oldestindex;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addcontact(const std::string& firsname, const std::string& lastname, const std::string& nickname, const std::string& phonenumber, const std::string& darkestsecret);
		void	searchcontact();
};

#endif
