/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 18:06:06 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/02/27 18:06:07 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() 
{
	{
		std::cout << "___INT___" << std::endl;
		 int arr[3] = {1, 2, 10};
		::iter(arr, 3, mult<int>);

		for (int i = 0; i < 3; ++i)
			std::cout << arr[i] << std::endl;
	}
	{
		std::cout << "___DOUBLE___" << std::endl;
		double arrDbl[3] = {1.5, 2.5, 10.5};
		::iter(arrDbl, 3, mult<double>);

		for (int i = 0; i < 3; ++i)
			std::cout << arrDbl[i] << std::endl;
	}
	{
		std::cout << "___PRINT___" << std::endl;
		const char arrChar[3] = {'a', 'b', 'c'};
		::iter(arrChar, 3, print<char>);
	}

	return 0;
}