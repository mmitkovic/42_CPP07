/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 18:05:56 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/02/27 20:43:10 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

// Tip: Try to compile int * a = new int(); then display *a.
int main() 
{
	Array<int> a(5);
	std::cout << "Size: " << a.size() << std::endl;

	try {
		a[0] = 6;
		a.print();
		a[5] = 125;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	Array<int> b(a);
	try {
		std::cout << "Testing [c][c] : ";
		b.print();
		std::cout << "Changing b[0] to 42";
		b[0] = 42;
		std::cout << std::endl;
		std::cout << "Testing array b: ";
		b.print();
		std::cout << "Testing array a: ";
		a.print();
		b[5] = 125;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}


	return 0;
}