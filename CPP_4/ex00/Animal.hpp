/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:50:54 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/02 17:04:38 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "color.hpp"
# include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(const Animal& animal);
		Animal& operator=(const Animal& animal);
		virtual ~Animal(void);
		
		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif
