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