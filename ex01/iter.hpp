#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T* tab, int size, void (*function)(T &elem)){
	for(int i = 0; i < size; i++){
		function(tab[i]);
	}
}


#endif