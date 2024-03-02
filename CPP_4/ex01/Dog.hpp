/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:14:52 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/02 18:23:33 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _dogbrain;
	public:
		Dog(void);
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);
		~Dog(void);

		void makeSound(void) const;
};

#endif
