/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:16:19 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/21 18:58:46 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//https://www.youtube.com/watch?v=HYAgJN3x4GA pour l'explication

float getW1(Point const a, Point const b, Point const c, Point const point)
{
	float w1;

	w1 = a.getX() * (c.getY() - a.getY()) + (point.getY() - a.getY()) * (c.getX() - a.getX()) - point.getX() * (c.getY() - a.getY());
	w1 /= (b.getY() - a.getY()) * (c.getX() - a.getX()) - (b.getX() - a.getX())* (c.getY() - a.getY());
	std::cout << "w1 = " << w1 << std::endl;
	return (w1);
}

float getW2(Point const a, Point const b, Point const c, Point const point, float w1)
{
	float w2;

	w2 = point.getY() - a.getY() - w1 * (b.getY() - a.getY());
	w2 /= c.getY() - a.getY();
	std::cout << "w2 = " << w2 << std::endl;
	return (w2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float w1 = getW1(a, b, c, point);
	float w2 = getW2(a, b, c, point, w1);


	if (w1 > 0 && w2 > 0 && (w1 + w2) < 1) //on ne met pas >= ou <= car si le point est sur une arrete on retourne false
		return true;
	else
		return false;
}
