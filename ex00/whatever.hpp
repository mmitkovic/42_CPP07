/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 18:06:57 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/02/27 18:06:58 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void swap( T &x,  T &y) {
    T swap = x;
    x = y;
    y = swap;
}

template <typename T> T max( const T &x, const T &y) {
    return (x > y) ? x : y;
}
template <typename T> T min( const T &x, const T &y) {
    return (x < y) ? x : y;
}

#endif