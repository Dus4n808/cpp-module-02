/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 18:02:22 by dufama            #+#    #+#             */
/*   Updated: 2026/03/27 15:44:12 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : _fixedPoint(other._fixedPoint) {
	std::cout << "Copy constructor called" << std::endl;
}


Fixed &Fixed::operator=(const Fixed &e) {
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &e)
		_fixedPoint = e._fixedPoint;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value) {
	out << value.toFloat();
	return out;
}

Fixed::Fixed(const int value) : _fixedPoint(value << _bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _fixedPoint(roundf(value * (1 << _bits))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const {
	return _fixedPoint >> _bits;
}

float Fixed::toFloat(void) const {
	return (float)_fixedPoint / (float)(1 << _bits);
}
