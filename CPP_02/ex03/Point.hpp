/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:55:50 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/21 19:01:29 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point(void);
		Point(const float f1, const float f2);
		Point(const Point& point);
		Point& operator=(const Point& point);
		~Point(void);
		Fixed getX(void) const;
		Fixed getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
float getW1(Point const a, Point const b, Point const c, Point const point);
float getW2(Point const a, Point const b, Point const c, Point const point);

#endif
