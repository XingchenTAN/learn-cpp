#include "Complexe.h"
#include <iostream>

int main() {

	Complexe c1(1, 2);
	Complexe c2(3, 2);

	c1.Homothetie(5).GetRe();

	Complexe c3 = c1 + c2;

	std::cout << c3 << std::endl;

	system("pause");

	return(0);
}