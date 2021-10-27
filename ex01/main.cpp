#include "iter.hpp"

template<typename T>
void	iterTab(T & x){
	x++;
}
template<typename T>
void	printTab(T & x){
	std::cout << x << std::endl;
}

int	main(void){
	int intTab[3] = {1, 2, 3};
	char charTab[3] = {'a', 'b', 'c'};
	double doubleTab[3] = {42.1, 42.2, 42.3};

	std::cout << "-------------------------------------- INT --------------------------------------\n";
	iter(intTab, 3, printTab);
	iter(intTab, 3, iterTab);
	iter(intTab, 3, printTab);
	std::cout << "-------------------------------------- CHAR --------------------------------------\n";
	iter(charTab, 3, printTab);
	iter(charTab, 3, iterTab);
	iter(charTab, 3, printTab);
	std::cout << "------------------------------------- DOUBLE -------------------------------------\n";
	iter(doubleTab, 3, printTab);
	iter(doubleTab, 3, iterTab);
	iter(doubleTab, 3, printTab);

	return (0);
}