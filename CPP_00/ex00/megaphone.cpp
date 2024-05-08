/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:02:31 by blandineber       #+#    #+#             */
/*   Updated: 2024/01/30 14:27:15 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

std::string	toUpper(const std::string& oldstring)
{
	int	i;
	std::string newstring = oldstring;

	i = 0;
	while (oldstring[i])
	{
		newstring[i] = toupper(oldstring[i]);
		i++;
	}
	return (newstring);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc - 1)
		{
			std::cout << toUpper(argv[i]);
			i++;
		}
		std::cout << toUpper(argv[i]) << std::endl;
	}
	return (0);
}
