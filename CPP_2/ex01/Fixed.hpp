/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:27:48 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/15 16:49:01 by bberthod         ###   ########.fr       */
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


// Ajoutez à votre classe les constructeurs et les fonctions membres suivants en public :
// • Un constructeur prenant un entier constant en paramètre et qui convertit celuici en virgule fixe. Le nombre de bits de la partie fractionnaire est initialisé à 8
// comme dans l’exercice 00.
// • Un constructeur prenant un flottant constant en paramètre et qui convertit
// celui-ci en virgule fixe. Le nombre de bits de la partie fractionnaire est initialisé à
// 8 comme dans l’exercice 00.
// • Une fonction membre float toFloat( void ) const;
// qui convertit la valeur en virgule fixe en nombre à virgule flottante.
// • Une fonction membre int toInt( void ) const;
// qui convertit la valeur en virgule fixe en nombre entier.
// Ajoutez également la fonction suivante à vos fichiers de la classe Fixed :
// • Une surcharge de l’opérateur d’insertion («) qui insère une représentation en virgule flottante du nombre à virgule fixe dans le flux de sortie (objet output stream)
// passé en paramètre.
