/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:27:48 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/21 17:47:02 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _valeur;
		const static int _fracBits = 8;
	public:
		Fixed(const int number);
		Fixed(const float number);
		Fixed(void);
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed& fixed);
		~Fixed(void);
		float toFloat(void) const;
		int toInt(void) const;
		int	getRawBits(void) const;
		void	setRawBits(int const valeur);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
