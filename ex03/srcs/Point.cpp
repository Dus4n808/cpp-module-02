/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 13:44:23 by dufama            #+#    #+#             */
/*   Updated: 2026/03/25 14:00:21 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Point.hpp"

//Default
Point::Point() : _x(0), _y(0) {
}

//copy
Point::Point(const Point &copy) : _x(copy._x) , _y(copy._y) {
}

//assing
Point &Point::operator=(const Point &rhs) {
	(void)rhs;
	return *this;
}




