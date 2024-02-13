/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:32:20 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/13 17:04:35 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl Harl;

	Harl.complain("debug");
	Harl.complain("info");
	Harl.complain("warning");
	Harl.complain("error");
	Harl.complain("false");
	return 0;
}
