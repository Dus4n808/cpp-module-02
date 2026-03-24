/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:44:57 by dufama            #+#    #+#             */
/*   Updated: 2026/03/24 18:15:22 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"
//Defaut
Fixed::Fixed() : _fixedPoint(0) {
}

//copy
Fixed::Fixed(const Fixed &copy) : _fixedPoint(copy._fixedPoint) {
}

//int
Fixed::Fixed(const int value) : _fixedPoint(value << _bits) {
}

//float
Fixed::Fixed(const float value) : _fixedPoint(roundf(value * (1 << _bits))) {
}

//member
int Fixed::toInt(void) const {
	return _fixedPoint >> _bits;
}

float Fixed::toFloat(void) const {
	return (float)_fixedPoint / (float)(1 << _bits);
}

//assign
Fixed &Fixed::operator=(const Fixed &rhs) {
	if (this != &rhs)
		_fixedPoint = rhs._fixedPoint;
	return *this;
}

//destructor
Fixed::~Fixed() {
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj) {
	out << obj.toFloat();
	return out;
}

bool Fixed::operator>(const Fixed &a) const {
	return this->_fixedPoint > a._fixedPoint;
}

bool Fixed::operator<(const Fixed &a) const {
	return this->_fixedPoint < a._fixedPoint;
}

bool Fixed::operator>=(const Fixed &a) const {
	return this->_fixedPoint >= a._fixedPoint;
}

bool Fixed::operator<=(const Fixed &a) const {
	return this->_fixedPoint <= a._fixedPoint;
}

bool Fixed::operator==(const Fixed &a) const {
	return this->_fixedPoint == a._fixedPoint;
}

bool Fixed::operator!=(const Fixed &a) const {
	return this->_fixedPoint != a._fixedPoint;
}

Fixed Fixed::operator+(const Fixed &a) const {
	return Fixed(this->toFloat() + a.toFloat());
}

Fixed Fixed::operator-(const Fixed &a) const {
	return Fixed(this->toFloat() - a.toFloat());
}

Fixed Fixed::operator*(const Fixed &a) const {
	return Fixed(this->toFloat() * a.toFloat());
}

Fixed Fixed::operator/(const Fixed &a) const {
	return Fixed(this->toFloat() / a.toFloat());
}

Fixed &Fixed::operator++(void) {
	this->_fixedPoint += 1;
	return *this;
}

Fixed &Fixed::operator--(void) {
	this->_fixedPoint -= 1;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed old(*this);
	this->_fixedPoint += 1;
	return old;
}

Fixed Fixed::operator--(int) {
	Fixed old(*this);
	this->_fixedPoint -= 1;
	return old;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return a;
	return b;
}




