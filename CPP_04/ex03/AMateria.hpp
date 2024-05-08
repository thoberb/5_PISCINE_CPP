/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 19:14:37 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/04 23:25:42 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "color.hpp"
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria& amateria);
		AMateria& operator=(const AMateria& amateria);
		virtual ~AMateria(void);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
