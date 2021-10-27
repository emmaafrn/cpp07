#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T& a,  T& b){
	T	c;

	c = a;
	a = b;
	b = c;
}

template <typename T>
T&		min(T& x, T& y){
	if (x < y)
		return x;
	return (y);
}

template <typename T>
T&		max(T& x, T& y){
	if (x > y)
		return (x);
	return (y);
}

#endif