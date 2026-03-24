/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:45:00 by dufama            #+#    #+#             */
/*   Updated: 2026/03/24 18:10:49 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
	private:
		int	_fixedPoint;
		static int const _bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed(const int value);
		Fixed(const float value);
		int toInt(void) const;
		float toFloat(void) const;
		Fixed &operator=(const Fixed &rhs);
		~Fixed(void);

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		//operator
		bool operator>(const Fixed &a) const;
		bool operator<(const Fixed &a) const;
		bool operator>=(const Fixed &a) const;
		bool operator<=(const Fixed &a) const;
		bool operator==(const Fixed &a) const;
		bool operator!=(const Fixed &a) const;
		Fixed operator+(const Fixed &a) const;
		Fixed operator-(const Fixed &a) const;
		Fixed operator*(const Fixed &a) const;
		Fixed operator/(const Fixed &a) const;
		//pré
		Fixed &operator++(void);
		Fixed &operator--(void);
		//post
		Fixed operator++(int);
		Fixed operator--(int);



};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif
