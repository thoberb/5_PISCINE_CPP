/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:14:00 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/13 17:28:21 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl Harl;
	if (argc != 2)
		return (std::cerr << "wrong number of arguments" << std::endl, 1);
	Harl.filter(argv[1]);
	return 0;
}
