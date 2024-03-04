/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:11:45 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/04 23:17:42 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& cure);
		Cure& operator=(const Cure& cure);
		~Cure(void);

		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif
