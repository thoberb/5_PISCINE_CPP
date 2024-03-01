/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:50:54 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/01 19:23:13 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "color.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(const Animal& animal);
		Animal& operator=(const Animal& animal);
		~Animal(void);
		void getType(void) const;
		void makeSound(void) const;
};

#endif
