/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:03:08 by dufama            #+#    #+#             */
/*   Updated: 2026/03/27 15:12:43 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0) {
	std::cout << "Default constructor called" <<  std::endl;
	return;
}

Fixed::Fixed(const Fixed &other) : _fixedPoint(other._fixedPoint) {
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=(const Fixed &e) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &e)
		_fixedPoint = e._fixedPoint;
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedPoint;
}

void Fixed::setRawBits(int const raw) {
	_fixedPoint = raw;
}


