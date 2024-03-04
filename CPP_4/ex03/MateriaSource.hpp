/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:08:57 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/04 23:18:51 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _inventory[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& materiaSource);
		MateriaSource& operator=(const MateriaSource& materiaSource);
		~MateriaSource(void);

		void learnMateria(AMateria* mat);
		AMateria* createMateria(std::string const & type);
};

#endif
