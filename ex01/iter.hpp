/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 18:06:02 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/02/27 18:06:03 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void mult( T& x)
{
	x *= 3;
}

template <typename T>
void print( const T& x)
{
	std::cout << "Print: " << x << std::endl;
}

template <typename T, typename F> 
void iter(T *arr, const size_t lenArr, F func) {
	for (size_t i = 0; i < lenArr; i++)
	{
		func(arr[i]);
	}
}

#endif