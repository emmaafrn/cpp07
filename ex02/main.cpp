#include "Array.hpp"

int	main(void){
	Array<int> monPotitArray;
	Array<int> ArrayBis(5);

	std::cout << "Number of elements in the array : " << monPotitArray.size() << std::endl;
	ArrayBis[0] = 0;
	ArrayBis[1] = 15;
	ArrayBis[2] = 24;
	ArrayBis[3] = 42;
	ArrayBis[4] = 1;
	

}