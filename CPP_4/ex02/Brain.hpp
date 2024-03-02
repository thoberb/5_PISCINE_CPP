/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:56:17 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/02 18:04:23 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "color.hpp"

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain(void);
		Brain(const Brain& brain);
		Brain& operator=(const Brain& brain);
		~Brain(void);
};

#endif
