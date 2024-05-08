/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:22:38 by blandineber       #+#    #+#             */
/*   Updated: 2024/04/18 18:31:26 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include "color.hpp"
# include "Data.hpp"

#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <limits>
#include <cctype>
#include <cstdlib>
#include <stdint.h>

class Serializer
{
	private:
		Serializer(void);
		Serializer(const Serializer& serializer);
		Serializer& operator=(const Serializer& serializer);
		~Serializer(void );

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
