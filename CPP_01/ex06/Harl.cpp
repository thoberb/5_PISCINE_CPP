/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:14:15 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/13 17:35:19 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout <<  "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::filter(std::string level)
{
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functionPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;

	while (i < 4)
	{
		if (tab[i] == level)
		{
			while (i < 4)
			{
				(this->*functionPtr[i])();
				i++;
			}
			return ;
		}
		i++;
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
