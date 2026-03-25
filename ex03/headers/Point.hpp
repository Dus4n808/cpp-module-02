/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 13:37:05 by dufama            #+#    #+#             */
/*   Updated: 2026/03/25 14:22:59 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "../headers/Fixed.hpp"

class Point {
	private:
		const Fixed _x;
		const Fixed _y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);
		Point &operator=(const Point &rhs);
		~Point();
		Fixed getX() const;
		Fixed getY() const;
};


bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
