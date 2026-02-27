/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 18:08:42 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/02/27 20:26:32 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
private:
	unsigned int _size;
	T *newArr;
public:
	Array();
	Array(unsigned int size);
	Array(const Array& rhs);
	Array& operator=(const Array& rhs);
	~Array();

	class OutOfBounds : public std::exception
	{
	public:
		virtual const char* what() const throw() {
			return "Array out of the bounds, throwing error";
		}
	};

	T& operator[](unsigned int);
	unsigned int size() const;
	void print() const;
};
#include "Array.tpp"

#endif