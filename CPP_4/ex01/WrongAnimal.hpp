/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:10:00 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/02 17:50:02 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include "color.hpp"

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& wronganimal);
		WrongAnimal& operator=(const WrongAnimal& wronganimal);
		virtual ~WrongAnimal(void);

		std::string getType(void) const;
		void makeSound(void) const;

};

#endif
