/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:09:43 by blandineber       #+#    #+#             */
/*   Updated: 2024/04/25 16:03:19 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return (a);
	else
		return(b);
}

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
