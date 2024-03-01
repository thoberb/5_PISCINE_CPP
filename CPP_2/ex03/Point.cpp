/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:16:00 by blandineber       #+#    #+#             */
/*   Updated: 2024/02/26 18:03:26 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float f1, const float f2) : _x(f1), _y(f2)
{
	//std::cout << "Float constructor called" << std::endl;
}

Point::Point(const Point& point) : _x(point.getX()), _y(point.getY())
{
	//std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point& point)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &point)
	{
		(Fixed)this->_x = point.getX();
		(Fixed)this->_y = point.getY();
	}
	return (*this);
}

Point::~Point(void)
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed Point::getX(void) const
{
	return (_x);
}

Fixed Point::getY(void) const
{
	return (_y);
}
