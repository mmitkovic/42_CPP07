/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 18:09:35 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/02/27 20:45:00 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <cstdlib>
#include <exception>

template <typename T>
Array<T>::Array() 
{
	std::cout << "[c]Array" << std::endl;
}
template <typename T>
Array<T>::Array(unsigned int size) : _size(size)
{
	std::cout << "[p][c]Array" << std::endl;
	newArr = new T[size]();
}
template <typename T>
Array<T>::Array(const Array& rhs) 
{
	std::cout << "[c][c]Array" << std::endl;
	
	this->_size = rhs._size;
	newArr = new T[this->_size]();
	for (unsigned int i = 0; i < this->_size; ++i)
	{
		newArr[i] = rhs.newArr[i];
	}
}

/*
	[c][a][o]
*/

template <typename T>
Array<T>::~Array()
{
	std::cout << "~Array" << std::endl;
	delete[] newArr;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (i >= _size) {
		throw Array<T>::OutOfBounds();
	}
	return newArr[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return this->_size;
}

template <typename T>
void Array<T>::print() const
{
	for (unsigned int i = 0; i < _size; ++i)
	{
		std::cout << newArr[i] << " ";
	}
	std::cout << std::endl;	
}