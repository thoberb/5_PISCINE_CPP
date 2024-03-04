/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:54:25 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/04 23:19:35 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& ice);
		Ice& operator=(const Ice& ice);
		~Ice(void);

		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif
