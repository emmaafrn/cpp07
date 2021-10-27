#include "whatever.hpp"

int	main(void){
	int x = 42;
	int y = 24;
	char a = 'a';
	char b = 'b';
	double i = 42.42;
	double j = 24.24;

	std::cout << "-------------------------------------- INT --------------------------------------\n";

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	
	if (min(x, y) == x)
		std::cout << "Smaller number : x = " << x << std::endl;
	else
		std::cout << "Smaller number : y = " << y << std::endl;
	if (max(x, y) == x)
		std::cout << "Biggest number : x = " << x << std::endl;
	else
		std::cout << "Biggest number : y = " << y << std::endl;

	swap(x, y);

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;

	if (min(x, y) == x)
		std::cout << "Smaller number : x = " << x << std::endl;
	else
		std::cout << "Smaller number : y = " << y << std::endl;
	if (max(x, y) == x)
		std::cout << "Biggest number : x = " << x << std::endl;
	else
		std::cout << "Biggest number : y = " << y << std::endl;

	std::cout << "-------------------------------------- CHAR --------------------------------------\n";

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	if (min(a, b) == a)
		std::cout << "Smaller char is a" << std::endl;
	else
		std::cout << "Smaller char is b" << std::endl;
	if (max(a, b) == a)
		std::cout << "Biggest char is a" << std::endl;
	else
		std::cout << "Biggest char is b" << std::endl;

	swap(a, b);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	
	if (min(a, b) == a)
		std::cout << "Smaller char is a" << std::endl;
	else
		std::cout << "Smaller char is b" << std::endl;
	if (max(a, b) == a)
		std::cout << "Biggest char is a" << std::endl;
	else
		std::cout << "Biggest char is b" << std::endl;

	std::cout << "------------------------------------ DOUBLE ------------------------------------\n";

	std::cout << "i = " << i << std::endl;
	std::cout << "j = " << j << std::endl;

	if (min(i, j) == i)
		std::cout << "Smaller number is i" << std::endl;
	else
		std::cout << "Smaller number is j" << std::endl;
	if (max(i, j) == i)
		std::cout << "Biggest number is i" << std::endl;
	else
		std::cout << "Biggest number is j" << std::endl;

	swap(i, j);

	std::cout << "i = " << i << std::endl;
	std::cout << "j = " << j << std::endl;
	
	if (min(i, j) == i)
		std::cout << "Smaller number is i" << std::endl;
	else
		std::cout << "Smaller number is j" << std::endl;
	if (max(i, j) == i)
		std::cout << "Biggest number is i" << std::endl;
	else
		std::cout << "Biggest number is j" << std::endl;
}