/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:58:49 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/21 19:02:23 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	_valeur;
		const static int _fracBits = 8;
	public:
		Fixed(void);
		Fixed(const int nombre);
		Fixed(const float nombre);
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed& fixed);
		~Fixed(void);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		bool operator>(const Fixed& nombre) const;
		bool operator<(const Fixed& nombre) const;
		bool operator>=(const Fixed& nombre) const;
		bool operator<=(const Fixed& nombre) const;
		bool operator==(const Fixed& nombre) const;
		bool operator!=(const Fixed& nombre) const;
		float operator+(const Fixed& nombre) const;
		float operator-(const Fixed& nombre) const;
		float operator*(const Fixed& nombre) const;
		float operator/(const Fixed& nombre) const;
		Fixed operator++(int);
		Fixed& operator++(void);
		Fixed operator--(int);
		Fixed& operator--(void);
		static Fixed& min(Fixed& n1, Fixed& n2);
		static const Fixed& min(const Fixed& n1, const Fixed& n2);
		static Fixed& max(Fixed& n1, Fixed& n2);
		static const Fixed& max(const Fixed& n1, const Fixed& n2);
};
	std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
