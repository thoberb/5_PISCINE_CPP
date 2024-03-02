/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:18:18 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/02 18:23:39 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _catbrain;
	public:
		Cat(void);
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);
		~Cat(void);

		void makeSound(void) const;
};

#endif
