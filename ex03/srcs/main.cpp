/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 13:36:37 by dufama            #+#    #+#             */
/*   Updated: 2026/03/25 15:07:44 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Point.hpp"

int main()
{
	bool res;
	Point a(0,0);
	Point b(10, 0);
	Point c(0, 10);
	Point toTest(2, 2);

	std::cout << std::endl << " ==== First Test === " << std::endl;
	std::cout << "A : " << a.getX() << " : " << a.getY() << std::endl;
	std::cout << "B : " << b.getX() << " : " << b.getY() << std::endl;
	std::cout << "C : " << c.getX() << " : " << c.getY() << std::endl;
	std::cout << "to test : " << toTest.getX() << " : " << toTest.getY() << std::endl;

	res = bsp(a, b, c, toTest);
	if (res)
		std::cout << "Result : " << "Inside" << std::endl;
	else
		std::cout << "Result : " << "Oustside" << std::endl;
	Point a1(0,0);
	Point b1(10, 0);
	Point c1(0, 10);
	Point toTest1(5, 0);

	std::cout << std::endl << " ==== Second Test === " << std::endl;
	std::cout << "A1 : " << a1.getX() << " : " << a1.getY() << std::endl;
	std::cout << "B1 : " << b1.getX() << " : " << b1.getY() << std::endl;
	std::cout << "C1 : " << c1.getX() << " : " << c1.getY() << std::endl;
	std::cout << "to test 1: " << toTest1.getX() << " : " << toTest1.getY() << std::endl;

	res = bsp(a1, b1, c1, toTest1);
	if (res)
		std::cout << "Result : " << "Inside" << std::endl;
	else
		std::cout << "Result : " << "Oustside" << std::endl;
}
