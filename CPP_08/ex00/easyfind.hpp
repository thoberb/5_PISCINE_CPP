/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:38:22 by blandineber       #+#    #+#             */
/*   Updated: 2024/04/03 12:57:35 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <list>
# include <exception>

class ValueNotFound : public std::exception
{
	public :
		const char* what() const throw(){
			return "Value not found";
		}
};

template<typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator i = std::find(container.begin(), container.end(), value);
	if (i == container.end())
		throw ValueNotFound();
	return (i);
}

#endif
